#include <iostream>

using namespace std;

int main()
{
	int picR[4][4]={255,123,23,37,
					45,78,213,145,
					59,84,13,215,
					17,67,53,91};

	int picG[3][3]={255,123,23,
					45,78,213,
					59,84,12};

	int picB[3][3]={255,123,23,
					45,78,213,
					59,84,12};


	char data[100]={};
	 int index=0;
	int count=0;

	cin>>data;

	 for (int i = 0; i <=3; ++i)
			{
				for (int j = 0; j<=3 ; ++j)
				{
					if(count==8)
					{
						count=0;
						index++;
					}

					if((data[index])=='\0')
					{
						break;
					}
					

					int temp=int(data[index]);
					 //cout<<"temp="<<temp<<"\n";
					int binaryData[8]={};
					for (int m = 7;temp!=0; m=m-1)
					{
						binaryData[m]=temp%2;
						temp=temp/2;
					}
					
					int picLSB=picR[i][j]%2;

					if(picLSB==binaryData[count])
					{
						picR[i][j]=picR[i][j];
					}
					else if(picLSB==0 and binaryData[count]==1)
					{
						picR[i][j]=picR[i][j]+1;
					}
					else if(picLSB==1 and binaryData[count]==0)
					{
						picR[i][j]=picR[i][j]-1;
					}


					count++;
				}
			


			}

			for (int i = 0; i <=3; ++i)
			{
				for (int j = 0; j<=3 ; ++j)
				{
					cout<<picR[i][j]<<" ";
				}

				cout<<"\n";
			}

				


		
	
		
}

	

	
	
	
		

		

	
			
	







