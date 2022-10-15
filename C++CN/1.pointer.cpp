#include <iostream>
using namespace std;
int main()
{
   int x = 14102022, *p = &x;
   // p=&x;
   cout << "Value of var :" << x << endl;   // 14102022
   cout << "Value of var :" << &x << endl;  // 0x7ffdc9119bbc
   cout << "Value of var :" << p << endl;   //  0x7ffdc9119bbc
   cout << "Value of var :" << *p << endl;  // 14102022
   cout << "Value of var :" << **p << endl; // ERROR
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int arr[] = {4, 23, 8, 59};
   int *p = arr;
   cout << p << endl;          // 0x61ff00
   cout << *p << endl;         // 4
   cout << *(p + 1) << endl;   // 23
   cout << *(p + 2) << endl;   // 8
   cout << *(p + 3) << endl;   // 59
   cout << arr[0] << endl;     // 4
   cout << arr[1] << endl;     // 23
   cout << arr[2] << endl;     // 8
   cout << arr[3] << endl;     // 59
   cout << arr[4] << endl;     // garbage value
   cout << *arr << endl;       // 4
   cout << *arr + 1 << endl;   // 5
   cout << *arr + 2 << endl;   // 6
   cout << *arr + 3 << endl;   // 7
   cout << *(arr + 1) << endl; // 23
   cout << *(arr + 2) << endl; // 8
   cout << *(arr + 3) << endl; // 59
   cout << *(arr + 4) << endl; // garbage value
   cout << arr << endl;        // 40x61ff00
   cout << arr + 1 << endl;    // 0x61ff04
   cout << arr + 2 << endl;    // 0x61ff08
   cout << arr + 3 << endl;    // 0x61ff0c
   cout << arr + 4 << endl;    // 0x61ff10
                               //   cout << *arr[0] <<endl;  ERROR
   cout << &arr[0] << endl;    // 0x61ff00
   cout << &arr[1] << endl;    // 0x61ff04
   cout << &arr[2] << endl;    // 0x61ff08
   cout << &arr[3] << endl;    // 0x61ff0c
   cout << &arr[4] << endl;    // 0x61ff10
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int numbers[5];
   int *p = numbers;
   //   p = numbers;
   *p = 10;
   cout << p << endl;       // 0x61fef8
   cout << *p << endl;      // 10 // numbers[0]
   cout << numbers << endl; // 0x61fef8

   p = &numbers[2]; // number+2 // 0x61ff00
   *p = 20;
   cout << p << endl;  // 0x61ff00
   cout << *p << endl; // 20
   p--;
   cout << p << endl; // 0x61fefc
   *p = 30;
   p = numbers + 3;
   *p = 40;
   p = numbers;
   *(p + 4) = 50;
   for (int n = 0; n < 5; n++)
   {
      cout << numbers[n] << ","; // 10,30,20,40,50,
   }
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char Str[] = "abcdefg";
   char *ptr = Str;
   // ptr = Str;
   cout << ptr << endl; // abcdefg
   cout << Str << endl; // abcdefg
   ptr += 5;
   cout << ptr << endl;  // fg
   cout << Str << endl;  // abcdefg
   cout << *ptr << endl; // f
   ptr = ptr - 5;
   cout << *ptr << endl;       // a
   cout << *ptr + 1 << endl;   // 103 garbage
   cout << *(ptr + 1) << endl; // b
   cout << *(ptr + 2) << endl; // c
   cout << *(ptr + 3) << endl; // d
   cout << *(ptr + 4) << endl; // e
   cout << *(ptr + 5) << endl; // f
   cout << *(ptr + 6) << endl; // g
   cout << *(ptr + 7) << endl; // gARBAGE
   cout << *(ptr + 8) << endl; // garbage
   cout << *(ptr + 9) << endl; // garbage
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char s[] = "hello";
   char *p = s;
   // p=s ;
   cout << s << endl;                   // hello
   cout << &s << endl;                  // address of h
   cout << s + 1 << endl;               // ello
   cout << s + 2 << endl;               // llo
   cout << s + 3 << endl;               // lo
   cout << s + 4 << endl;               // o
   cout << s + 5 << endl;               // garbage
   cout << p << endl;                   // hello
   cout << p + 1 << endl;               // ello
   cout << p + 2 << endl;               // llo
   cout << p + 3 << endl;               // lo
   cout << p + 4 << endl;               // o
   cout << p << endl;                   // hello
   cout << *p << endl;                  //  h
   cout << *p + 1 << endl;              //  garbage
   cout << *(p + 1) << endl;            //  e
   cout << *(p + 2) << endl;            //  l
   cout << *(p + 3) << endl;            //  l
   cout << *(p + 4) << endl;            //  o
   cout << *(p + 5) << endl;            //  garbage
   cout << s[0] << " " << p[0] << endl; // h  h
   cout << s[1] << " " << p[1] << endl; // e  e
   cout << s[2] << " " << p[2] << endl; // l  l
   cout << s[3] << " " << p[3] << endl; // l  l
   cout << s[4] << " " << p[4] << endl; // o  o
   cout << s[5] << " " << p[5] << endl; // garbage value
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char arr[20];
   int i;
   *arr = 65;
   *(arr + 1) = 66;
   *(arr + 2) = '\0';   // this will clear last element in string_char otherwise always @ or any other garbage value will show
   cout << arr << endl; //  AB

   for (i = 0; i < 10; i++)
   {
      *(arr + i) = 65 + i;
   }
   *(arr + i) = '\0';
   cout << arr; // ABCDEFGHIJ
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   float f = 10.5;
   float p = 2.5;
   float *ptr = &f;
   cout << *ptr << " " << f << " " << p << endl; // 10.5 10.5 2.5
   (*ptr)++;
   cout << *ptr << " " << f << " " << p << endl; // 11.5 11.5 2.5
   *ptr = p;
   cout << *ptr << " " << f << " " << p; // 2.5 2.5 2.5
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int *ptr = 0;
   int a = 10;
   *ptr = a;
   cout << *ptr << endl;
   return 0; // segmentation error
}

