#include <iostream>
#include <stdio.h>

using namespace std;

void flush_in() 
{ 
   int ch;
   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int main()
{
	int di, hi, mi, si;
	int df, hf, mf, sf;
	int dt, ht, mt, st;
	
	scanf("Dia %d", &di);
	flush_in();
	scanf("%d : %d : %d", &hi, &mi, &si);
	flush_in();
	
	scanf("Dia %d", &df);
	flush_in();
	scanf("%d : %d : %d", &hf, &mf, &sf);
	flush_in();
	
	dt = df - di;
	
	if (hf >= hi){
		ht = hf - hi;
	} else {
		ht = (24 - hi) + hf;
		
		dt--;
	}
	
	if (mf >= mi){
		mt = mf - mi;
	} else {
		mt = (60 - mi) + mf;
			
		ht--;
		if (ht < 0){
			ht = 23;
				
			dt--;
		}
	}
	
	if (sf >= si){
		st = sf - si;
	} else {
		st = (60 - si) + sf;
		
		mt--;
		if (mt < 0){
			mt = 59;
			
			ht--;
			if (ht < 0){
				ht = 23;
				
				dt--;
			}
		}
	}
	
	cout << dt << " dia(s)" << endl;
	cout << ht << " hora(s)" << endl;
	cout << mt << " minuto(s)" << endl;
	cout << st << " segundo(s)" << endl;
}