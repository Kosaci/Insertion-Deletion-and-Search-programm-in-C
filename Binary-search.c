#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define MAX 100

int size=0;

int unsorted_array(int arr[], int *size1) {
    // variable declaration
    int unsorted_arr[MAX];
    int ch;
    int size_unsorted=0;
    int temp;
    
    // for loop for get elements
    for (;;) {
    printf("Enter The EleMents: ");
    scanf("%d",&unsorted_arr[size_unsorted]);

    size_unsorted++;

    ch=getchar();

    if (ch== 'q' || ch =='Q') {
        break;
    }
    }

    //for loop for sort the elements
    for(int i = 0; i < size_unsorted-1;i++) {
        for(int j = i+1; j < size_unsorted-1; j++) {
            if (unsorted_arr[i] > unsorted_arr[j] ) {
            temp=unsorted_arr[i];
            unsorted_arr[i]=unsorted_arr[j];
            unsorted_arr[j]=temp;
            }
        }
        
    }

    //for loop to display the sorted elements
    for(int i=0; i < size_unsorted-1; i++) {
        arr[i] = unsorted_arr[i];
        printf(" %d\t", arr[i]);

    }
    printf("\n");
    *size1 = size_unsorted;
}

int sorted_array(int arr[], int *size1) {
    // initlize the variabled
    int sorted_arr[MAX];
    
    int size_sorted=0;
    int ch;

    //for loop get the elements
    for (;;) {
        
        printf("Enter the elemnts in sorted form: ");
        scanf("%d",&sorted_arr[size_sorted]);
        size_sorted++;
        
        ch=getchar();

        if (ch == 'q' || ch == 'Q') {
            break;
        }
        
        
        
    }

    // for loop to display the sorted elements
    for(int i=0; i < size_sorted-1; i++) {
        arr[i] = sorted_arr[i];
        printf(" %d\t", arr[i]);
        
    }
    printf("\n");
    *size1 = size_sorted;
}
int main() {
    int arr[MAX];
    int choice;
    int element;
    int size;
    printf("------Welcome to Binary search algorithm------\n");

    printf("Choose THe ChoiCe: \n"
           "1. UNsorted aRRay\n"
           "2. SOrted aRRay\n");
    printf("------------------------------------------------\n");
    scanf("%d", &choice);

    if(choice==1) {
        unsorted_array(arr, &size);
    }
    if(choice==2) {
        sorted_array(arr, &size);
    }
    system("clear"); // This is alternative for clrscr() 
   
    printf("------------------------------------------------\n");

    // Take the number to search

    printf("Entered the number: ");
    scanf("%d", &element);
    printf("------------------------------------------------\n");
    system("clear");
    
    // compare the elements of first and last item with element

    int last=size-1;
    int first=0;
    int TimeComplexity=0;
    
    while (true) {
         TimeComplexity++; //caluclate the TimComplexity
        if(first>last) {
            last=size-1;
            first=0;
            printf("Entered the number: ");
            scanf("%d", &element);
            TimeComplexity=0;
            system("clear");
        }     
        int mid=(last+first)/2;

        if (arr[mid] <= element) {
            first=mid+1;
        }
        if(arr[mid] >= element) {
            last=mid-1;
        }
        if(arr[mid] == element) {
            printf("------------------------------------------------\n");
            printf("Element found at %d\n", mid);
            printf("THe TiMe ComPlexity is log%d=%d\n",size-1,TimeComplexity); 
            printf("------------------------------------------------\n");
            
        }
        
 }

}

