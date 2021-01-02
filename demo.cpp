/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0) for(int j=0;j<n*2-1;j++) cout<<"*";   
        for(int j=0;j<i;j++) cout<<"~";
        if(i>0&&i<n-1) {
            cout<<"*";
            for(int j=0;j<n-i-1;j++) cout<<".";
            for(int j=1;j<n-i-1;j++) cout<<".";
            cout<<"*";
        }
        if(i==n-1)
        cout<<"*";
        cout<<endl;
    }
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int d=n;
    int a[100][100];
    for(int i=0;i<n*2-1;i++,d--){
       for(int j=i;j<n*2-i-2;j++) a[i][j]=d;
        for(int j=i;j<n*2-2-i;j++) a[j][n*2-i-2]=d;
        for(int j=n*2-2-i;j>i;j--) a[n*2-2-i][j]=d;
        for(int j=n*2-2-i;j>i;j--) a[j][i]=d; 
    }
    
        a[n-1][n-1]=1;
    
    for(int i=0;i<n*2-1;i++){
        for(int j=0;j<n*2-1;j++) 
        cout<<a[i][j];
        cout<<endl;
    }
}
*/
/*#include<stdio.h>

int main(){  // vẽ tam giác số theo nguyên tắc H(3)'
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--) printf("~");
        for(int j=0;j<=i*2;j++) {printf("%d",j+2);j++;}
        if(i>0)for(int j=i*2;j>=2;j--){
            printf("%d",j);
            j--;
        }
        printf("\n");
    }
}*/
/* in ra tam giác như sau.
input
5
output
// 1
// 3 2
// 4 5 6
// 10 9 8 7
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    int y=1;
    for(int i=1;i<=n;i++){
       if(i%2!=0) for(int j=1;j<=i;j++) {
           printf("%d ",y++);
        }
       if(i%2==0) {
            for(int j=i;j>=1;j--){
                
                y++;
        }
        int d=y-1;
            for(int j=1;j<=i;j++) printf("%d ",d--);
        }
        printf("\n");
        
    }
}*/

// 1
// 1 3 1
// 1 3 5 3 1
// 1 3 5 7 5 3 1
// 1 3 5 7 9 7 5 3 1
/*#include<stdio.h> //vẽ tam giác số theo nguyên tắc H.
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d",x);
           x+=2;
        }
        x-=4;
        for(int j=1;j<=i;j++){
            printf("%d",x);
            x-=2;
        }
        x=1; 
        printf("\n");
    }
}*/