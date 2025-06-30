#include <stdio.h>

struct Student // khai báo cấu trúc student
{
    char name[50]; // kieu du lieu char voi name bang 50 phan tu
    char group[20];// kieu du lieu char voi group bang 20 phan tu
    int age; // bien age la kieu du lieu so nguyen;
    float gpa; // bien gpa la kieu du lieu so thuc 
};

void insertStudent(struct Student *group, int *length); // bien cam khong nhan tham so, ham thêm sinh vien có lấy từ giá trị của group và length
void printStudent(struct Student *group, int length); // chưa hiểu 
void printMaxGpa(struct Student *group, int length, int choice); // chưa hiểu
void questionForStop(int *choice); // chưa hiểu

int main()
{

    /**
     * 1. Nhap vao 1 danh sach sinh vien cua lop C2505E cho den khi chon stop
     * 2. Luu tru danh sach sinh vien nay vao mot mang Student
     * 3. Hien thi tat ca sinh vien ra man hinh
     * 4. Hien thi ra sinh vien co diem GPA cao nhat
     */

    int choice = 1; // gán choice = 1
    int i = 0; // i = 0
    int count; //count là số nguyên
    char buff[5]; // biến buff có kiểu dữ liệu ký tự có 5 phần tử
    printf("Lop co bao nhieu sinh vien: "); // in ra yeu cau nhap so sv trong trong lop 
    scanf("%d", &count); // count số lượng, kieu nguyen
    struct Student c2505e[count]; // cấu trúc student c2505e với số lượng nhập vào 
    fgets(buff, sizeof(buff), stdin);// fgets hàm đọc chuỗi có khoảng trắng( có buff ), cái này có kết thúc bằng /0, nhập từ bàn phím)
    do
    {
        insertStudent(c2505e, &i); // sử dụng vòng lặp do while để chạy ít nhất 1 lần 
        printStudent(c2505e, i); // i là số sinh viên sau khi được nhập từ &i
        questionForStop(&choice); // có hỏi người dùng muốn tiếp tục nhâp thêm hay dừng lại dùng con trỏ &choice
        printMaxGpa(c2505e, i, choice); // in ra sv có iđểm số cao nhât 
    } while (choice != 0 || i > count); // biến choice khác 0 hoặc i > số nhập vào vào thì điều kiện đúng tiếp tục chạy trương trình

    return 0; 
}

void printMaxGpa(struct Student *group, int length, int choice) // hàm câm,  khai báo thêm 2 cấu trúc student giá trị group và khai báo thêm 2 biến-
{
    if (choice == 0) 
    {
        int maxIndex = 0; // tạm thời đặt biến maxIndex = 0 tương ứng với group[0]
        struct Student *ptr = group; // gán giá trị ptr bằng group
        for (int i = 0; i < length; i++)// dùng vòng for để tìm ra bạn có điểm cao nhất
        {
            if ((*(ptr + i)).gpa >= (*(ptr + maxIndex)).gpa) //  giá trị của con trỏ bằng ptr + i. gpa  nhỏ hơn hoặc bằng giá trị con trỏ tới sinh vien có điểm cao nhất. prt là con trỏ duyệt mảng
            {
                maxIndex = i; 
            }
        }
        struct Student *maxGpa = group; // cấu trúc, giá trị con trỏ của maxGpa bằng group
        maxGpa += maxIndex; // maxgpa cộng vào và bằng maxindex
        printf("Max GPA from Student %s with GPA = %.2f", (*maxGpa).name, (*maxGpa).gpa); // in ra màm hình  tên và điểm của người có giá trị lớn nhất lấy 2 chữ số sau dấu phẩy.
    }
}

void insertStudent(struct Student *group, int *length)  // chạy nhưng không trả về kết quả. 
{
    struct Student student; // cấu trúc trong cấu trúc
    printf("Nhap ten sinh vien: \n");
    fgets(student.name, sizeof(student.name), stdin);//  đọc chuỗi ký tự có khoảng trắng, cấu trúc tên mới nhập, sizeof: lấy cấu trúc tên của bộ nhớ bằng char[50], in vào giá trị nguyên bản dùng khi có đầu vào là fgets
    printf("Nhap ten lop: \n");
    fgets(student.group, sizeof(student.group), stdin); // giống tên, khác ở đâyy là ta nhập lớp

    printf("Nhap gpa: \n");
    scanf("%f", &student.gpa); // nhập điểm và điểm đó gán với địa chỉ của cấu trúc student.gpa

    printf("Nhap tuoi: \n");
    scanf("%d", &student.age);// giống trên
    group[*length] = student;// group và giá trị phần tử bên trong bây giờ bằng student
    *length++; // lần xong giá trị của length được tăng lên 1 đơn vị
};

void printStudent(struct Student *group, int length) // chạy mà không trả về kết quả, khai báo giá trị 
{
    for (int i = 0; i < length; i++) // dùng vòng lặp for để in  ra kết quả của người trong group vừa nhập vào
    {
        struct Student std = *(group + i);
        printf("#%d Ten: %s - Lop: %s - Tuoi: %d - GPA: %.2f\n", i + 1,
               std.name, std.group, std.age, std.gpa);
    }
}

void questionForStop(int *choice) // khai báo thêm giá trị biến choice để cập nhật kết quả
{
    printf("1 - Continue, 0 - Find student with max GPA and Exit ?\n"); // sau khi in ra kết quả rồi hỏi người dùng có muốn dừng lại không 1 là tiếp 0 la dung
    scanf("%d", choice); // đọc giá trị 1 hay 0 do người dùng nhập
    if (*choice != 0) // điều kiện chạy là choice  khác 0
    {
        char buff[5]; // không hiểu 
        fgets(buff, sizeof(buff), stdin); //dùng để in ra cái gì đó
        
    }
}