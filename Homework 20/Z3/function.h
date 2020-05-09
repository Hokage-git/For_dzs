#ifndef INTEGER
void rand_arrint(int arr[],int size);
void show_arrint(int arr[], int size);
void min_arrint(int arr[], int size);
void max_arrint(int arr[], int size);
void sortint(int arr[], int size);
void reductint(int arr[]);
#define rand_arr rand_arrint;
#define show_arr show_arrint;
#define min_arr min_arrint;
#define max_arr max_arrint;
#define sort sortint;
#define reduct reductint;


#elif DOUBLE
void rand_arrdouble(double arr[], int size);
void show_arrdouble(double arr[], int size);
void min_arrdouble(double arr[], int size);
void max_arrdouble(double arr[], int size);
void sortdouble(double arr[], int size);
void reductdouble(double arr[]);
#define rand_arr rand_arrdouble;
#define show_arr show_arrdouble;
#define min_arr min_arrdouble;
#define max_arr max_arrdouble;
#define sort sortdouble;
#define reduct reductdouble;



#elif CHAR
void rand_arrchar(char arr[], int size);
void show_arrchar(char arr[], int size);
void min_arrchar(char arr[], int size);
void max_arrchar(char arr[], int size);
void sortchar(char arr[], int size);
void reductchar(char arr[]);
#define rand_arr rand_arrchar;
#define show_arr show_arrchar;
#define min_arr min_arrchar;
#define max_arr max_arrchar;
#define sort sortchar;
#define reduct reductchar;


#endif