#include <iostream>
using namespace std;
int main()
{
   double a = 10.54;
   double *d = &a;
   d = d + 1;
   cout << d << endl; // 0x61ff08
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int a = 7;
   int *c = &a;
   c = c + 1;
   cout << a << "  " << *c << endl; // 7  6422284
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int a[6] = {1, 2, 3};
   cout << (a + 2); // 0x61ff00
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int a[] = {1, 2, 3, 4};
   int *p = a++; // ERROR
   cout << *p << endl;
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char ch = 'a';
   char *ptr = &ch;
   cout << ch << endl;   // a
   cout << *ptr << endl; // a
   ch++;
   cout << ch << endl;   // b
   cout << *ptr << endl; // b
   ch = ch + 2;
   cout << ch << endl;   // d
   cout << *ptr << endl; // d
   ch = ch + 4;
   cout << ch << endl;   // h
   cout << *ptr << endl; // h
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char b[] = "xyz";
   char *c = &b[0];
   cout << c << endl;  // xyz
   cout << b << endl;  // xyz
   cout << *c << endl; // x
   c++;
   cout << c << endl;  // yz
   cout << b << endl;  // xyz
   cout << *c << endl; // y
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int x = 10;
   int *y = &x;
   int **z = &y;
   cout << x << endl;   // 10
   cout << &x << endl;  // 0x61ff0c
   cout << y << endl;   // 0x61ff0c
   cout << *y << endl;  // 10
   cout << &y << endl;  // 0x61ff08
   cout << z << endl;   // 0x61ff08
   cout << *z << endl;  // 0x61ff0c
   cout << **z << endl; // 10
   cout << &z << endl;  // 0x61ff04
   return 0;
}

#include <iostream>
using namespace std;

