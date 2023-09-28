#include <stdio.h>
#include <stdlib.h>

void Addittion(void);
void Subtraction(void);
void Multiplication(void);
void Division(void);
void Transposition(void);
void Determinant(void);
void Inverse(void);

int main()
{
    int num;
    printf("For Matrixs Addition enter \t (1) \n");
    printf("For Matrixs Subtraction enter\t (2) \n");
    printf("For Matrixs Multiplication enter (3) \n");
    printf("For Matrixs Division enter\t (4) \n");
    printf("For Matrixs Transposition enter\t (5) \n");
    printf("For Matrixs determinant enter\t (6) \n");
    printf("For Matrixs Inverse enter\t (7) \n");
    scanf("%d",&num);
    if(num==1)
    {
        Addittion();
    }
    else if(num==2)
    {
        Subtraction();
    }
    else if(num==3)
    {
        Multiplication();
    }
    else if(num==4)
    {
        division();
    }
    else if(num==5)
    {
        transposition();
    }
    else if(num==6)
    {
        determinant();
    }
    else if(num==7)
    {
        Inverse();
    }
    else
    {
        printf("PLease enter operation number from 1 to 7 ");
    }


}

void Addittion(void)
{
    int i,j;
    int m,n,p,q ;
    float a[100][100]= {0} ,b[100][100]= {0} ,c[100][100]= {0} ;
    printf("Enter number of rows and columns in matrix A:\n");
    scanf("%d%d",&m,&n);
    printf("Enter number of rows and columns in matrix B:\n");
    scanf("%d%d",&p,&q);
    if(m!=p || n!=q)
        printf("Matrixs Addition is not possible\n");
    else
    {
        printf("Enter elements of matrix A:\n");
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                printf("A[%d][%d]=",i+1,j+1);
                scanf("%f", &a[i][j]);
            }
        printf("Enter elements of matrix B:\n");
        for(i=0; i<p; i++)
            for(j=0; j<q; j++)
            {
                printf("B[%d][%d]=",i+1,j+1);
                scanf("%f", &b[i][j]);
            }
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                c[i][j] = a[i][j] + b[i][j];
        printf("\nResult of Matrix Addition is:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
                printf("%10.3f", c[i][j]);
            printf("\n");
        }


    }
}

void Subtraction(void)
{

    int i,j;
    int m,n,p,q ;
    float a[100][100]= {0} ,b[100][100]= {0} ,c[100][100]= {0} ;
    printf("Enter number of rows and columns in matrix A:\n");
    scanf("%d%d",&m,&n);
    printf("Enter number of rows and columns in matrix B:\n");
    scanf("%d%d",&p,&q);
    if(m!=p || n!=q)
        printf("Matrixs Subtraction is not possible\n");
    else
    {
        printf("Enter elements of matrix A:\n");
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                printf("A[%d][%d]=",i+1,j+1);
                scanf("%f", &a[i][j]);
            }
        printf("Enter elements of matrix B:\n");
        for(i=0; i<p; i++)
            for(j=0; j<q; j++)
            {
                printf("B[%d][%d]=",i+1,j+1);
                scanf("%f", &b[i][j]);
            }
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                c[i][j] = a[i][j] - b[i][j];
        printf("\nResult of Matrix Subtraction is:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
                printf("%10.3f ", c[i][j]);
            printf("\n");
        }
    }

}

void Multiplication(void)
{
    int i,j,k;
    int m,n,p,q ;
    float a[100][100]= {0} ,b[100][100]= {0} ,c[100][100]= {0} ;
    printf("Enter number of rows and columns in matrix A:\n");
    scanf("%d%d",&m,&n);
    printf("Enter number of rows and columns in matrix B:\n");
    scanf("%d%d",&p,&q);
    if (n!=p)
        printf("Matrixs multiplication is not possible\n");
    else
    {
        printf("Enter elements of matrix A:\n");
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                printf("A[%d][%d]=",i+1,j+1);
                scanf("%f", &a[i][j]);
            }
        printf("Enter elements of matrix B:\n");
        for(i=0; i<p; i++)
            for(j=0; j<q; j++)
            {
                printf("B[%d][%d]=",i+1,j+1);
                scanf("%f", &b[i][j]);
            }
        for(i=0; i<m; i++)
            for(j=0; j<q; j++)
                for(k=0; k<p; k++)
                    c[i][j] += a[i][k]*b[k][j];
        printf("\nResult of Matrixs Multiplication is:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
                printf("%10.3f ", c[i][j]);
            printf("\n");
        }
    }

}

