#include <iostream>
#include <limits>
#include <time.h>
#include <windows.h>
#include <list>
#include <string>
#include <map>
#include <vector>
struct Element;
struct Element
{
	Element* Previous ;
	Element* Next ;
	char Value ;
};
struct List;
struct List
{
	Element* first;
	int count ; 
};
List* CreateList()
{
	List* l = new List ;
	l->first =nullptr;
	l->count =0;
	return l;
}
Element* GetElementAt (List* list,int position)
{
	if (position < 0 || position >= list->count)
	{
		return nullptr ;
	}
	int searchPosition =0;
	Element* temporaire = list->first;
	while (searchPosition<position)
	{
		 temporaire = temporaire->Next;
		searchPosition++;
	}
	return temporaire;
 		}
void AddElement(List* list ,char stock)
{
	Element* e = new Element;
    e->Value= stock;
	e->Next=nullptr;
	if (list->count == 0)
	{
		e->Previous = nullptr;
		list->first = e;
		
	}
		else
	{
		Element* lastElement = GetElementAt(list, list->count - 1);
		lastElement->Next = e;
		e->Previous= lastElement;
		
	}

	list->count++;
	
}
void RemoveElementAt(List* list,int position){
	if (GetElementAt(list,position)==nullptr)return;
	Element* next=(GetElementAt(list,position))->Next;
	Element* destruct=(GetElementAt(list,position));
	if (destruct->Previous==nullptr)
	{
	     list->first=next;
	}
		else
		{
			next->Previous=destruct->Previous;
			destruct->Previous->Next=next;
			
		}
		delete destruct;
	list->count--;
	
}
void DestroyList(List* list) 
{
	while (list->count!=0)
	{
		delete GetElementAt(list,0);
	}
	delete list;
}
void main()
{	
	List* test = CreateList();	
	AddElement(test,'e');
	AddElement(test, 't');
	AddElement(test, 'v');
	AddElement(test, 'j');
	AddElement(test, 'h');
	AddElement(test, 'r');
	RemoveElementAt(test, 2);
	Element* element1 =GetElementAt(test,0);
	Element* element2 =GetElementAt(test,2);
	std::cout << element1->Value<<std::endl;
	std::cout << element2->Value << std::endl;
}
