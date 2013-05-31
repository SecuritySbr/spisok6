#include <iostream>
#include <conio.h>
#include <windows.h>
#include<iomanip>
using namespace std;


 /// ������ 
class elem 
{
    public:
        int y;                 /// ������ ���� �������� ��� ���� ����� 
        elem *pNext;        /// ��������� �� ��������� ������� ������ 
};

/// ����� � ������ 
class list
{
    private:
        elem *pHead;      /// ����������� ��������� ���� "�������" �� ������ ������� ������ 
    public:
        list()
        {
            pHead=NULL;
        }
        ~list(){};
    void set_list(int n);   /// ���� ������ 
    void get_list();        /// ����� ������ 
 
};

/// �������� ������� 
void list::set_list (int n)
{
    elem *new_elem = new elem;  /// ����������� ��������� ���� "�������". ������� �������� ���-�� � ������������ ������ ����� ��� ������ ���� "�������" 
    new_elem->y=n;                    /// "->" ������ ��� � ������ ������� �������� i ������������� n ��� ��������� � ����������� �������� � ������ 
    new_elem->pNext=pHead;            /// � ������ "����� �������" ���������� ������������� �������� "������" 
    pHead=new_elem;                   /// pHead ������ ��������� �� �� �� �� ��� � new_element
}

void list::get_list()
{
    elem *pCurrent;   /// ����������� ��������� ���� "�������" 
    pCurrent=pHead;      /// ��� ������������� ��������� �� ��������� ������� ������ (����� �������) 
    while(pCurrent!=NULL)/// �������������
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