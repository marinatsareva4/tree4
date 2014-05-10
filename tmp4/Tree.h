#include "Element.h"
 
class Tree          /// Êëàññ "äåðåâî"
 {
 public:
 	      Tree();
 		  ~Tree();
 	void     Add_Element(int Number, int Value);  /// Ìåòîä äîáàâëåíèÿ óçëà ê äåðåâó	
 	void     Print_Tree()   const;
 	int      Get_Data(int Number) const;
 
 private:
 	void     Print_Direct(Element* El) const;
 	void     Print_Reverse(Element* El) const;
 	void     Print_Symmetrical(Element* El) const;
 	void     Delete_Tree(Element* El);
 	Element* Find_Element(Element* El,int Number) const;
 
 private:
 	Element* Root;  /// óêàçàòåëü íà êîðåíü äåðåâà
 };