#include "Tree.h"
 
 int main()
 {
 	Tree treee;    //! Îáúåêò êëàññà "äåðåâî"
 	unsigned int Number, ElNum;
 	int Value;
 	cout<<"Enter number of points: ";
 	cin>>ElNum;
 	for(int itr = 0; itr < ElNum; itr++)
 	{
 		cin>>Number>>Value;
 		treee.Add_Element(Number, Value);
 	}
 	
 	treee.Print_Tree();  //! âûâîä äåðåâà íà ýêðàí
 	system("pause");
 	return 0;
 }