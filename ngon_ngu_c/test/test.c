
    #include <stdio.h>

struct Student
{
    char name[50];
    char group[20];
    int age;
    float gpa;
};

void insertStudent(struct Student *group, int *length); // thêm thông tin sinh viên, gồm giá trị lớp và giá trị số phần tử 
void printStudent(struct Student *group, int length);   // hiển thị thông tin sinh viên, gốm lấy giá trị lớp được khai báo và số phần tử đã được khai báo 
void printMaxGpa(struct Student *group, int length);// in sinh viên có điểm cao nhất, gồm giá trị lớp và số phần tử
void questionForStop(int *choice, int i, int count);// hỏi người dùng có muốn ngừng nhập không,  giá trị choice lựa chọn xem muốn lựa chọn, khai báo biến i trong câu hỏi và số lượng 
void sortStudents(struct Student *group, int length);// sắp xếp danh sách sinh viên
void preventSkipLine(); // tránh nhảy dòng

int main()
/*
khai báo biến thường struct để có thể in ra kết quả
{
khai báo biến không trả về kết quả(void) gán các giá trị bao gồm:
gán giá trị cho lớp và số phần tử, số lượng,  lựa chọn 
} 
*/
{

    /**
     * 1. Nhap vao 1 danh sach sinh vien cua lop C2505E cho den khi chon stop
     * 2. Luu tru danh sach sinh vien nay vao mot mang Student
     * 3. Hien thi tat ca sinh vien ra man hinh
     * 4. Hien thi ra sinh vien co diem GPA cao nhat
     */
    
     // khai báo biến
    int choice = 1;
    int i = 0;
    int count;

    // nhap du lieu

    printf("Lop co bao nhieu sinh vien: "); // xác định lớp có bao nhiêu sv
    scanf("%d", &count); // trả về là số nguyên, biến số lượng
    struct Student c2505e[count]; // có sử dụng cấu trúc lớp c2505e[số lượng]
    preventSkipLine(); // thực hiện tuần tự tránh nhảy dòng
    // xử lý dữ liệu

    do // sử dụng do while để thực hiện vòng lặp ít nhất 1 lần với 
    {
        insertStudent(c2505e, &i); // số lượng sv ở lớp c2505e, với địa chỉ con trỏ i. ( sao ở đây là địa chỉ i mà ở dưới lại là biến i)
        printStudent(c2505e, i);// thông tin sv ở lớp c2505e, với biến i 
        questionForStop(&choice, i, count); // hỏi xem muốn dừng lại hay tiếp tục
        // chạy ít nhât 1 lần 3 dòng ở trên 
        if (choice == 0 || i >= count) // nếu : biến choice = 0 hoặc biến i lớn hơn hoặc bằng số lượng học sinh đã khai báo. 
        {
            printMaxGpa(c2505e, i); 
            sortStudents(c2505e, i);
            printStudent(c2505e, i);
            return 0;
         // thì in ra thông tin của sinh viên.
        }
    } while (choice != 0 && i < count); // nếu if sai thì tiếp tục kiểm tra điều kiện của while( choice khác 0 và i < số lượng sinh viên);
    return 0;
}
// khai báo biến

void printMaxGpa(struct Student *group, int length) // biến void không trả về kết quả để khai báo điểm cao nhất bao gồm có cấu trúc của giá trị của lớp(số sv), số lượng là số nguyên
{
    int maxIndex = 0; // gán cho điểm số tối đa bằng 0
    // struct Student *ptr = group; // cấu trúc student với giá trị của con trỏ bằng lớp. 
    for (int i = 0; i < length; i++) // sử dụng vòng lặp for i bằng 0 và i, điều kiện i nhỏ hơn số lượng sv, i tăng thêm 1 đơn vị
    // nhap du lieu
    {
        if ((*(group + i)).gpa >= (*(group + maxIndex)).gpa) // điều kiện: giá trị của con trỏ + i gắn với cấu truc qua dấu '.' mà nhỏ hơn  giá trị con trỏ cộng với số max gắn với cấu trúc gpa 
            maxIndex = i; // lệnh số lớn nhất bằng i 
    }
    struct Student *maxGpa = group + maxIndex; // khai báo:  cấu trúc gồm giá trị con trỏ điểm cao nhất bằng số học sinh trong lớp
    // maxGpa += maxIndex;// điểm số cao nhất sẽ bằng cộng với chỉ số cao nhất và bằng chỉ số cao nhất

    // xử lý dữ liệu
    printf("Max GPA from Student %s with GPA = %.2f\n", (*maxGpa).name, (*maxGpa).gpa); // in ra dòng chữ điểm cao nhất của sinh viên với kiểu số thực lấy giá trị ở 2 số sau dấu phẩy, gồm tên và điểm
}

