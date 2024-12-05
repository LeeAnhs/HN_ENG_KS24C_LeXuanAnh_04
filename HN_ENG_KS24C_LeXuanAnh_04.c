#include<stdio.h>

int main() {
    int luachon;
    int arr[100];
    int i,n;
    int temp;
    while (1) {
        printf("\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Dem so hoan hao trong mang\n");
        printf("4. Tim gia tri lon thu 2 trong mang\n");
        printf("5. Them phan tu vao vi tri ngau nhien\n");
        printf("6. Xoa phan tu tai vi tri\n");
        printf("7. Sap xep mang theo thu tu tang dan \n");
        printf("8. Tim kiem phan tu trong mang \n");
        printf("9. Sap xep mang (so chan truoc so le sau\n");
        printf("10. Dao nguoc thu tu cac phan tu trong mang\n");
        printf("11. Thoat\n");
        printf("\nEnter your number: ");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1:
                printf("nhap so phan tu cho mang: ");
                scanf("%d", &n);
                if (n <= 0) {
                    printf("So phan tu khong hop le. Moi nhap lai.\n");
                    break;
                }
                for (i = 0; i < n; i++) {
                    printf("Nhap so phan tu cua mang:");
                    scanf("%d",&arr[i]);
                }
                break;
            case 2:
                printf("Gia tri cac phan tu trong mang:\n");
                for (i = 0; i < n; i++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                case 3:
                	printf("Chua xong\n");
            break;
            case 4:
                {
                    int max=arr[0], max2 =-1;
                    for (i = 1; i < n; i++) {
                        if (arr[i] > max) {
                            max2 = max;
                            max= arr[i];
                        } else if (arr[i] > max2 && arr[i] != max) {
                            max2 = arr[i];
                        }
                    }
                    if (max2!= -1) {
                        printf("Max thu 2 la: %d\n", max2);
                    } else {
                        printf("Khong co gia tri lon thu 2.\n");
                    }
                }
                break;
            case 5:
                {
                    int giatri, vitri;
                    printf("Nhap gia tri phan tu can them: ");
                    scanf("%d", &giatri);
                    printf("Nhap vi tri can them (0 den %d): ", n);
                    scanf("%d", &vitri);

                    if (vitri < 0 || vitri > n) {
                        printf("Vi tri khong hop le.\n");
                        break;
                    }
                    for (i = n; i > vitri; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[vitri] = giatri;
                    n++;
                    printf("Da them phan tu %d vao vi tri %d.\n", giatri,vitri);
                }
                break;
            case 6:
                {
                    int vitri;
                    printf("Nhap vi tri phan tu can xoa: ");
                    scanf("%d", &vitri);
                    if (vitri < 0 || vitri >= n) {
                        printf("Vi tri khong hop le.\n");
                        break;
                    }
                    for (i = vitri; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa tai vi tri %d.\n", vitri);
                }
                break;
            case 7:
                printf("Chua xong");
                break;
            case 8:
         		printf("Chua xong");
            break;

            case 9:
            	for(i=0;i<n;i++){
                	if(arr[i]%2==0){
                		printf("%d\n",arr[i]);
					}else{
						printf("%d\n",arr[i]);
					}
					}
				
                break;
            case 10:
                    for (i = 0; i<n/2; i++) {
                        temp = arr[i];
                        arr[i] = arr[n -i - 1];
                        arr[n-i- 1] = temp;
                    }
                    printf("Mang sau khi dao nguoc:\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\n",arr[i]);
                    }
                break;
            case 11:
                printf("Thoat\n");
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }
    return 0;
}

