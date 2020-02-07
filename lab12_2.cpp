#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;    
}

// Write definition of updateImage() and showImage() here
void updateImage(bool x[][M], int y, int z, int c)
{
	for(int i=0;i<=N;i++)
	{
		for(int j=0;j<=M;j++)
		{
			if(sqrt(pow(i-z,2)+pow(j-c,2))<=y-1)
			{
				x[i][j] = 1;
			}
		}
	}
}

void showImage(const bool x[][M])
{
	for(int i=0;i<=M+1;i++)
	{
		cout << "-";
	}
	for(int i=0;i<N;i++)
	{
		cout << "\n";
		cout << "|";
		for(int j=0;j<M;j++)
		{
			if(x[i][j] == 0)
			{
				cout << " ";
			}
			else if(x[i][j] == 1) cout << "*";
		}
		cout << "|";
	}
	cout << "\n";
	for(int i=0;i<=M+1;i++)
	{
		cout << "-";
	}
	cout << "\n";
}
