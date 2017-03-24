#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void add_matrix();

void multiplication_matrix();

void subtraction_matrix();

void transpose_matrix();

void symmetric_matrix();

void eigenvalue_eigenvector();

void about_developer();

int main(void)
{
    /* changing background color to purple and font color to bright white for whole output */

    system("COLOR 5F");

    double option;
    printf("\n\t\t********************************************");
    printf("\n\n\n\t\t             WELCOME TO MATRIX            ");
    printf("\n\n\n\t\t********************************************\n\n\n\n\t\t");

    printf("\t  Press any key to continue ");

    getch();

    /* giving menu item to user */

    printf("\n\n\n Here you can\n\n 1. Add Two Square Matrix.\n\n 2. Multiply Two Any Matrix.\n\n 3. Calculate Subtraction from Two Square Matrix.\n\n 4. Find Transpose of A Given Square Matrix.\n\n 5. Check Given Square Matrix Is Symmetric or Not.\n\n 6. Find Eigenvalue and Eigenvectors of A Square Matrix.\n\n 7. About developer.\n\n 8. Exit\n\n");

     /* to choose option for user */

    printf("\n\n\t\t\tPlease, choose your option : ");
    scanf("%lf", &option);


    for(;;){

    if (option == 1)
    {
        /* if user choose to add two matrices */

        add_matrix();

    }
    else if (option == 2)
    {
        /* if user choose to multiply two matrices */

        multiplication_matrix();

    }
    else if (option == 3)
    {
        /* if user choose to subtract two matrices */

        subtraction_matrix();

    }
    else if (option == 4)
    {
        /* if user choose to find transpose of a matrix */

        transpose_matrix();

    }
    else if (option == 5)
    {
        /* if user choose to find symmetric matrix */

        symmetric_matrix();

    }
    else if (option == 6)
    {
        /* if user choose to find eigenvalue and eigenvectors*/

        eigenvalue_eigenvector();
    }
    else if (option == 7)
    {
        /* if user choose to know about developer */

       about_developer();
    }
    else if(option == 8)
    {
        /* if user choose to exit the program */

        exit(1);

    }
    else
    {
        /* if user choose different option */

        printf("\n\n ERROR!!! TRY AGAIN.\n\n\n\t\t\t");
    }

    printf("  Press any key to continue ");

    getch();

    /* again giving menu item to user */

    printf("\n\n HERE YOU CAN\n\n 1. Add Two Square Matrix.\n\n 2. Multiply Two Any Matrix.\n\n 3. Calculate Subtraction from Two Square Matrix.\n\n 4. Find Transpose of A Given Square Matrix.\n\n 5. Check Given Square Matrix Is Symmetric or Not.\n\n 6. Find Eigenvalue and Eigenvectors of A Square Matrix.\n\n 7. About developer.\n\n 8. Exit\n\n");


    /* again to choose option for user */

    printf("\n\n\t\t\tPLEASE, CHOOSE YOUR OPTION : ");
    scanf("%lf", &option);


    }



}


                                /// ***************FUNCTION OF ADD MATRIX *****************



    void add_matrix(){

    int i, j, size1;
    double a[10][10], b[10][10], c[10][10];

    // scanning from the user size of two matrices

    printf("\n\n Enter the size of two matrices: ");
    scanf("%d", &size1);

    // scanning first matrix elements and storing elements in array a[][]

    printf("\n\n Enter The First Matrix Elements: \n");

    for(i=0; i<size1; i++){

        for(j=0; j<size1; j++){

            printf("\n [%d][%d] = ",i,j);

            scanf("%lf", &a[i][j]);
        }
    }

    // showing the first matrix elements

    printf("\n The First Matrix is: \n\n");

    for(i=0; i<size1; i++){

        for(j=0; j<size1; j++){

            printf(" %.2lf ", a[i][j]);

        }

        printf("\n\n");
    }

    // scanning second matrix elements and storing in array b[][]

    printf("\n Enter The Second Matrix Elements: \n");

    for(i=0; i<size1; i++){

        for(j=0; j<size1; j++){

            printf("\n [%d][%d] = ",i,j);

            scanf("%lf", &b[i][j]);

        }
    }

    // showing the second matrix elements

    printf("\n The Second Matrix is: \n\n");

    for(i=0; i<size1; i++){

        for(j=0; j<size1; j++){

            printf(" %.2lf ", b[i][j]);

        }

        printf("\n\n");
    }

    // method of add two matrices

    printf("\n Calculation phase of addition of the two matrices:\n\n");

    for(i=0;i<size1;i++){

        for(j=0;j<size1;j++){

            printf("\n [%d][%d] = %.2lf + %.2lf \n\n",i, j, a[i][j], b[i][j]);
        }
     }

    // Addition of the Two matrices

    for(i=0; i<size1; i++){

        for(j=0; j<size1; j++){

            c[i][j] = a[i][j] + b[i][j];

        }
     }

    // showing the addition result of the two matrices

    printf("\n Result of Two Matrices is: \n\n");

    for(i=0; i<size1; i++){

        for(j=0; j<size1; j++){

            printf(" %.2lf ", c[i][j]);

        }

        printf("\n\n");
    }

    printf("\n\n\n\t\t\t");
}


                                /// ****************FUNCTION OF MULTIPLICATION MATRIX *******************




   void multiplication_matrix(){

    int i, j, k, r1, c1, r2, c2;
    double a[10][10], b[10][10], c[10][10];

    /* taking first matrix column number */

    printf("\n\n 1st matrix column = ");
    scanf("%d", &c1);

    /* taking second matrix row number */

    printf("\n\n 2nd matrix row = ");
    scanf("%d", &r2);

    /* checking is both are same*/

    while(c1!=r2)
    {
        printf("\n\n Error!!! First matrix column and Second matrix row must be same.\n\n Please try again...");

        /* if both are not same then taking again row and column number */

        printf("\n\n 1st matrix column = ");
        scanf("%d", &c1);

        printf("\n\n 2nd matrix row = ");
        scanf("%d", &r2);

    }

    /* taking first matrix row number */

    printf("\n\n 1st matrix row = ");
    scanf("%d", &r1);

    /* taking  second matrix column number */

    printf("\n\n 2nd matrix column = ");
    scanf("%d", &c2);

    /* taking first matrix elements */

    printf("\n\n Enter The Elements of First Matrix: \n\n");

    for(i=0; i<r1; i++){

        for(j=0; j<c1; j++){

            printf("\n a[%d][%d] = ", i, j);

            scanf("%lf", &a[i][j]);
        }
    }

    /* showing the first matrix elements */

    printf("\n Elements of First Matrix: \n\n");

    for(i=0; i<r1; i++){

        for(j=0; j<c1; j++){

                printf(" %.2lf ", a[i][j] );

        }

        printf("\n\n");
    }

    /* taking second matrix elements */

    printf("\n Enter The Elements of Second Matrix: \n\n");
    for(i=0; i<r2; i++){

        for(j=0; j<c2; j++){

            printf("\n b[%d][%d] = ", i, j);

            scanf("%lf", &b[i][j]);
        }
    }

    /* showing second matrix elements */

    printf("\n Elements of Second Matrix: \n\n");
    for(i=0; i<r2; i++){

        for(j=0; j<c2; j++){

                printf(" %.2lf ", b[i][j]);
        }

        printf("\n\n");
    }

    /* initializing multiplication matrix */

    for(i=0;i<r1;i++){

        for(j=0; j<c2;j++){

            c[i][j] = 0;
        }
    }

    /* multiplication method of two matrix */

    for(i=0; i<r1; i++){

        for(j=0; j<c2; j++){

                for(k=0;k<c1;k++){

                        c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
        }
    }

    // showing method of multiplication

    printf("\n Multiplication phase of calculation of the two matrices:\n\n");

    for(i=0;i<r1;i++){

        for(j=0;j<c2;j++){

                for(k=0;k<c1;k++){

                    printf(" [%d][%d] = ( %.2lf * %.2lf ) \n\n", i, j, a[i][k], b[k][j]);
        }
     }
   }

    /* showing multiplication result */

    printf("\n Multiplication result: \n\n");

    for(i=0; i<r1; i++){

        for(j=0; j<c2; j++){

                printf(" %.2lf ", c[i][j]);

        }

        printf("\n\n");
    }

    printf("\n\n\n\t\t\t");

    }



                                    /// ************FUNCTION OF SUBTRACTION MATRIX ************




   void subtraction_matrix(){

    int i, j, size;
    double a[5][5], b[5][5], c[5][5];

    // scanning from the user size of two matrices

    printf("\n\n Enter the size of two matrices : ");
    scanf("%d", &size);

    // scanning first matrix elements

    printf("\n\n Enter The First Matrix Elements: \n");

    for(i=0; i<size; i++){

        for(j=0; j<size; j++){

            printf("\n [%d][%d] = ",i,j);

            scanf("%lf", &a[i][j]);

        }
    }

    // showing the first matrix elements

    printf("\n The First Matrix is: \n\n");

    for(i=0; i<size; i++){

        for(j=0; j<size; j++){

            printf(" %.2lf ", a[i][j]);

        }

        printf("\n\n");
    }

    // scanning second matrix elements

    printf("\n Enter The Second Matrix Elements: \n");

    for(i=0; i<size; i++){

        for(j=0; j<size; j++){

            printf("\n [%d][%d] = ",i,j);

            scanf("%lf", &b[i][j]);

        }
    }

    // showing the second matrix elements

    printf("\n The Second Matrix is: \n\n");

    for(i=0; i<size; i++){

        for(j=0; j<size; j++){

            printf(" %.2lf ", b[i][j]);
        }

        printf("\n\n");
    }

    // Subtraction of the Two matrices

    for(i=0; i<size; i++){

        for(j=0; j<size; j++){

            c[i][j] = a[i][j] - b[i][j];
        }
     }

    // method of subtract

    printf("\n Subtracting phase of calculation of the two matrices:\n\n");

    for(i=0;i<size;i++){

        for(j=0;j<size;j++){

            printf(" [%d][%d] = %.2lf - %.2lf \n\n",i, j, a[i][j], b[i][j]);
        }
     }

    // showing the subtraction result of the two matrices

    printf("\n Result of Two Matrices is: \n\n");

    for(i=0; i<size; i++){

        for(j=0; j<size; j++){

            printf(" %.2lf ", c[i][j]);
        }

        printf("\n\n");
    }

    printf("\n\n\n\t\t\t");

}



                                 /// **************FUNCTION OF Transpose matrix ****************




   void transpose_matrix(){


    int  i, j, temp, k;

    double a[10][10];

    /* scanning size of square matrix from user */

    printf("\n\n Enter The Size of Matrix: ");
    scanf("%d", &k);

    /* taking matrix's elements */

    printf("\n\n Elements of The Matrix: \n");

    for(i=0; i<k; i++){

        for(j=0; j<k;j++){

                printf("\n [%d][%d] = ", i, j);

                scanf("%lf", &a[i][j]);
        }
    }

    /* showing elements of the matrix */

    printf("\n The Given Square Matrix is: \n\n");

    for(i=0; i<k; i++){

        for(j=0; j<k; j++){

            printf(" %.2lf ", a[i][j]);

        }

    printf("\n\n");

    }

    /* creating transpose matrix */

    for(i=0; i<k; i++){

        for(j=0; j<i; j++){

            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;

        }
    }

    /* showing the output */

    printf("\n The Transpose Matrix is: \n\n");

    for(i=0; i<k; i++){

        for(j=0; j<k; j++){

            printf(" %.2lf ", a[i][j]);

        }

        printf("\n\n");

    }

    printf("\n\n\n\t\t\t");

}



                                /// ****************FUNCTION OF SYMMETRIC MATRIX ******************




   void symmetric_matrix()
{
    int i, j, k,tmp1;

    double sm[10][10];

    /* taking size of a square matrix from user */

    printf("\n\n Size of A Square Matrix: ");
    scanf("%d", &k);

    /* taking the square matrix elements from user */

    printf("\n Elements of The Square Matrix:\n");

    for(i = 0; i < k; i++)
    {
        for(j = 0; j < k; j++)
        {
            printf("\n [%d][%d] = ", i, j);

            scanf("%lf", &sm[i][j]);

        }
    }

     /* showing elements of the matrix */

    printf("\n The Given Square Matrix Is: \n\n");

    for(i=0; i<k; i++){

        for(j=0; j<k; j++){

            printf(" %.2lf ", sm[i][j]);

        }

    printf("\n\n");

    }

    /* comparing with its transpose matrix */

    for(i = 0; i < k; i++)
    {
        for(j = 0; j < k; j++)
        {
            if(sm[i][j] != sm[j][i])
            {
                    /* if both matrix are not same then storing it to a variable */

                tmp1=1;

            }

        }
    }

    /* compare this variable with 1 */

    if(tmp1==1)
    {
        /* if same than showing that matrix is not symmetric */

        printf("\n\n Given Square Matrix Is Not Symmetric.\n ");
    }
    else
     {
        /* if not same than showing that matrix is symmetric */

        printf("\n\n Given Square Matrix Is Symmetric.\n ");

    }

    printf("\n\n\n\t\t\t");

}



                                /// ********************FUNCTION OF EIGENVALUE_EIGENVECTOR*********************




  void eigenvalue_eigenvector()
  {
    int i, j, n;

    float a[10][10], x[10], z[10], e[10], zmax, emax;

    /* scanning size of matrices */

    printf("\n\n Enter the order of matrix: ");
    scanf("%d", &n);

    /* scanning matrix elements */

    printf("\n\n Enter matrix elements row-wise:\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\n A[%d][%d] = ", i,j);
            scanf("%f", &a[i][j]);
        }
    }

    // showing the matrix elements

    printf("\n\n The Matrix is: \n\n");

    for(i=0; i<n; i++){

        for(j=0; j<n; j++){

            printf(" %.2lf ", a[i][j]);

        }

        printf("\n\n");
    }


    /* scanning column vectors elements */

    printf("\n\n Enter the column vector:\n");

    for(i=0; i<n; i++)
    {
        printf("\n X[%d] = ",i);
        scanf("%f", &x[i]);
    }
    do
    {
        /* doing multiplication and storing it in new array z[] */

        for(i=0; i<n; i++)
        {
            z[i]=0;

            for(j=0; j<n; j++)
            {
                z[i]= z[i] + a[i][j] * x[j];
            }
        }

        /* initializing the variable for maximum value */

        zmax = fabs(z[0]);

        /* storing maximum value in the variable from array z[] */

        for(i=1; i<n; i++)
        {
            if( ( fabs ( z[i] ) ) > zmax )

                zmax = fabs( z[i] );
        }

        /* dividing z[] by zmax */

        for(i=0; i<n; i++)
        {
            z[i] = z[i] / zmax;
        }

        /* subtracting multiplication array to column vector and storing in e[] */

        for(i=0; i<n; i++)
        {
            e[i]=0;

            e[i] = fabs( ( fabs(z[i]) ) - ( fabs(x[i]) ) );

        }

        /* initializing the variable for maximum value */

        emax = e[0];

        /* finding maximum value from e[] */

        for(i=1; i<n; i++)
        {
            if(e[i] > emax)

                emax=e[i];

        }

        /* setting multiplication array to column vector */

        for(i=0; i<n; i++)
        {
            x[i] = z[i];
        }

    }while(emax > 0.001);

    /* showing the eigenvalue of the given matrix */

    printf("\n\n The required eigenvalue is: %.2f",zmax);

    /* showing the eigenvector of  the given matrix */

    printf("\n\n The required eigenvector is:\n");

    for(i=0; i<n; i++)
    {
        printf("\n %.2f\n", z[i]);
    }

    printf("\n\n\n\t\t\t");
  }


                                /// ***************FUNCTION OF About_developer *****************



 void about_developer()
 {
     printf("\n\n\n 1. Md. Omar Faruque khan Russel.");
     printf("\n\n    ID: 152-35-1170");
     printf("\n\n    Department of Software Engineering.");
     printf("\n\n    Daffodil International University.");


     printf("\n\n\n 2. Shahadat Hossain.");
     printf("\n\n    ID: 153-35-1356");
     printf("\n\n    Department of Software Engineering.");
     printf("\n\n    Daffodil International University.");

     printf("\n\n\n\t\t\t");
 }
