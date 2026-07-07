#include <iostream>
#include <string>

using namespace std;

void clearInput() {
    cin.ignore(1000, '\n');
}

// Завдання 1
struct Address {
    string index, city, street, house;
};

struct Subscriber {
    string lastName, firstName, phone;
    Address address;
};

void input(Address& a) {
    cout << "Index: ";
    getline(cin, a.index);
    cout << "City: ";
    getline(cin, a.city);
    cout << "Street: ";
    getline(cin, a.street);
    cout << "House: ";
    getline(cin, a.house);
}

void input(Subscriber& s) {
    cout << "Last name: ";
    getline(cin, s.lastName);
    cout << "First name: ";
    getline(cin, s.firstName);
    cout << "Phone: ";
    getline(cin, s.phone);
    input(s.address);
}

void print(Subscriber s) {
    cout << s.lastName << " " << s.firstName << endl;
    cout << "Phone: " << s.phone << endl;
    cout << "Address: " << s.address.index << ", " << s.address.city << ", "
        << s.address.street << ", " << s.address.house << endl;
}

int findByPhone(Subscriber book[], int size, string phone) {
    for (int i = 0; i < size; i++) {
        if (book[i].phone == phone) {
            return i;
        }
    }
    return -1;
}

void phoneBookProgram() {
    Subscriber book[100];
    int size = 0;
    int choice;

    do {
        cout << endl;
        cout << "1. Add subscriber" << endl;
        cout << "2. Search by phone" << endl;
        cout << "3. Search by name" << endl;
        cout << "4. Search by address" << endl;
        cout << "5. Edit subscriber" << endl;
        cout << "6. Delete subscriber" << endl;
        cout << "7. Show all" << endl;
        cout << "0. Back" << endl;
        cout << "Choose: ";
        cin >> choice;
        clearInput();

        switch (choice) {
        case 1:
            input(book[size]);
            size++;
            break;

        case 2: {
            string phone;
            cout << "Phone: ";
            getline(cin, phone);

            int index = findByPhone(book, size, phone);

            if (index == -1) {
                cout << "Not found." << endl;
            }
            else {
                print(book[index]);
            }
            break;
        }

        case 3: {
            string lastName, firstName;
            bool found = false;

            cout << "Last name: ";
            getline(cin, lastName);
            cout << "First name: ";
            getline(cin, firstName);

            for (int i = 0; i < size; i++) {
                if (book[i].lastName == lastName && book[i].firstName == firstName) {
                    print(book[i]);
                    found = true;
                }
            }

            if (!found) {
                cout << "Not found." << endl;
            }
            break;
        }

        case 4: {
            Address a;
            bool found = false;

            input(a);

            for (int i = 0; i < size; i++) {
                if (book[i].address.index == a.index &&
                    book[i].address.city == a.city &&
                    book[i].address.street == a.street &&
                    book[i].address.house == a.house) {
                    print(book[i]);
                    found = true;
                }
            }

            if (!found) {
                cout << "Not found." << endl;
            }
            break;
        }

        case 5: {
            string phone;
            int editChoice;

            cout << "Phone: ";
            getline(cin, phone);

            int index = findByPhone(book, size, phone);

            if (index == -1) {
                cout << "Not found." << endl;
                break;
            }

            cout << "1. Last name" << endl;
            cout << "2. First name" << endl;
            cout << "3. Phone" << endl;
            cout << "4. Index" << endl;
            cout << "5. City" << endl;
            cout << "6. Street" << endl;
            cout << "7. House" << endl;
            cout << "8. All" << endl;
            cout << "Choose: ";
            cin >> editChoice;
            clearInput();

            switch (editChoice) {
            case 1:
                getline(cin, book[index].lastName);
                break;
            case 2:
                getline(cin, book[index].firstName);
                break;
            case 3:
                getline(cin, book[index].phone);
                break;
            case 4:
                getline(cin, book[index].address.index);
                break;
            case 5:
                getline(cin, book[index].address.city);
                break;
            case 6:
                getline(cin, book[index].address.street);
                break;
            case 7:
                getline(cin, book[index].address.house);
                break;
            case 8:
                input(book[index]);
                break;
            }

            break;
        }

        case 6: {
            string phone;
            cout << "Phone: ";
            getline(cin, phone);

            int index = findByPhone(book, size, phone);

            if (index == -1) {
                cout << "Not found." << endl;
                break;
            }

            for (int i = index; i < size - 1; i++) {
                book[i] = book[i + 1];
            }

            size--;
            cout << "Deleted." << endl;
            break;
        }

        case 7:
            for (int i = 0; i < size; i++) {
                print(book[i]);
                cout << endl;
            }
            break;
        }
    } while (choice != 0);
}

