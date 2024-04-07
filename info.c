#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Address{
        char area[200];
        char district[200];
        char taluka[200];
        char nearby[200];
        int  zip;
    };
struct student{
    char school[200];
    char name[200];
    char father[200];
    char mother[200];
    struct Address address;
    char grade;
    float marks;
    int age;
    int roll;
    int mobile;
    char hooby[200];
    char medals[200];
};
struct employee{
    char name[200];
    char education[200];
    int mobile;
    struct Address address;
    float credit;
    char experience[200];
    int salary;
};
struct customer{
    char name[200];
    char product[200];
    int mrp;
    int mobile;
    struct Address address;
    char review[200];
};
void inputemployee(struct employee *emp){
    printf("Enter name of the Employee:-\n");
    scanf("%s",emp->name);
    printf("Enter education details:-\n");
    scanf("%s",emp->education);
    printf("Enter mobile number:-\n");
    scanf("%d",emp->mobile);
    //input for the address
    printf("Enter the address:-\n");
    printf("Enter area name:-\n");
    scanf("%s",emp->address.area);
    printf("Enter the district:-\n");
    scanf("%s",emp->address.district);
    printf("Enter the taluka:-\n");
    scanf("%s",emp->address.taluka);
    printf("Enter nearby famous location:-\n");
    scanf("%s",emp->address.nearby);
    printf("Enter the pin code:-\n");
    scanf("%d",&emp->address.zip);
    //printing the information
    
}
void inputcustomer(struct customer *cust){
    printf("Enter the name of the customer:-\n");
    scanf("%s",cust->name);
    printf("Enter the name of the product you purchase:-\n");
    scanf("%s",cust->product);
    printf("Enter the price of the product:-");
    scanf("%d",&cust->mrp);
    printf("Enter the mobile number :- \n");
    scanf("%d",&cust->mobile);
    //input for the address
    printf("Enter the address:-\n");
    printf("Enter area name:-\n");
    scanf("%s",cust->address.area);
    printf("Enter the district:-\n");
    scanf("%s",cust->address.district);
    printf("Enter the taluka:-\n");
    scanf("%s",cust->address.taluka);
    printf("Enter nearby famous location:-\n");
    scanf("%s",cust->address.nearby);
    printf("Enter the pin code:-\n");
    scanf("%d",&cust->address.zip);
}

void inputstudent(struct student *stu){
    printf("Enter the name of the student:- \n");
    scanf("%s",stu->name);
    printf("Enter the school name of the student:- \n");
    scanf("%s",stu->school);
    printf("Enter father's name:-\n");
    scanf("%s",stu->father);
    printf("Enter mother's name:- \n");
    scanf("%s",stu->mother);
    //input for the address
    printf("Enter the address:-\n");
    printf("Enter area name:-\n");
    scanf("%s",stu->address.area);
    printf("Enter the district:-\n");
    scanf("%s",stu->address.district);
    printf("Enter the taluka:-\n");
    scanf("%s",stu->address.taluka);
    printf("Enter nearby famous location:-\n");
    scanf("%s",stu->address.nearby);
    printf("Enter the pin code:-\n");
    scanf("%d",&stu->address.zip);
    //other details
    printf("Enter the marks of the student:-\n");
    scanf("%f",&stu->marks);
    fflush(stdin);
    printf("Enter the grade of the student:- \n");
    scanf("%c",&stu->grade);
    printf("Enter the age :-\n");
    scanf("%d",&stu->age);
    printf("Enter the roll number :- \n");
    scanf("%d",&stu->roll);
    printf("Enter the moblie number :- \n");
    scanf("%d",&stu->mobile);
    printf("Enter the hobby:- \n");
    fflush(stdin);
    scanf("%s",stu->hooby);
    printf("Enter the details of the medal you got in any competition:-\n");
    scanf("%s",stu->medals);
}
void printEmployee(struct employee emp) {
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Education: %s\n", emp.education);
    printf("Mobile: %d\n", emp.mobile);
    printf("Address: %s, %s, %s, Nearby: %s, ZIP: %d\n", emp.address.area, emp.address.district, emp.address.taluka, emp.address.nearby, emp.address.zip);
}

void printCustomer(struct customer cust) {
    printf("\nCustomer Details:\n");
    printf("Name: %s\n", cust.name);
    printf("Product: %s\n", cust.product);
    printf("MRP: %d\n", cust.mrp);
    printf("Mobile: %d\n", cust.mobile);
    printf("Address: %s, %s, %s, Nearby: %s, ZIP: %d\n", cust.address.area, cust.address.district, cust.address.taluka, cust.address.nearby, cust.address.zip);
}

void printStudent(struct student stu) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", stu.name);
    printf("School: %s\n", stu.school);
    printf("Father: %s\n", stu.father);
    printf("Mother: %s\n", stu.mother);
    printf("Address: %s, %s, %s, Nearby: %s, ZIP: %d\n", stu.address.area, stu.address.district, stu.address.taluka, stu.address.nearby, stu.address.zip);
    printf("Marks: %.2f\n", stu.marks);
    printf("Grade: %c\n", stu.grade);
    printf("Age: %d\n", stu.age);
    printf("Roll Number: %d\n", stu.roll);
    printf("Mobile: %d\n", stu.mobile);
    printf("Hobby: %s\n", stu.hooby);
    printf("Medals: %s\n", stu.medals);
}
int main(){
    printf("Hello welcome to the infosave portal\n");
    char input[200];
    printf("Enter what details you want to store:-\n");
    scanf("%s",input);
    if(strcmp(input, "student") == 0||strcmp(input, "STUDENT") ==0 || strcmp(input, "Student") == 0){
        printf("You select to store the information of Student\n");
        struct student s;
        inputstudent(&s);
        printStudent(s);
    }
    else if(strcmp(input, "employee") == 0||strcmp(input, "EMPLOYEE") ==0 || strcmp(input, "Employee") == 0){
        printf("You select to store the information of employee\n");
        struct employee e;
        inputemployee(&e);
        printEmployee(e);
    }
    else if(strcmp(input, "customer") == 0||strcmp(input, "CUSTOMER") ==0 || strcmp(input, "Customer") == 0){
        printf("You select to store the information of Customer\n");
        struct customer c;
        inputcustomer(&c);
        printCustomer(c);
    }
    return 0;
}