void fun(int a[])
{
   cout << a[0] << " " << endl;
}
int main()
{
   int a[] = {13, 52, 63, 34};
   int *p = a;
   fun(a);               // 13
   fun(a + 1);           // 52
   fun(a + 2);           // 63
   fun(a + 4);           // garbage
   fun(a + 3);           // 34
   cout << a[0] << endl; // 13
   *a = *a + 10;
   cout << *a; // 23
   return 0;
}

#include <iostream>
using namespace std;
void square(int *p)
{
   int a = 10;
   p = &a;
   *p = (*p) * (*p);
   cout << *p << endl;
}
int main()
{
   int a = 10;
   square(&a);        // 100
   cout << a << endl; // 10   // no change
}

#include <iostream>
using namespace std;
void increment(int **p)
{
   (**p)++;
   cout << **p << endl;
}
int main()
{
   int num = 10;
   int *ptr = &num;
   increment(&ptr);     // 11
   cout << num << endl; // 11   change
}

#include <iostream>
using namespace std;
int main()
{
   int a = 100;
   int *p = &a;
   int **q = &p;
   int b = (**q)++ + 4;           // +++ = +  ororor (a++) +b =a + b
   cout << a << " " << b << endl; // 101 104
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int firstvalue = 5, secondvalue = 15;
   char thirdvalue = 'a';
   int *p1, *p2;
   char *p3;
   p1 = &firstvalue;  //	p1	=	address	of	firstvalue
   p2 = &secondvalue; //	p2	=	address	of	secondvalue
   p3 = &thirdvalue;  //	p3	=	address	of	thirdvalue
   *p1 = 10;          //	value	pointed	to	by	p1	=	10
   *p2 = *p1;         //	value	pointed	to	by	p2	=	value
   // pointed to by p1
   p1 = p2;   //	p1	=	p2	(value	of	pointer	is	copied)
   *p1 = 20;  //	value	pointed	to	by	p1	=	20
   *p3 = 'b'; //	value	pointed	to	by	p3	=	‘b	’
   cout << "firstvalue	is	" << firstvalue << '\n';
   cout << "secondvalue	is	" << secondvalue << '\n';
   cout << "thirdvalue	is	" << thirdvalue << '\n';
   return 0;
}
#include <iostream>
using namespace std;
int main()
{
   int x = 14102022, *p = &x;
   // p=&x;
   cout << "Value of var :" << x << endl;   // 14102022
   cout << "Value of var :" << &x << endl;  // 0x7ffdc9119bbc
   cout << "Value of var :" << p << endl;   //  0x7ffdc9119bbc
   cout << "Value of var :" << *p << endl;  // 14102022
   cout << "Value of var :" << **p << endl; // ERROR
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int arr[] = {4, 23, 8, 59};
   int *p = arr;
   cout << p << endl;          // 0x61ff00
   cout << *p << endl;         // 4
   cout << *(p + 1) << endl;   // 23
   cout << *(p + 2) << endl;   // 8
   cout << *(p + 3) << endl;   // 59
   cout << arr[0] << endl;     // 4
   cout << arr[1] << endl;     // 23
   cout << arr[2] << endl;     // 8
   cout << arr[3] << endl;     // 59
   cout << arr[4] << endl;     // garbage value
   cout << *arr << endl;       // 4
   cout << *arr + 1 << endl;   // 5
   cout << *arr + 2 << endl;   // 6
   cout << *arr + 3 << endl;   // 7
   cout << *(arr + 1) << endl; // 23
   cout << *(arr + 2) << endl; // 8
   cout << *(arr + 3) << endl; // 59
   cout << *(arr + 4) << endl; // garbage value
   cout << arr << endl;        // 40x61ff00
   cout << arr + 1 << endl;    // 0x61ff04
   cout << arr + 2 << endl;    // 0x61ff08
   cout << arr + 3 << endl;    // 0x61ff0c
   cout << arr + 4 << endl;    // 0x61ff10
                               //   cout << *arr[0] <<endl;  ERROR
   cout << &arr[0] << endl;    // 0x61ff00
   cout << &arr[1] << endl;    // 0x61ff04
   cout << &arr[2] << endl;    // 0x61ff08
   cout << &arr[3] << endl;    // 0x61ff0c
   cout << &arr[4] << endl;    // 0x61ff10
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int numbers[5];
   int *p = numbers;
   //   p = numbers;
   *p = 10;
   cout << p << endl;       // 0x61fef8
   cout << *p << endl;      // 10 // numbers[0]
   cout << numbers << endl; // 0x61fef8

   p = &numbers[2]; // number+2 // 0x61ff00
   *p = 20;
   cout << p << endl;  // 0x61ff00
   cout << *p << endl; // 20
   p--;
   cout << p << endl; // 0x61fefc
   *p = 30;
   p = numbers + 3;
   *p = 40;
   p = numbers;
   *(p + 4) = 50;
   for (int n = 0; n < 5; n++)
   {
      cout << numbers[n] << ","; // 10,30,20,40,50,
   }
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char Str[] = "abcdefg";
   char *ptr = Str;
   // ptr = Str;
   cout << ptr << endl; // abcdefg
   cout << Str << endl; // abcdefg
   ptr += 5;
   cout << ptr << endl;  // fg
   cout << Str << endl;  // abcdefg
   cout << *ptr << endl; // f
   ptr = ptr - 5;
   cout << *ptr << endl;       // a
   cout << *ptr + 1 << endl;   // 103 garbage
   cout << *(ptr + 1) << endl; // b
   cout << *(ptr + 2) << endl; // c
   cout << *(ptr + 3) << endl; // d
   cout << *(ptr + 4) << endl; // e
   cout << *(ptr + 5) << endl; // f
   cout << *(ptr + 6) << endl; // g
   cout << *(ptr + 7) << endl; // gARBAGE
   cout << *(ptr + 8) << endl; // garbage
   cout << *(ptr + 9) << endl; // garbage
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char s[] = "hello";
   char *p = s;
   // p=s ;
   cout << s << endl;                   // hello
   cout << &s << endl;                  // address of h
   cout << s + 1 << endl;               // ello
   cout << s + 2 << endl;               // llo
   cout << s + 3 << endl;               // lo
   cout << s + 4 << endl;               // o
   cout << s + 5 << endl;               // garbage
   cout << p << endl;                   // hello
   cout << p + 1 << endl;               // ello
   cout << p + 2 << endl;               // llo
   cout << p + 3 << endl;               // lo
   cout << p + 4 << endl;               // o
   cout << p << endl;                   // hello
   cout << *p << endl;                  //  h
   cout << *p + 1 << endl;              //(unknown 2 me)  value of char (i.e *p =65 => cout<< *p  ==>A)
   cout << *(p + 1) << endl;            //  e
   cout << *p << endl;                  // h    no actuall incrrement in pointer
   cout << *(p + 2) << endl;            //  l
   cout << *(p + 3) << endl;            //  l
   cout << *(p + 4) << endl;            //  o
   cout << *(p + 5) << endl;            //  garbage
   cout << s[0] << " " << p[0] << endl; // h  h
   cout << s[1] << " " << p[1] << endl; // e  e
   cout << s[2] << " " << p[2] << endl; // l  l
   cout << s[3] << " " << p[3] << endl; // l  l
   cout << s[4] << " " << p[4] << endl; // o  o
   cout << s[5] << " " << p[5] << endl; // garbage value
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char arr[20];
   int i;
   //   for(i = 0; i < 10; i++) {
   //     *(arr + i) = 65 + i;
   //   }
   //   *(arr + i) = '\0';
   cout << arr + 9;
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   float f = 10.5;
   float p = 2.5;
   float *ptr = &f;
   cout << *ptr << " " << f << " " << p << endl; // 10.5 10.5 2.5
   (*ptr)++;
   cout << *ptr << " " << f << " " << p << endl; // 11.5 11.5 2.5
   *ptr = p;
   cout << *ptr << " " << f << " " << p; // 2.5 2.5 2.5
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int *ptr = 0;
   int a = 10;
   *ptr = a;
   cout << *ptr << endl;
   return 0; // segmentation error
}

