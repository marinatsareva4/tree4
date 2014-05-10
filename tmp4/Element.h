
 #include <iostream>
 #include <vector>
 using namespace std;
 
 class Element      /// Êëàññ óçëà äåðåâà
 {
 public:
 	Element();
 	Element(int value);

 public:
 	int               data;
 	Element*          parent;
 	vector<Element*>  childVector;  ///Ìàññèâ "äåòåé" óçëà äåðåâà
 
 };