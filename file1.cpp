#include <iostream>
#include <string.h>
using namespace std;

class node
{
    public:
        int
         noMhs;
         node *next;
};

class singlelist
{
    node *START;

public:
singlelist()
{
    START = NULL;

}

void addnode()
{
    int nim;
    cout << "\nMasukkan Nomor Mahasiswa: ";
    cin >> nim;


    node *nodebaru = new node;
    nodebaru->noMhs = nim;


    if (START == NULL || nim <= START ->noMhs)
    











};