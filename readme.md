  Siste y medio
  	
Introduction:
"The traditional Spanish baraja is an old deck that was brought over by the Moors to Spain during the 14th century. The cards are still called naipes after the n&#257;'ib cards found in the Mamluk deck...

Smaller decks have 40 cards and lack ranks 8, 9 and comodines (jokers). The four suits are bastos (clubs), oros (literally "golds", that is, golden coins), copas (cups), and espadas (swords). The four suits are thought to represent the four social classes of the Middle Ages. The suit of coins represents the merchants, the clubs represents the peasants, the cups represent the church and the swords represent the military.

The three face cards of each suit have pictures similar to the jack, queen, and king in the French deck, and rank identically. They are the sota, which is similar to the jack/knave and generally depicts a page or squire, the caballo (knight, literally "horse"), and the rey (king) respectively."


Goal: 
	This program is a card game called "siete y medio", where user can start by playing the single version of it.

Winning condition:
	Player can beat the dealer by getting cards add up as close to 7 and a half as possible. If the sum is over than 7.5 would be considered as "busting". 
  	Player loses the game whenver a busting happens.


End condition:
	The game keeps going on until the player lose all the money or the dealer lose 900. After each game, players get or lose the bet accordingly. And the hands of players get reset as desired.
  
Implementation aspect:
	For implementation, I added print_card and show_all, these two member function addtionally to help organizing the code so that the main function looks neat. And reset function is added to reset the hand after each game. As well as, for Players, I add win and lose functions to adjust their gaining after each game.
