#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    // Name of the Student
    char a[50];
    printf("Enter the name of the student: \n");
    scanf(" %[^\n]",a);
    
    // Student Registeration Number
    long long int b;
    printf("Enter the Registeration Number of the student: \n");
    scanf("%ld",&b);
    
    // Enter the Current on going Semester
    int c;
    printf("Enter the Semester Number: \n");
    scanf("%d",&c);
    
    // Enter the Number of Subjects
    int n;
    printf("Enter the number of subjects: \n");
    scanf("%d",&n);
    
    // MAIN STARTS
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("memory didnot get allocated");
        exit(1);
    }
    
    char sub[n][50];
    
    for(int i = 0; i < n; i++){
    printf("Enter the %d Subject Name: \n", i+1);
    scanf(" %[^\n]", sub[i]);  // FIXED: This now reads full line with spaces
}
    
    for(int i=0;i<n;i++){
        printf("Enter the %d Subject Marks: \n",i+1);
        scanf("%d",&ptr[i]);
    }
    
    // for the sum and average
    int sum=0;
    float avg=0;
    for(int i=0;i<n;i++){
        sum+=ptr[i];
    }
    
    
    float percentage;
    percentage = ((float)sum / (n * 100)) * 100;
    avg=sum/n;
    
    // assigning grade
    char grade[25];
    
    // check for ifs
    if(avg<50){
        strcpy(grade,"RA");
    }
    else if(avg>=50 && avg<60){
        strcpy(grade,"B");
    }
    else if(avg>=60 && avg<70){
        strcpy(grade,"B+");
    }
    else if(avg>=70 && avg<80){
        strcpy(grade,"A");
    }
    else if(avg>=80 && avg<90){
        strcpy(grade,"A+");
    }
    else if(avg>=90 && avg<=100){
        strcpy(grade,"O");
    }
    else{
        printf("NA");
    }
    
    
    // File starts
    FILE *fs;
    fs=fopen("Student-Grade-Calculation.txt","w+");
    fprintf(fs,"Name of the student: %s\n   Student Registeration Number: %ld\n   Current Semester: %d\n   Total Marks obtained in this sem: %d\n   Grade Obtained: %s\n   Percentage Obtained: %.2f\n",a,b,c,sum,grade,percentage);
    fprintf(fs, "\nSubject-wise Marks:\n");
    for(int i=0;i<n;i++){
    fprintf(fs, "%s : %d\n  ", sub[i], ptr[i]);
    }

    free(ptr);
    fclose(fs);
    printf("Saved to your created file");
}