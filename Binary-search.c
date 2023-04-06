#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define MAX 100

int main() {
    int arr[MAX];

    

    printf("------Welcome to Binary search algorithm------\n");
    int element;
    int size=0;
    int ch;
    for (;;) {
        
        printf("Enter the elemnts in sorted form: ");
        scanf("%d",&arr[size]);
        size++;
        
        ch=getchar();

        if (ch == 'q') {
            break;
        }
        
        
        
    }
    system("clear");
    // Take the number
    printf("Entered the number: ");
    scanf("%d", &element);
    system("clear");

    // compare the elements of first and last item with element

    int last=size-1;
    int first=0;
    
    while (true) {
         
        if(first>last) {
            last=size-1;
            first=0;
            printf("Entered the number: ");
            scanf("%d", &element);
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
            printf("Element found at %d\n", mid);
            
            
        }
        
 }

}