#include <iostream>
using namespace std;
int main()
{
   double a = 10.54;
   double *d = &a;
   d = d + 1;
   cout << d << endl; // 0x61ff08
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int a = 7;
   int *c = &a;
   c = c + 1;
   cout << a << "  " << *c << endl; // 7  6422284
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int a[6] = {1, 2, 3};
   cout << (a + 2); // 0x61ff00
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int a[] = {1, 2, 3, 4};
   int *p = a++; // ERROR
   cout << *p << endl;
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char ch = 'a';
   char *ptr = &ch;
   cout << ch << endl;   // a
   cout << *ptr << endl; // a
   ch++;
   cout << ch << endl;   // b
   cout << *ptr << endl; // b
   ch = ch + 2;
   cout << ch << endl;   // d
   cout << *ptr << endl; // d
   ch = ch + 4;
   cout << ch << endl;   // h
   cout << *ptr << endl; // h
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char b[] = "xyz";
   char *c = &b[0];
   cout << c << endl;  // xyz
   cout << b << endl;  // xyz
   cout << *c << endl; // x
   c++;
   cout << c << endl;  // yz
   cout << b << endl;  // xyz
   cout << *c << endl; // y
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int x = 10;
   int *y = &x;
   int **z = &y;
   cout << x << endl;   // 10
   cout << &x << endl;  // 0x61ff0c
   cout << y << endl;   // 0x61ff0c
   cout << *y << endl;  // 10
   cout << &y << endl;  // 0x61ff08
   cout << z << endl;   // 0x61ff08
   cout << *z << endl;  // 0x61ff0c
   cout << **z << endl; // 10
   cout << &z << endl;  // 0x61ff04
   return 0;
}

