#include <stdio.h>
#include <stdlib.h>
#define MAX 100


int size,size1;
//function for display
int display(int *size2, int arr[]) {
    size = *size2;
    printf("The output of the array is\n");
    printf("***************************************************\n");
    for (int i=0;i < size; i++) {

        printf(" %d\t", arr[i]);

    }
    printf("\n");
    printf("***************************************************\n");
}
// function for insert
int insert(int size, int arr[], int *size2) {

    int pos, element;
    printf("Enter the postion of an element: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
   
    size++;
    for (int i = size-1; i >= pos; i--) {
        
       arr[i] = arr[i-1];

        
        
    }
    arr[pos] = element; 
    *size2=size;
}

//function for delete

int delete(int size, int arr[], int *size2) {

    int pos, element;
    
    printf("Enter the postion of an element to delete: ");
    scanf("%d", &pos);
    size--;
    for (int i = pos; i <= size; i++) {
        arr[i]=arr[i+1];
    }
    
    *size2 = size;
}

//function for search the Item

int search(int size, int arr[], int *size2) {
    int p = *size2;
    if (p > size) {
        size = *size2;
    }
    
    int search_element;
    printf("Enter the element to search: ");
    scanf("%d", &search_element);
    system("clear");
    printf("***************************************************\n");
    for (int i=0; i < size; i++) {

        if (search_element == arr[i]) {
            printf("The element found at %d postion", i);
        }

    }
    printf("\n");
    printf("***************************************************\n");
}

//main function 
int main() {
    int arr[MAX],read;

        
    printf("Enter the size of array:");
    scanf("%d", &size);

    //for loop to read the items

    for(int i = 0; i < size; i++ ) {
        printf("Enter the array elements: ");
        scanf("%d", &arr[i]);
    }
    
    system("clear"); //alternative for clrscr()
    printf("-------------------------------------------------------\n");
    printf("Enter the choice:\n"
           "1. Insert\n"
           "2. Delete\n"
           "3. Search\n");
    printf("-------------------------------------------------------\n");
    scanf("%d",&read);
    system("clear");
    if (read == 1) {
        
        insert(size, arr, &size1);
        system("clear");
        display(&size1, arr);
    }
    if (read == 2) {
        delete(size, arr, &size1);
        system("clear");
        display(&size1, arr);
    }
    if (read == 3) {
        search(size,arr, &size1);
    }

}