void division(void)
{
    int i,j,k;
    int m,n,p,q ;
    float det,num,temp;
    float a[100][100]= {0} ,b[100][100]= {0} ,c[100][100]= {0},d[100][100]= {0}, e[100][100]= {0}, inv[100][100]= {0} ;
    printf("Enter number of rows and columns in matrix A:\n");
    scanf("%d%d",&m,&n);
    printf("Enter number of rows and columns in [2*2]or[3*3] matrix B:\n");
    scanf("%d%d",&p,&q);
    if (p!=q||n!=p)
        printf("Matrixs division is not possible\n");
    else if((p==2)||(p==3))
    {
        if(p==2)
        {
            printf("Enter elements of matrix A :\n");
            for (i=0; i<m; i++)
                for (j=0; j<n; j++)
                {
                    printf("A[%d][%d]=",i+1,j+1);
                    scanf("%f",&a[i][j]);
                }
            printf("Enter elements of matrix B : \n");
            for (i=0; i<p; i++)
                for(j=0; j<q; j++)
                {
                    printf("B[%d][%d]=",i+1,j+1);
                    scanf("%f",&b[i][j]);
                }
            det=((b[0][0] * b[1][1])-(b[0][1] * b[1][0]));
            if(det==0)
            {
                printf("The determinant of matrix B equal to zero ,So matrixs division is not possible");
            }
            else
            {
                for (i=0; i<p; i++)
                    for(j=i; j<q; j++)
                    {
                        temp=b[0][0];
                        b[0][0]=b[1][1];
                        b[1][1]=temp;
                        b[0][1]=-b[0][1];
                        b[1][0]=-b[1][0];
                    }
                for(i=0; i<p; i++)
                    for(j=0; j<q; j++)
                        inv[i][j]=b[i][j]/det;
                for(i=0; i<m; i++)
                    for(j=0; j<n; j++)
                        for(k=0; k<p; k++)
                            c[i][j] += a[i][k]*inv[k][j];
                printf("\nResult of Matrixs division is:\n");
                for(i=0; i<m; i++)
                {
                    for(j=0; j<p; j++)
                        printf("%10.3f ", c[i][j]);
                    printf("\n");
                }
            }
        }
        else if(p==3)
        {
            printf("Enter elements of matrix A :\n");
            for (i=0; i<m; i++)
                for (j=0; j<n; j++)
                {
                    printf("A[%d][%d]=",i+1,j+1);
                    scanf("%f",&a[i][j]);


                }
            printf("\nEnter elements of matrix B : \n");
            for (i=0; i<p; i++)
                for(j=0; j<q; j++)
                {
                    printf("B[%d][%d]=",i+1,j+1);
                    scanf("%f",&b[i][j]);
                }
            det=0;
            for(i=0; i<3; i++)
                det= det+(b[0][i]*(b[1][(i+1)%3]*b[2][(i+2)%3]-b[1][(i+2)%3]*b[2][(i+1)%3]));
            if(det==0)
            {
                printf("The determinant of matrix B equal to zero ,So matrixs division is not possible");
            }
            else
            {
                for(i=0; i<3; i++)
                    for(j=0; j<3; j++)
                        c[i][j]=(((b[(i+1)%3][(j+1)%3]*b[(i+2)%3][(j+2)%3])-(b[(i+1)%3][(j+2)%3]*b[(i+2)%3][(j+1)%3]))/det);
                for(i=0 ; i<3 ; i++)
                {
                    for(j=0 ; j<3 ; j++)
                        d[i][j]=("%10.3f ", c[j][i]);
                    printf("\n");
                }
                for(i=0; i<m; i++)
                    for(j=0; j<3; j++)
                        for(k=0; k<3; k++)
                            e[i][j] += a[i][k]*d[k][j];
                printf("Result of Matrixs Division is:\n");
                for(i=0; i<m; i++)
                {
                    for(j=0; j<q; j++)
                        printf("%10.3f ", e[i][j]);
                    printf("\n");
                }
            }
        }
    }
}

