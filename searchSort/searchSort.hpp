/*************************************************
 * *Author: Mathew McDade
 * *Date: Sun Nov 13 03:08:18 PST 2016
 * *Description: searchSort functions header.
 * *********************************************/
#include <fstream>
#include <vector>

using std::vector;
using std::ifstream;

void mainMenu();
void createFiles();
void searchFilesMenu();
int searchFile(ifstream&);
void sortFilesMenu();
int partition(vector<int>&, int, int);
void quickSort(vector<int>&, int, int);
void bSearchMenu();
int bSearch(vector<int>, int);
