
#include <stdio.h>

struct Student
{
    char name[50];
    char group[20];
    int age;
    float gpa;
};

void findMaxGpa(struct Student *group, int length, struct Student *std)
{
    int maxIndex = 0;
    struct Student *ptr = group;
    for (int i = 0; i < length; i++)
    {
        if ((*(ptr + i)).gpa >= (*(ptr + maxIndex)).gpa)
        {
            maxIndex = i;
        }
    }
    std = group;
    std += maxIndex;
}

int main()
{

    /*
     * 1. Nhap vao 1 danh sach sinh vien cua lop C2505E cho den khi chon stop
     * 2. Luu tru danh sach sinh vien nay vao mot mang Student
     * 3. Hien thi tat ca sinh vien ra man hinh
     * 4. Hien thi ra sinh vien co diem GPA cao nhat
     */

    int choice = 1;
    int i = 0;
    int count;
    char buff[5];
    printf("Lop co bao nhieu sinh vien: ");
    scanf("%d", &count);

    struct Student c2505e[count];
    fgets(buff, sizeof(buff), stdin);
    do
    {
        struct Student student;
        if (i > 0)
        {
            fgets(buff, sizeof(buff), stdin);
        }
        printf("Nhap ten sinh vien: \n");
        fgets(student.name, sizeof(student.name), stdin);

        printf("Nhap ten lop: \n");
        fgets(student.group, sizeof(student.group), stdin);

        printf("Nhap gpa: \n");
        scanf("%f", &student.gpa);

        printf("Nhap tuoi: \n");
        scanf("%d", &student.age);
        c2505e[i] = student;
        i++;
        for (int j = 0; j < i; j++)
        {
            printf("#%d Ten: %s - Lop: %s - Tuoi: %d - GPA: %.2f\n", j + 1,
                   c2505e[j].name, c2505e[j].group, c2505e[j].age, c2505e[j].gpa);
        }

        printf("1 - Continue, 0 - Find student with max GPA and Exit ?\n");
        scanf("%d", &choice);
        if (choice == 0)
        {
            struct Student *maxGpa = c2505e;
            findMaxGpa(c2505e, i, maxGpa);
            printf("Max GPA from Student %s with GPA = %.2f", (*maxGpa).name, (*maxGpa).gpa);
        }

    } while (choice != 0);

    return 0;


}
