#include<iostream>
#include<vector>
using namespace std;
int main()
{
//	vector<vector<int>> vect1;
//	
//	vector<vector<int>> vect2 { 
//	                        {11, 2, 33},
//	                        {74, 5, 66},
//                         	{7, 98, 9}
//};
//
//for (int i = 0; i < vect2.size(); i++)
//{   for (int j = 0; j < vect2[i].size(); j++)
//    {    cout << vect2[i][j] << " ";
//	}
//	cout<<endl;
//}
//
//
////for loop to run through the variables to n to m
//int n = 4;
//int m = 5;
//vector<vector<int>> vect3( n, vector<int>(m));
//
//
//for(int i = 0; i < n; i++)
//{   for(int j = 0; j < m; j++)
//    {   vect3[i][j] = j + i + 1;
//	}
//}
//
////for loop to run through the variable m to n
//for(int i=0;i<n;i++)
//{
//	for(int j=0;j<m;j++)
//	{
//		cout<<vect3[i][j]<<" ";
//	}
//	cout<<endl;
//}
//cout<<"\n\n";

//-----------------------------------------------------------------------

int row = 5;
//we define the number of 

int column[]={5,3,4,2,1};
vector<vector<int>> vec(row);

{/* Declaring the size of the column. */
	for(int i=0;i<row;i++){
	
   int col = column[i];
   vec[i] = vector<int>(col);
   for(int j = 0; j < col; j++)
   { vec[i][j] = j + 1;
   }
}

for(int i = 0; i <vec.size(); i++)
{   for (int j = 0; j < vec[i].size(); j++)
    {  cout << vec[i][j] << " "; 
	}
     cout << endl;

}
}
}
