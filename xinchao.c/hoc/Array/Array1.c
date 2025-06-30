// khai bao kieu du lieu mang
#include<stdio.h>
int main(){

   // int Array[7] = {10,20,50,1,0,99,100};
  //  for(int i; i<7; i++){
   //     printf("Array [%d], Value = %d\n", i, Array[i]);
   // }
      //  int array[7];
        // nhap du lieu cho tung phan trong mang
      //  for(int i =0;i<7;i++){
      //      printf("Enter value for array[%d]\n", i);
       //     scanf("%d", &array[i]);
            // hieenr thi du lieu cua mang ra man hinh
       // }
       // for (int i=0;i<7;i++){
        //    printf("Araay [%d], Value = %d\n", i, array[i]);

       // }
    int array[100];
    for(int i = 0; i <=100; i++){
        printf("Enter value for array[%d]\n", i);
        scanf("%d",&array[i]);
    }
    for (int i=0; i <100; i++){
        printf("array [%d], Value = %d\n", array[i]);
    }
    


    return 0;
}
int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    
    struct Book books[n];
    
    // Nhập thông tin sách
    for (int i = 0; i < n; i++) {
        printf("Enter title of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].title); // Đọc chuỗi có khoảng trắng
        printf("Enter author of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].author);
        printf("Enter publish date (day month year) of book %d: ", i + 1);
        scanf("%d %d %d", &books[i].publishDate.day, &books[i].publishDate.month, &books[i].publishDate.year);
    }
    void inputBook(struct Book *book) {
    printf("Enter book title: ");
    scanf(" %[^\n]", book->title);
    printf("Enter author name: ");
    scanf(" %[^\n]", book->author);
    printf("Enter publish date (day month year): ");
    scanf("%d %d %d", &book->publishDate.day, &book->publishDate.month, &book->publishDate.year);
}
// nhap lieu kieu mang