// khai báo biến 
void sortStudents(struct Student *group, int length) // khai báo biến sắp xếp sinh viên, gồm có giá trị của lớp được nhập và số lượng sv
// nhập dữ liệu
{
    for (int i = length; i > 0; i--) // điều kiện for i bằng số lượng sv, i lớn hơn 0, trừ 1 đơn vị sau khi thực hiện xong
    {
        for (int j = 0; j < i; j++) // vong lặp for trong for với điều kiện biến j = 0, j nhỏ hơn i, j tăng 1 thì thực hiện trương trình
        {
            if (j < i - 1 && (*(group + j)).gpa < (*(group + j + 1)).gpa) // câu lệnh điều kiện nếu đúng j nhỏ hơn i trừ 1  và giá trị của lớp cộng j nhỏ hơn giá trị của lớp cộng j và cộng 1 thì 
            { 
                struct Student temp = *(group + j + 1); // khai báo cấu trúc temp bằng giá trị của group cộng j cộng i
                *(group + j + 1) = *(group + j); // giá trị của group cộng j cộng 1 bằng giá trị cuẩ group cộng j
                *(group + j) = temp;//  giá trị của group cộng j lại bằng temp; 
                // tai sao lại phải ghi 2 dòng này 
            }
        }
    }
}
// khai báo biến 
void insertStudent(struct Student *group, int *length) // biến thêm sv có giá trị của group và giá trị của số lượng
{
    struct Student student; // cấu trúc trong cấu trúc
    // nhập dữ liệu & xử lý dl
    printf("Nhap ten sinh vien: ");  // yêu cầu nhập chuỗi ký tự
    fgets(student.name, sizeof(student.name), stdin); // nhập chuỗi ký tự cần hàm fgets để có thể in ra toàn bộ chuỗi đã nhập

    printf("Nhap ten lop: "); // nhập chuỗi ký tự
    fgets(student.group, sizeof(student.group), stdin); // bắt buộc phải dùng hàm fgets để in chuỗi ký tự và phải dùng stdin nếu muốn in ra chuỗi ấy

    printf("Nhap gpa: "); // nhập điểm của sv
    scanf("%f", &student.gpa); // nhập điểm kiêu float, điền vào cấu trúc con 

    printf("Nhap tuoi: "); // nhập điểm của sv
    scanf("%d", &student.age); // tuổi là số nguyên, điền vào cấu trúc con
    group[*length] = student;// số lượng sinh viên bằng biến student
    *length = *length + 1; // giá trị của số lượng sinh viên từ giờ đc auto cộng 1
};

// khai báo biến
void printStudent(struct Student *group, int length) // in thông tin của sv, sử dụng cấu trúc gồm giá trị group và số lượng sinh vinê
{// nhập dữ liệu
    for (int i = 0; i < length; i++) // điều kiện để vòng lặp for chạy
    {
        struct Student std = *(group + i); // ct std bằng giá trị cảu group cộng 1 
        // xử lý dữ liệu
        printf("#%d Ten: %s - Lop: %s - Tuoi: %d - GPA: %.2f\n", i + 1, // i  luôn cộng  thêm 1 đơn vị
               std.name, std.group, std.age, std.gpa); // in ra thông tin của sinh viên 
    }
}
// khai báo biến
void questionForStop(int *choice, int i, int count)
{// nhập dữ liệu
    printf("1 - Continue, 0 - Find student with max GPA and Exit ?\n"); // hỏi người nhập xem có tiêp tục nhập thông tin sinh viên không
    scanf("%d", choice);
    // xử lý dữ liệu
    if (choice != 0) // biến choice khác 0 thì 
        preventSkipLine(); // dùng để ngăn nhảy dòng bắt buộc người nhập phải nhập bước này 
}
// khai báo biến
void preventSkipLine() 
{ nhập dl
     char skipLine[2]; // bỏ qua phần tử thứ 2 trong hàm
     // xử lý dữ liệu
     fgets(skipLine, sizeof(skipLine), stdin);
}