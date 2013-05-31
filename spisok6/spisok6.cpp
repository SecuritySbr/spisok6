#include <iostream>
#include <conio.h>
#include <windows.h>
#include<iomanip>
using namespace std;


 /// данные 
class elem 
{
    public:
        int y;                 /// собсно наши элементы тут жить будут 
        elem *pNext;        /// указатель на следующий элемент списка 
};

/// класс и методы 
class list
{
    private:
        elem *pHead;      /// объ€вл€етс€ указатель типа "элемент" на первый элемент списка 
    public:
        list()
        {
            pHead=NULL;
        }
        ~list(){};
    void set_list(int n);   /// ввод списка 
    void get_list();        /// вывод списка 
 
};

/// описани€ методов 
void list::set_list (int n)
{
    elem *new_elem = new elem;  /// объ€вл€етс€ указатель типа "элемент". который выдел€ет где-то в динамической пам€ти место под данные типа "элемент" 
    new_elem->y=n;                    /// "->" значит что в классе элемент значению i присваиваетс€ n как обращение к внутреннему элементу с точкой 
    new_elem->pNext=pHead;            /// в классе "новый элемент" следующему присваиваетс€ значение "первый" 
    pHead=new_elem;                   /// pHead теперь указывает на то же на что и new_element
}

void list::get_list()
{
    elem *pCurrent;   /// объ€вл€етс€ указатель типа "элемент" 
    pCurrent=pHead;      /// ему присваиваетс€ указатель на ѕќ—Ћ≈ƒЌ»… элемент списка (самый верхний) 
    while(pCurrent!=NULL)/// разворачивает
    {
        cout<<pCurrent->y<<" ";
        pCurrent=pCurrent->pNext;
    }
}





/// ************************************************************ 
void main()
{
    list sp1;
    while (true)
    {
        int k,e;
        char q;
        cout<<"how many elements do you wannt to add to the list?"<<endl;
        cin>>k;
        for (int s=0; s<k; s++)
        {
            cout<<"enter element ";
            cin>>e;
            sp1.set_list(e);
        }
        cout<<"shall i finish the list?"<<endl;
        cin>>q;
        if (q=='y') 
            break;
    }
    sp1.get_list();
    cout<<endl;
}