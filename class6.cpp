#include<iostream>
#include<string>
using namespace std;
class Book
{
private:
    string book_title;
    double price;
public:
    Book();
    Book(string b,double price );
    void display();
};
 Book::Book(){
    book_title="unknown";
    price=0;
 }
 Book::Book(string b,double price )
{ book_title =b;
  this->price=price;
}
void Book::display(){
    cout<<"book title:"<<book_title<<endl;
    cout<<"price:"<<price<<endl;
    
}
int main(){
    Book b1("SCIENCE",200);
    Book b2("MATHS",300);
    Book b3;
    b1.display();
    b2.display();
    b3.display();
    return 0;
}
