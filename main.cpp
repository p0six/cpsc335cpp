// Assignment 1: Alternating disks problem, left-to-right algorithm   
// XX YY ( YOU NEED TO COMPLETE YOUR NAME )  
// Given 2n alternating disks (dark, light) the program reads the number of single color disks 
// (light or dark), arranges the disks in the correct order and outputs the number of swaps 
// INPUT: a positive integer n and a list of 2n disks of alternating colors dark-light, starting with dark 
// OUTPUT: a list of 2n disks, the first n disks are light, the next n disks are dark,  
// and an integer m representing the number of moves to move the dark ones after the light ones  

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
void print_disks(int n, char *disks)
// YOU NEED TO IMPLEMENT THIS FUNCTION
// function to print the list of disks, given the number of single color disks and the actual list  
// n represents the number of single color disks 
// disks represents the list of disks (index 0 being the first disk) where
// 0 = a light color disks 
// 1 = a dark color disks
int main() {
    int n, m, k, i;
    char *disks;
    // display the header
    cout << endl << "CPSC 335-x - Programming Assignment #1" << endl;
    cout << "The alternating disks problem: left-to-right algorithm" << endl;
    cout << "Enter the number of single color disks (light or dark)" << endl;
    // read the number of disks
    cin >> n;
    // allocate space for the disks
    disks = new char[n];
    // set the initial configurations for the disks to alternate
    for( i=0; i < n; i++) {
        disks[2*i] = 1;
        disks[2*i+1] = 0;
    }
    // print the initial configuration of the list of disks
    cout << "Initial configuration" << endl;
    print_disks(n,disks);
    // loop to push light one before the darks ones
    for (k=0;  k < n ; k++) {
        // YOU NEED TO COMPLETE THIS PART OF CODE FOR GOING LEFT TO RIGHT
    }
    // after shuffling them
    cout << "After moving darker ones to the left" << endl;
    print_disks(n, disks);
    // print the total number of moves
    cout << "Number of swaps is " << m << endl;
    // de-allocate the dynamic memory space
    delete [] disks;
    return EXIT_SUCCESS;
}
