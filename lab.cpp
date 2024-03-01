
#include <iostream>
#include <string>

class Books{
private:
    std::string name_book;
    std::string author;
    std::string status;
    int year_public;
    int count;
public:
    Books() : name_book("Uknown"), author("Uknwon"), status("Uknown"), year_public(0), count(0) {}
    Books(std::string nb, std::string au, int yp, int c) : name_book(nb), author(au), year_public(yp), count(c) {}


    ~Books() {
        count = 0;
        status = "Недоступно";
        std::cout << "Удален " << name_book << std::endl;
    }

   void disp(){
    std::cout << "Название книги: " << name_book << "\nАвтор: " << author << "\nГод публикации: " << year_public << "\nСтатус: " << status << "\nКоличество: " << count << std::endl;
   }

    std::string cheking(){
        if (count > 0)
            return status = "Доступно";
        if (count == 0)
            return status = "Недоступно";
        else
            count = 0;
            return status = "Недоступно";
    }

    std::string cheking(int new_count){
    count = new_count;
    if (count > 0)
        return status = "Доступно";
    if (count == 0)
        return status = "Недоступно";
    else
        count = 0;
        return status = "Недоступно";
}
};

int main(){
    Books book;
    Books book0("1984", "Джордж Оруэлл", 1949, 5);
    Books book1("Скотный двор", "Джордж Оруэлл", 1945, 12);
    Books book2("Зов ктулху", "Говард Лавкрафт", 1926, -15);

    book.cheking();
    book0.cheking();
    book1.cheking();
    book2.cheking();

    book.disp();
        std::cout << std::endl;
    book0.disp();
        std::cout << std::endl;
    book1.disp();
        std::cout << std::endl;
    book2.disp();
        std::cout << std::endl;
    return 0;
}