#include <iostream>
using namespace std;

void fun(int a[])
{
   cout << a[0] << " " << endl;
}
int main()
{
   int a[] = {13, 52, 63, 34};
   int *p = a;
   fun(a);               // 13
   fun(a + 1);           // 52
   fun(a + 2);           // 63
   fun(a + 4);           // garbage
   fun(a + 3);           // 34
   cout << a[0] << endl; // 13
   *a = *a + 10;
   cout << *a; // 23
   return 0;
}

#include <iostream>
using namespace std;
void square(int *p)
{
   int a = 10;
   p = &a;
   *p = (*p) * (*p);
   cout << *p << endl;
}
int main()
{
   int a = 10;
   square(&a);        // 100
   cout << a << endl; // 10   // no change
}

#include <iostream>
using namespace std;
void increment(int **p)
{
   (**p)++;
   cout << **p << endl;
}
int main()
{
   int num = 10;
   int *ptr = &num;
   increment(&ptr);     // 11
   cout << num << endl; // 11   change
}

#include <iostream>
using namespace std;
int main()
{
   int a = 100;
   int *p = &a;
   int **q = &p;
   int b = (**q)++ + 4;           // +++ = +  ororor (a++) +b =a + b
   cout << a << " " << b << endl; // 101 104
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int firstvalue = 5, secondvalue = 15;
   char thirdvalue = 'a';
   int *p1, *p2;
   char *p3;
   p1 = &firstvalue;  //	p1	=	address	of	firstvalue
   p2 = &secondvalue; //	p2	=	address	of	secondvalue
   p3 = &thirdvalue;  //	p3	=	address	of	thirdvalue
   *p1 = 10;          //	value	pointed	to	by	p1	=	10
   *p2 = *p1;         //	value	pointed	to	by	p2	=	value
   // pointed to by p1
   p1 = p2;   //	p1	=	p2	(value	of	pointer	is	copied)
   *p1 = 20;  //	value	pointed	to	by	p1	=	20
   *p3 = 'b'; //	value	pointed	to	by	p3	=	‘b	’
   cout << "firstvalue	is	" << firstvalue << '\n';
   cout << "secondvalue	is	" << secondvalue << '\n';
   cout << "thirdvalue	is	" << thirdvalue << '\n';
   return 0;
}
// firstvalue      is      10
// secondvalue     is      20
// thirdvalue      is      b

