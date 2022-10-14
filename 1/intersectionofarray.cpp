// prob statement - you are given two arryas 'A' and 'B' of size 'N' and 'M' respectively
// Both of these arrays are sorted in nondecreasing order. You have to find the intersection of these
// two arrays. Intersection (common elements)  of two arrays is an array that consists of all the common elements occuring
// in both arrays.

// #include <iostream>

// using namespace std;

// int intersecarr(int arr1[], int n, int arr2[], int m)
// {
//     int i = 0;
//     int j = 0;

//     while (i < n && j < m)
//     {
//         if (arr1[i] == arr2[j])
//         {
//             cout << (arr1[i]) << " ";
//             i++;
//             j++;
//         }
//         else if (arr1[i] < arr2[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }
// }

// int main()
// {
//     int arr1[] = {2, 3, 1, 5, 2, 3, 1, 10};
//     int arr2[] = {6, 1, 9, 2, 5, 10};

//     int n = sizeof(arr1) / sizeof(arr1[0]);
//     int m = sizeof(arr2) / sizeof(arr2[0]);
//     cout << intersecarr << (arr1, n);
//     cout << intersecarr << (arr2, m);
//     return 0;

//     return 0;
// }


// ------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
 
   int arr1[100], arr2[100], len1, len2, i, p = 0, q = 0;
 
   cout << "Enter lenght of first array (Max 100) \n";
   cin  >> len1;
 
   cout << " Enter sorted values for first array \n";
 
   for (i = 0; i < len1; i++) {
  
      cin >> arr1[i];
  
   }
 
   cout << "Enter length of second array (Max 100) \n";
   cin  >> len2;
 
   cout << " Enter sorted values for second array \n";
 
   for (i = 0; i < len2; i++) {
  
      cin >> arr2[i];
  
   }
 
 
   while (p <= len1 && q <= len2) {
  
      if (arr1[p] < arr2[q]) {
   
         p++;
   
      } else if (arr2[q] < arr1[p]) {
   
         q++;
   
      } else if (arr1[p] == arr2[q]) {
   
         cout << arr1[p] <<" ";
   
         p++;
         q++;
   
      }
  
   }
 
   return 0;
}
