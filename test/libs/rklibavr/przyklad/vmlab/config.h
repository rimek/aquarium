#define F_CPU		8000000 //częstotliwość zegara w Hz

//----------------------
// LCD
//----------------------

#define LCD_PORT	PORTB	//port wyświetlacza
#define LCD_RS 		2	//bit linii RS
#define LCD_EN 		3	//bit linii EN
#define LCD_X		20	//liczba znaków w linii wyświetlacza
#define LCD_Y		4	//liczba wierszy wyświetlacza
//#define LCD_BIT_SWAP		//zamiana bitów danych LCD D3<>D0, D2<>D1
#define LCD_WRAP		//zawijanie tekstu
//#define LCD_WIN1250		//polskie znaki wg WIN1250