#include <iostream>
using namespace std;
int main()
{
   int x[] = {23, 45, 446, 675, 765, 4543, 65456, 5445};
   int *p = x;
   cout << *p++ << endl;   // 23
   cout << *p << endl;     // 45
   cout << *p + 2 << endl; // 47
   cout << *++p << endl;   // 446
   cout << ++*p << endl;   // 447
   cout << (*p)++ << endl; // 447
   return 0;
}

#include <iostream>
using namespace std;
void swap(char *x, char *y)
{
   char *t = x;
   x = y;
   y = t;
   cout << x << " " << y; // geeksforgeeks geeksquiz
}

int main()
{
   char *x = "geeksquiz";
   char *y = "geeksforgeeks";
   char *t;
   swap(x, y);            // geeksforgeeks geeksquiz  // only swap inside the the function but not outside
   cout << x << " " << y; // geeksquiz geeksforgeeks
   t = x;
   x = y;
   y = t;
   cout << " " << x << " " << y; // geeksforgeeks geeksquiz  // now they swap globally
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
   float *ptr1 = &arr[0];
   float *ptr2 = ptr1 + 3;
   cout << *ptr1 << endl;   // 12.5
   cout << *ptr2 << endl;   // 90.5
   cout << ptr1 << endl;    // 0x61fef4
   cout << &arr[0] << endl; // 0x61fef4
   cout << arr << endl;     // 0x61fef4
   cout << ptr2 << endl;    // 0x61ff00
   cout << &arr[3] << endl; // 0x61ff00
   cout << arr + 3 << endl; // 0x61ff00
   cout << ptr2 - ptr1;     // 3  // difference in index
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   char st[] = "ABCD";
   cout << 0 [st] << endl;             // A
   cout << 1 [st] << endl;             // B
   cout << 2 [st] << endl;             // C
   cout << 3 [st] << endl;             // D
   cout << 4 [st] << endl;             // garbage
   cout << st[0] << endl;              // A
   cout << st[1] << endl;              // B
   cout << st[2] << endl;              // C
   cout << st[3] << endl;              // D
   cout << st[4] << endl;              // garbage
   cout << *st << endl;                // A
   cout << *(st + 1) << endl;          // B
   cout << *(st + 2) << endl;          // C
   cout << *(st + 3) << endl;          // D
   cout << *(st + 4) << endl;          // garbage
   for (int i = 0; st[i] != '\0'; i++) // 65 66 67 68
   {
      cout << *(st) + i << endl;
   }
   return 0;
}

#include <iostream>
using namespace std;
void Q(int z)
{
   z += z;
   cout << z << " "; // 14
}

void P(int *y)
{
   int x = *y + 2;
   Q(x);
   *y = x - 1;
   cout << x << " ";  // 7
   cout << *y << " "; // 6
}

int main()
{
   int x = 5;
   P(&x);
   cout << x; // 6
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int ***r, **q, *p, i = 8;
   p = &i;
   (*p)++;
   q = &p;
   (**q)++;
   r = &q;
   cout << *p << " " << **q << " " << ***r; // 10 10 10
   return 0;
}
#include<iostream>
using namespace std;
int f(int x, int *py, int **ppz)
{
   int y, z;
   **ppz += 1;
   z = **ppz;
   *py += 2;
   y = *py;
   x += 3;
   return x + y + z;
}
int main()
{
   int c, *b, **a;
   c = 4;
   b = &c;
   a = &b;
   cout << f(c, b, a);
   return 0;
}