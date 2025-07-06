/**
 * @mainpage Documentation linkedlist project
 * 
 * @section introduction
 * project ini merupakan project strukutur data menggunakan struktur data Linkedlist
 * 
 * @section Operation
 * Project ini memilki beberapa operasi antara lain:
 * 
 * 1.Insert
 * 2.Delete
 * 3.Display
 * 
 * @section Cara penggunanaan
 * berikut beberapa menu yang dapat digunakan:
 * 
 * 1.addnode
 * 2.display
 * 3.exit
 * 
 * 
 * @author Haffi
 * @section Profile
 * - Nama :
 * - nim  :
 * - kelas: 
 * 
 * @brief 
 * @version 0.1
 * @date 2025-06-23
 * 
 * @copyright HAFFI@umy.ac.id
 * 
 */





#include <iostream>
#include <string.h>
using namespace std;


/**
 * @class node
 * @brief class ini untuk operasi lengkpa linked list
 * 
 * 
 */

class node
{
    public:
        int
         noMhs;          
         node *next;        ///< deklarasi variabel yang menunjukkan sebuah pointer
};


/**
 * @class singlelinkedlist
 * @brief class ini untuk operasi singlelinkedlist
 * 
 */
class singlelinkedlist
{
    node *START;  ///< deklarasi variabel yang bernama start

public:
/**
 * @brief construct new singlelinkedlist
 * with start = null
 * 
 */
singlelinkedlist()
{
    START = NULL;

}


/**
 * @brief ///< deklarasi variable untuk menambahkan node
 * 
 */



void addnode()     
{
    int nim;
    cout << "\nMasukkan Nomor Mahasiswa: ";
    cin >> nim;

/**
 * @brief Membuat node baru dan mengisi nilainya.
 *
 * 
 */
    node *nodebaru = new node;
    nodebaru->noMhs = nim;


    if (START == NULL || nim <= START ->noMhs)
    
    {
        if ((START != NULL) && (nim == START ->noMhs))
        {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
        }
        nodebaru->next=START;
        START = nodebaru;
        return;
    }
    
    node *previous = START;
    node *current = START;

    while ((current = NULL) && (nim >= current->noMhs))
    {
        if (nim == current->noMhs)
        {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
        }
        previous = current;
        current = current->next;
    }

    nodebaru->next = current;
    previous->next = nodebaru;

}

/**
 * @brief ///< Mengembalikan true jika list kosong (START == NULL), false jika tidak.
 */
bool listEmpty()



{
    return (START == NULL);
}

bool Search(int nim, node **previous, node **current )


/**
 * @brief ///< Mencari node dengan noMhs = nim.
 * Menyimpan posisi current dan previous dalam parameter pointer.
 * Mengembalikan true jika ditemukan, false jika tidak.
 */




{
    *previous = START;
    *current = START;


    while ((*current != NULL) && (nim != ( *current)->noMhs))
    {
        *previous = *current;
        *current = (*current)->next;
    }

    return (*current != NULL);
}


/**
 * @brief ///< Menghapus node dengan noMhs = nim dari list jika ditemukan.
 * Mengembalikan true jika berhasil dihapus, false jika tidak ditemukan.
 * Memanfaatkan fungsi Search().
 */


bool delnode (int nim)
{
    node *current, *previous ;
    if (!Search(nim, &previous, &current))
    return false;

    if (current == START)
    START = START->next;
    else

        previous->next = current->next;

    delete current;
    return true;
}


/**
 *@brief ///< Menampilkan semua data noMhs dari awal hingga akhir list.
 * Jika list kosong, tidak menampilkan apa pun.
 */


void traverse()
{
    if (listEmpty())
    {
        cout <<"\nData didalam list adalah:\n";
        node *currentnode = START;
        while (currentnode != NULL)
        {
            cout << currentnode->noMhs << endl;
            currentnode = currentnode->next;
        
        }
        cout << endl;
    }
    
    
}


};


int main(){
}

    