void transposition(void)
{
    int i,j ;
    int m,n ;
    float a[100][100]= {0} ,b[100][100]= {0} ,c[100][100]= {0} ;
    printf("Enter number of rows and columns in matrix A :\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements of the matrix A :\n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]=",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    printf("\nResult of Matrix transposition is :\n");
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
            printf("%10.3f ", a[j][i]);
        printf("\n");
    }
}

void determinant(void)
{
    int i,j ;
    int m,n ;
    float det=0 ;
    float a[100][100]= {0} ;

    printf("Enter number of rows and columns in [2*2]or[3*3] matrix A:\n");
    scanf("%d%d",&m,&n);
    if(m!=n)
        printf("Matrix determinant is not possible");
    else if(m==2)
    {
        printf("enter the element of matrix : \n");
        for (i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                printf("A[%d][%d]=",i+1,j+1);
                scanf("%f",&a[i][j]);
            }
        det=(a[0][0] * a[1][1])-(a[0][1] * a[1][0]);
        printf("\nResult of matrix determinant of the [2*2] matrix A is : \n%.3f",det);
    }
    else if(m==3)
    {
        printf("Enter elements of the matrix A :\n");
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                printf("A[%d][%d]=",i+1,j+1);
                scanf("%f",&a[i][j]);
            }

        for(i=0; i<m; i++)
            det = det + (a[0][i]*(a[1] [(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));
        printf("\nResult of matrix determinant of the [3*3] matrix A is : \n%.3f",det);
    }
}

void Inverse(void)
{
    int i,j;
    int m,n;
    float a[100][100]= {0}, b[100][100]= {0},inv[100][100]= {0} ;
    float det,num;
    printf("Enter number of rows and columns in [2*2]or[3*3] matrix A:\n");
    scanf("%d%d",&m,&n);
    if(m!=n)
        printf("Matrix inverse is not possible");
    else if(m==2)
    {
        printf("Enter the element of [2*2] in matrix A : \n");
        for (i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                printf("A[%d][%d]=",i+1,j+1);
                scanf("%f",&a[i][j]);
            }
        det=(a[0][0] * a[1][1])-(a[0][1] * a[1][0]);
        if(det==0)
        {
            printf("The determinant of this matrix equal to zero ,So matrix inverse is not possible");
        }
        else
        {
            printf("\nResult of matrix inverse of [2*2] matrix is : \n");
            for (i=0; i<m; i++)
                for(j=i; j<n; j++)
                {
                    num=a[0][0];
                    a[0][0]=a[1][1];
                    a[1][1]=num;
                    a[0][1]=-a[0][1];
                    a[1][0]=-a[1][0];
                }
            for(i=0; i<m; i++)
                for(j=0; j<n; j++)
                    inv[i][j]=a[i][j]/det;
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    printf("%10.4f",inv[i][j]);
                }
                printf("\n");
            }
        }

    }

    else if(m==3)
    {
        printf("Enter the element of [3*3] in matrix A : \n");
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                printf("A[%d][%d]=",i+1,j+1);
                scanf("%f",&a[i][j]);
            }
        for(i=0; i<m; i++)
            det = det + (a[0][i]*(a[1] [(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));
        if(det==0)
        {
            printf("The determinant of this matrix equal to zero ,So matrix inverse is not possible");
        }
        else
        {
            printf("\nResult of matrix inverse of [3*3] matrix is : \n");
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                    b[i][j]=("%10.2f",((a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3])-(a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/det);
            }
            for(i=0 ; i<n ; i++)
            {
                for(j=0 ; j<m ; j++)
                    printf("%10.4f ", b[j][i]);
                printf("\n");
            }
        }
    }
}
