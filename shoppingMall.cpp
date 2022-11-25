#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class shoppingMall
{

public:
    int qt = 0, tk = 0, cust = 0;
    shoppingMall(void);
    void beg();
};

shoppingMall::shoppingMall(void)
{

    cout << "\t\t\t!----Mall Of Bogura---!\n";
    cout << "\t\t\tRoad#19  -> Bogura,BD\n";
}

class acess : public shoppingMall
{
    int get, amount, item;
    string custPhone;
    string custName;

public:
    void create();
    void push();
    void pop();
    void discount();
    void see();
    void history();

    friend void menu();
};

void menu();

int main()
{
    shoppingMall sm1;
    sm1.beg();
    menu();

    return 0;
}

void shoppingMall::beg()
{
    string email, pass;
    cout << "Authority Login\n";
    cout << "Email: ";
    cin >> email;
    cout << "Password: ";
    cin >> pass;
}

void acess::create()
{
    cout << "Enter Customer NickName: ";
    cin >> custName;
    cout << "Enter Phone No :";
    cin >> custPhone;
    cout << "Quantity: ";
    cin >> get;
    qt += get;
    item += get;
    cout << "Tk: ";
    cin >> get;
    tk += get;
    amount = tk;
}

void acess::push()
{
    qt++;
    item++;
    cout << "Added 1 item Tk:  ";
    cin >> get;
    tk = tk + get;
    amount += get;
}
void acess::pop()
{
    qt--;
    item--;
    cout << "Remove 1 item that's tk: ";
    cin >> get;
    tk = tk - get;

    amount -= get;
}
void acess::discount()
{
    cout << " Allow Discount rate: ";
    cin >> get;
    tk = tk - get;
    amount -= get;
}

void acess::history()
{
    cout << "\n\n\n-----------Today's  Sell Report-----------\n";
    cout << "                                          |\n";
    cout << "                                          |\n";
    cout << "Quantity      :  ";
    cout << qt << endl;
    cout << "Total Customer:  ";
    cout << cust << endl;
    cout << "Total Tk      :  ";
    cout << tk << endl;
    cout << "\n                                          |\n";
    cout << "                                          |\n";
    cout << "------------------------------------------\n\n\n";
}
void acess::see()
{
    cout << "\n\n\n-----------Customer Menu--------------\n";
    cout << "                                      |\n";
    cout << "                                      |\n";
    cout << "Name      :  ";
    cout << custName << endl;
    cout << "Phone     :  ";
    cout << custPhone << endl;
    cout << "Item      :  ";
    cout << item << endl;
    cout << "amount    :  " << amount << endl;
    cout << "                                      |\n";
    cout << "                                      |\n";
    cout << "---------------------------------------\n\n\n";
}

void menu()
{
    acess m;

    int i, p;

    for (i = 0;; i++)
    {

        cout << "\n1 for Menu\t2 for Today's History\t0 for Logout\n";
        cin >> p;

        if (p == 1)
        {
            m.custName = "...........";
            m.custPhone = "..........";
            m.item = 0;
            m.amount = 0;

            for (i = 0;; i++)
            {

                cout << "\n\t\t1 for Create Menu\n";
                cout << "\t\t2 for Add any one item\n";
                cout << "\t\t3 for Remove any one item\n";
                cout << "\t\t4 for Allow discount rate\n";
                cout << "\t\t5 for See Menu\n";
                cout << "\t\t0 for Back main\n";
                cout << "\npress: ";
                cin >> p;
                if (p == 1)
                {
                    m.cust++;
                    m.create();
                }

                else if (p == 2)
                    m.push();
                else if (p == 3)
                    m.pop();
                else if (p == 4)
                    m.discount();
                else if (p == 5)
                    m.see();
                else if (p == 0)
                    break;
            }
        }
        else if (p == 2)
        {
            m.history();
        }
        else if (p == 0)
            break;
    }
}
