# Jam2026
Global Game Jam 2026 project

Sistemi di gioco

- __Sistema di deckbuilding__: scelta carte tra quelle possibili e aggiunta di maschere per modificatori
- __Combinazione di carte e maschere__: fino a 4 maschere (modificatori) possono essere agganciate ad una carta per cambiarne attributi
- __Estrazione di carte dal mazzo__: Estrazione casuale di carte dal mazzo del giocatore, sistema che gestisce il mazzo e le carte rimanenti
- __Display della mano__: le carte sono ggetti 3D che si posizonano sul palco per essere giocate
- __Sistema a turni__: il giocatore e l'avversario agiscono a turni alterni, l'avversario e' un personaggio in 3D

- Loop di gioco:
 1. recupero mana e carte
 2. Efetto del turno dettato dal boss
 3. Creazione coda delle carte
 4. Calcolo effetti delle carte e danni
 
 Win condition: boss arriva a 0 di vita
 Loss condition: all'inizio del 4o turno