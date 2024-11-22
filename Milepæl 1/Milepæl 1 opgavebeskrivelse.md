## Vejledning til studerende

I dette dokument skal du i grove træk beskrive din løsning til milepælsopgaven.

I skal kunne beskrive hvilke komponenter der er i basen, hvilket går i sektionen komponentliste.

Derefter skal i beskrive basen. Dvs. besvar hvilke komponenter bliver brugt til hvad? 

Hvordan er det blevet brugt? F.eks. hvilke funktioner giver det,

Hvad var udfordringerne undervejs i at få komponenterne til at virke?

Hvad virker godt/er du stolt af at have bygget?

Det i skriver i journalmappen er jeres uge til uge reflektioner, så dette Milepælsdokument er en opsamling til det hele, en oversigt. Dette dokument skal ikke være mere end 1 side eller 2, mens journalen er mere detaljeret.

## Opgave 1 - Base - Milepælsopgave

### Komponentliste
1 x Chassis
4 x DC Gear Motorer
4 x Hjul
1 x ESP32
2 x VL53L0X Sensor
4 x LED
1 x Speaker
2 x Batteri
1 x PCB plade
2 x H-bro
1 x Opbevaringselemenet

### Beskrivelse af basen
På chassiset fæstnes 4 DC Gear motorer ved de dertil designede fordybninger. Hjul fastmonteres. 
PCB plade fastmonteres midt for neden af chassis, på denne tilkobles ESP32'eren. 
I hver side af chassisen påmonteres en VL53L0X Sensor. 
På bagenden monteres et plastik opbevaringselement som kan rumme batterierne. Batterierne påmonteres og tilkobles som energikilde på PCB pladen. 
De to H-broer monteres på undersiden af chassiset og tilkobles henholdsvis motorene og ESP32'eren. 
To LED'er tilkobles strømforsyningen og fastmonteres på Roverens front - gentag for to LED'er til bagenden.
En speaker sættes imellem PCB'en og opbevaringselementet, og tilkobles strømforsyningen + ESP32'eren.

### Udfordinger undervejs



### Hvad er godt ved min Rover?
Min Rover tager udgangspunkt i et design som før er blevet anvendt succesfuldt, desuden er den et perfekt fartøj
til at praktisere noget teori vi har lært indtil videre. Fx. Siden at hjulene på Roveren ikke kan ændre vinkel,
er den eneste måde at få Roveren til at dreje på, at skrive et PWM program som regulere hjulene på en måde som muliggør at Roveren kan ændre kurs.
