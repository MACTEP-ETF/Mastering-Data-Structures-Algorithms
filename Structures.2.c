/*******************************
Autors : Vladimirs Fedorovics
Mērķis : Structure. Bāze2.
*******************************/

// Nr1 Complex No:
struct Complex
{
	int real;
	int img;
	//Size 2, 2  = 4 bytes
}; //Obligāts apzīmējums struct beigām!

int main()
{
	
}

// Nr2 - Student
struct Student
{
	int roll;
	char name[25]; //student name
	char dept[10]; //department name
	char address[50];
	//Size 2, 25, 10, 50  = 77 bytes
};

struct Stundent s; // Tā visa informācija ir VIENAM stundentam
s.roll=10;
s.name="John"


// Nr3 spēļu kārtis

struct Card //apraksts vienai struktūrai
{
	int face;
	int shape;
	int color;
	//Size 2, 2, 2 = 6 bytes
}
int main()
{
	struct Card c;
	c.face=1;
	c.shape=0;
	c.color=0;
	
	// otrs veids kā ievadīt datus locekļos
	struct Card C = {1,0,0};
}


int main()
{
	struct Cards deck[52]; //massīvs ar 52 struktūrām!
	//Size 52*6  = 312 bytes
	
	//datu piešķiršana visām struktūrām aprakstot visus pēc kārtas
	struct Cards deck[52]={ {1,0,0},{2,0,0},{1,1,0},{2,1,0} };
	
	//kā piekļūt datiem
	printf("%d", deck[0].face);
	printf("%d", deck[0].shape);
}