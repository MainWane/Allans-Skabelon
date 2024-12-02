#include <Arduino.h>
#include "esp32/clk.h"

TaskHandle_t ListenerTask;
TaskHandle_t ActionTask;

QueueHandle_t  q = NULL;

const TickType_t xDelay = (1000 / portTICK_PERIOD_MS); // Indstilling af delay via hardware

void listen(void * parameter) {
  // Her er hvor du vil placere ESP-NOW receive
  int randX;
  for (;;) {
    int randX = random(0, 1023);
    //Serial.println(randX);
    int randY = random(0, 1023);
    //Serial.println(randY);
    xQueueSend(q, (void *)&randX, (TickType_t)0);
    vTaskDelay(xDelay);
  }
}

void act(void * parameter) {
  int randX;
  for (;;) {
    Serial.println("Hello from the second core");
    xQueueReceive(q, &randX, (TickType_t)xDelay);
    Serial.println("From core 0, core 1 got ");
    Serial.println(randX);
    vTaskDelay(xDelay);
  }
}

void setup() {
  Serial.begin(115200);
  q=xQueueCreate(20, sizeof(unsigned long));

  if(q != NULL){
    Serial.println("Queue is created\n");
    vTaskDelay(xDelay);

    xTaskCreatePinnedToCore(
      listen,         // Function to implement the task
      "Task1",        // Name of the task
      10000,          // Stack size in words
      NULL,           // Task input parameter
      2,              // Priority of the task
      &ListenerTask,  // Task handle.
      0);             // Core on which the task should run

    xTaskCreatePinnedToCore(
      act,
      "Task2",
      10000,
      NULL,
      1,
      &ActionTask,
      1);
  }
  else{
        Serial.println("Queue creation failed");
    }  
}
    

void loop() // Empty because tasks are running the show.
{
}