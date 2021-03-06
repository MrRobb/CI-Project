// Taula per la generacio dels caracters utilitzant un font 5x7 pixels
// A la taula estan els caracters ASCII del 32 al 125
// A les posicions posteriors hi ha simbol no estandard ASCII
 
unsigned const char font5x7[500] = {
	
//CAP
	0x0F, 0x17, 0x1F, 0x17, 0x0F, 		// 0
	// dalt
	0x3E, 0x3E, 0x3E, 0x2A, 0x1C, 		// 5
	// esq
	0x78, 0x74, 0x7C, 0x74, 0x78, 		// 10
	// baix
	0x1C, 0x2A, 0x3E, 0x3E, 0x3E, 		// 15
	// dreta


//COS
	0x00, 0x7F, 0x7F, 0x7F, 0x00, 		// 20
	// vertical
	0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 		// 25
	// horitzontal


//GIRAR
	0x00, 0x7C, 0x7C, 0x7C, 0x1C, 		// 30
	//    |
	// ----    

	0x00, 0x1F, 0x1F, 0x1F, 0x1C, 		// 35
	// ___ 
	//    |

	0x1C, 0x7C, 0x7C, 0x7C, 0x00, 		// 40
	// |
	// ----
	
	0x1C, 0x1F, 0x1F, 0x1F, 0x00, 		// 45
	//  ___ 
	// |  


//APPLE
	0x06, 0x0B, 0x1F, 0x0F, 0x06, 		// 50

//BARRERA
	0x55, 0x55, 0x55, 0x55, 0x55 		// 55


//PLAY
	0x40, 0x40, 0x40, 0x40, 0x40,		// 60
	//baix
	0x01, 0x01, 0x01, 0x01, 0x01,		// 65
	//dalt
	0x00, 0x00, 0x00, 0x55, 0x00,		// 70
	//dreta
	0x00, 0x55, 0x00, 0x00, 0x00,		// 75
	//esq
	
	0x00, 0x00, 0x00, 0x01, 0x01,		// 80
	//corner dreta-dalt
	0x40, 0x40, 0x00, 0x00, 0x00,		// 85
	//corner esq-baix
	0x01, 0x01, 0x00, 0x00, 0x00,		// 90
	//corner esq-dalt
	0x00, 0x00, 0x00, 0x40, 0x40,		// 95
	//corner dreta-baix
	
//FLETXA
	0x00, 0x7F, 0x3E, 0x1C, 0x08		// 100
};



