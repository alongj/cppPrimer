
#include <string>
#include <iostream>
#include <vector>

struct Review {
    std::string title;
    int rating;
};

bool FillReview(Review &rr);

void showReview(const Review &rr);

int main() {
    using std::cout;
    using std::vector;
    vector<Review> books;
    Review temp;

    while (FillReview(temp)) {
        books.push_back(temp);
        int num = books.size();
        if (num > 0) {
            cout << "Thank you. You entered the following:\n"
                 << "Rating\tBooks\n";
            for (int i = 0; i < num; ++i) {
                showReview(books[i]);
            }
            cout << "Reprising:\n"
                 << "Rating\tBooks\n";
            vector<Review>::iterator pr;
            for (pr = books.begin(); pr != books.end(); pr++) {
                showReview(*pr);
            }
            vector<Review> oldlist(books);
            if (num > 3) {
                books.erase(books.begin() + 1, books.begin() + 3);
                cout << "After erease:\n ";
                for (pr = books.begin(); pr != books.end(); pr++) {
                    showReview(*pr);
                }
            }
            books.swap(oldlist);
            cout << "Swap oldlist with books:\n";
            for (pr = books.begin(); pr != books.end(); pr++) {
                showReview(*pr);
            }
        } else
            cout << "Nothing entered, nothing gained. \n";
    }
    return 0;
}

bool FillReview(Review & rr){
    using std::cout;
    using std::cin;
    cout << "Enter book title (quit to quit):";
    getline(cin, rr.title);
    if(rr.title == "quit")
    {
        return false;
    }
    cout << "Enter book rating:";
    cin >> rr.rating;
    if(!cin)
    {
        return false;
    }
    while (cin.get() != '\n')
        continue;

    return true;
}

void showReview(const Review & rr){
    std::cout << rr.rating << '\t' << rr.title << std::endl;
}
