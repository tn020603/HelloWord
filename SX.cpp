#include<stdio.h>
#include<conio.h>
#include <windows.h>
void nhap(int *arr, int n);
void xuat(int *arr, int n);
void swap(int &a, int &b);

void selectionSort_T(int *arr, int n);                      void selectionSort_G(int *arr, int n);  
void insertionSort_T(int *arr, int n);                      void insertionSort_G(int *arr, int n);
void interchangeSort_T(int *arr, int n);                    void interchangeSort_G(int *arr, int n);
void bubbleSort_T(int *arr, int n);                         void bubbleSort_G(int *arr, int n);
void quickSort_T(int *arr, int left, int right);            void quickSort_G(int *arr, int left, int right);

int main() 
{
    system("cls");
    int n, m, c;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    nhap(arr, n);
    xuat(arr, n);
    printf("\n1 Selectionsort" );
    printf("\n2 Insertionsort "); 
    printf("\n3 Interchangesort");
    printf("\n4 BubbleSort");
    printf("\n5 QuickSort");  
    printf("\nChon thuat toan: ");
    scanf("%d", &m);
    switch (m)
    {
    case 1:
        printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
        switch (c)
		{
		case 1:
			 	selectionSort_T(arr ,n);
				xuat(arr ,n);
			 break;
		case 2:
			 	selectionSort_G(arr,n);
				xuat(arr ,n);
			 break;
		 default:
			 break;
		 }
		break;
    case 2:
        printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
		switch (c)
		{
		case 1:
			 	insertionSort_T(arr ,n);
   		        xuat(arr ,n);
			 break;
		 case 2:
			 insertionSort_G(arr ,n);
   		     xuat(arr,n);
			 break;
		 default:
			 break;
		 }
		break;
    case 3:
         printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
		 switch (c)
		 {
		 case 1:
			 	interchangeSort_T(arr ,n);
		        xuat(arr ,n);
			 break;
		 case 2:
			 	interchangeSort_G(arr ,n);
		        xuat(arr ,n);
			 break;
		 default:
			 break;
		 }
		break;

		break;
	case 4:
         printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
		 switch (c)
		 {
		 case 1:
			 	bubbleSort_T(arr ,n);
	            xuat(arr,n);
			 break;
		 case 2:
			 	bubbleSort_G(arr ,n);
	            xuat(arr ,n);
			 break;
		 default:
			 break;
		 }

		break;
    case 5:
		  printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
		 switch (c)
		 {
		 case 1:
			quickSort_T(arr ,1, n);
            printf("\nSau khi sx:\n");
	        xuat(arr ,n);
			 break;
		 case 2:
			quickSort_G(arr ,1, n);
            printf("\nSau khi sx:\n");
	        xuat(arr ,n);
			 break;
		 default:
			 break;
		 }
	
		break;
		break;
    default:
        break;
    }
	printf("\n");system("pause");
}

// nhap/ xuat mang
void nhap(int *arr, int n) 
{
    for(int i = 1; i <= n; i++) 
        {printf("nhap arr[%d]", i); scanf("%d", &arr[i]);}
}

void xuat(int *arr, int n) 
{
    for(int i = 1; i <= n; i++) 
        printf(" arr[%d] = %d", i, arr[i]); 
}

// hàm swap
void swap(int &a, int &b) 
{
    int t = a;  a = b;   b = t;
}

// 1.selection sort (tang)
void selectionSort_T(int *arr, int n) 
{
	printf("\n sau khi sap xep Selection Sort: ");
	int i, j;
	for(i = 0; i < n-1; i++) 
    {
		for(j = i+1; j < n; j++) 
			if(arr[i] > arr[j]) swap(arr[i], arr[j]);
	}
}

// 2. insertion sort (tang)
void insertionSort_T(int *arr, int n) 
{
	printf("\n sau khi sap xep insertion sort: ");
	int i, pos, x;
	for(i = 0; i < n; i++) 
    {
		x = arr[i];
		pos = i-1;
		while((pos >= 0) && (arr[pos] > x)) 
        {
			arr[pos+1] = arr[pos];
			pos--;
		}
		arr[pos+1]=x;
	}
}

//3. interchange sort (tang)
void  interchangeSort_T(int *arr, int n) 
{
	printf("\n sau khi sap xep interchange Sort: ");
	int i,j;
	for(i = 0; i < n; i++) 
    {
		for(j= i+1; j < n; j++) 
			if(arr[j] > arr[i]) 
				swap(arr[j],arr[i]);
	}
}

//4. buble sort (tang)
void bubbleSort_T(int *arr, int n)
{
	printf("\n sau khi sap xep bublle Sort: ");
    int i, j;
    for(i = n; i > 1; i--)
        for(j = 1; j <i; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

//5. Quick sort (tang)
void quickSort_T(int *arr, int left, int right) {
    int i, j , x;
    if(left >= right) return;
    x = arr[(left+right)/2];
    i = left; j = right;
    while(i <= j) {
        while(arr[i] < x) i++;
        while(arr[j] > x) j--;
            if(i <= j)
            {
                swap(arr[i], arr[j]);
                i++;    j--;
            }
    }
    quickSort_T(arr, left, j);
    quickSort_T(arr, i, right);
}

// 1.selection sort (tang)
void selectionSort_G(int *arr, int n) 
{
	printf("\n sau khi sap xep Selection Sort: ");
	int i, j;
	for(i = 0; i < n-1; i++) 
    {
		for(j = i+1; j < n; j++) 
			if(arr[i] > arr[j]) swap(arr[i], arr[j]);
	}
}

// 2. insertion sort (tang)
void insertionSort_G(int *arr, int n) 
{
	printf("\n sau khi sap xep insertion sort: ");
	int i, pos, x;
	for(i = 0; i < n; i++) 
    {
		x = arr[i];
		pos = i-1;
		while((pos >= 0) && (arr[pos] > x)) 
        {
			arr[pos+1] = arr[pos];
			pos--;
		}
		arr[pos+1]=x;
	}
}

//3. interchange sort (tang)
void  interchangeSort_G(int *arr, int n) 
{
	printf("\n sau khi sap xep interchange Sort: ");
	int i,j;
	for(i = 0; i < n; i++) 
    {
		for(j= i+1; j < n; j++) 
			if(arr[j] > arr[i]) 
				swap(arr[j],arr[i]);
	}
}

//4. buble sort (tang)
void bubbleSort_G(int *arr, int n)
{
	printf("\n sau khi sap xep bublle Sort: ");
    int i, j;
    for(i = n; i > 1; i--)
        for(j = 1; j <i; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

//5. Quick sort (tang)
void quickSort_G(int *arr, int left, int right) {
    int i, j , x;
    if(left >= right) return;
    x = arr[(left+right)/2];
    i = left; j = right;
    while(i <= j) {
        while(arr[i] < x) i++;
        while(arr[j] > x) j--;
            if(i >= j)
            {
                swap(arr[i], arr[j]);
                i++;    j--;
            }
    }
    quickSort_G(arr, left, j);
    quickSort_G(arr, i, right);
}

