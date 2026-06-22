#include <stdio.h>
int main() {
    //internet_cafe.cLevel 1 : แบบพื้นฐาน (Basic)1. ร้านอินเตอร์เน็ตคาเฟเร้านหนึ่งคิดค่าใช้บริการ 15 บาทต่อชั่วโมง จงคำานวณค่าใช้จ่ายของลูกค้าที่ใช้บริการเป็นเวลา50 ชั่วโมง ใช้้กลอกข้อมูลลงไป
    int hours,cost;
    printf("Enter hours: ");
    scanf("%d",&hours); //50
    printf("Enter cost: ");
    scanf("%d",&cost); //15
    int total = hours * cost;
    printf("Total cost = %d",total);
}