// Завдання 2
struct Song {
    string artist, title;
    int year;
};

void input(Song& s) {
    cout << "Artist: ";
    getline(cin, s.artist);
    cout << "Title: ";
    getline(cin, s.title);
    cout << "Year: ";
    cin >> s.year;
    clearInput();
}

void print(Song s) {
    cout << s.artist << " - " << s.title << " (" << s.year << ")" << endl;
}

void addSong(Song*& songs, int& size) {
    Song* temp = new Song[size + 1];

    for (int i = 0; i < size; i++) {
        temp[i] = songs[i];
    }

    input(temp[size]);

    delete[] songs;
    songs = temp;
    size++;
}

void deleteSong(Song*& songs, int& size) {
    string title;
    char answer;

    cout << "Title: ";
    getline(cin, title);

    for (int i = 0; i < size; i++) {
        if (songs[i].title == title) {
            print(songs[i]);

            cout << "Delete? y/n: ";
            cin >> answer;
            clearInput();

            if (answer == 'y' || answer == 'Y') {
                Song* temp = new Song[size - 1];

                for (int j = 0, k = 0; j < size; j++) {
                    if (j != i) {
                        temp[k] = songs[j];
                        k++;
                    }
                }

                delete[] songs;
                songs = temp;
                size--;

                cout << "Deleted." << endl;
            }

            return;
        }
    }

    cout << "Not found." << endl;
}

void songsProgram() {
    Song* songs = nullptr;
    int size = 0;
    int choice;

    do {
        cout << endl;
        cout << "1. Show all songs" << endl;
        cout << "2. Show songs by artist" << endl;
        cout << "3. Add song" << endl;
        cout << "4. Delete song" << endl;
        cout << "5. Search by title word" << endl;
        cout << "6. Sort by year" << endl;
        cout << "0. Back" << endl;
        cout << "Choose: ";
        cin >> choice;
        clearInput();

        switch (choice) {
        case 1:
            for (int i = 0; i < size; i++) {
                print(songs[i]);
            }
            break;

        case 2: {
            string artist;
            cout << "Artist: ";
            getline(cin, artist);

            for (int i = 0; i < size; i++) {
                if (songs[i].artist == artist) {
                    print(songs[i]);
                }
            }
            break;
        }

        case 3:
            addSong(songs, size);
            break;

        case 4:
            deleteSong(songs, size);
            break;

        case 5: {
            string word;
            cout << "Word: ";
            getline(cin, word);

            for (int i = 0; i < size; i++) {
                if (songs[i].title.find(word) != string::npos) {
                    print(songs[i]);
                }
            }
            break;
        }

        case 6:
            for (int i = 0; i < size - 1; i++) {
                for (int j = 0; j < size - 1 - i; j++) {
                    if (songs[j].year > songs[j + 1].year) {
                        Song temp = songs[j];
                        songs[j] = songs[j + 1];
                        songs[j + 1] = temp;
                    }
                }
            }
            cout << "Sorted." << endl;
            break;
        }
    } while (choice != 0);

    delete[] songs;
}

int main() {
    int choice;

    do {
        cout << endl;
        cout << "1. Phone book" << endl;
        cout << "2. Song archive" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose: ";
        cin >> choice;
        clearInput();

        switch (choice) {
        case 1:
            phoneBookProgram();
            break;
        case 2:
            songsProgram();
            break;
        }
    } while (choice != 0);

    return 0;
}