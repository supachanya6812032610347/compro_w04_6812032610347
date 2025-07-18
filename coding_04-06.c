#include <stdio.h>

const int GLOBAL_RATE = 10; // Global constant (visible throughout the file)

void calculate() {
    const int LOCAL_BONUS = 50; // Local constant (visible only inside this function)

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate(); // Call function to print both constants

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE); // ✅ OK: GLOBAL_RATE is global

    // Try to print LOCAL_BONUS here >> ❌ Error: LOCAL_BONUS is not visible in main()
    // printf("LOCAL_BONUS = %d\n", LOCAL_BONUS); // This line will cause a compile-time error

    return 0;
}
//ค่าคงที่ GLOBAL_RATE และ LOCAL_BONUS ค่ามีค่าเท่าไร?
//GLOBAL_RATE = 10
//LOCAL_BONUS = 50 (แต่เข้าถึงได้เฉพาะในฟังก์ชัน calculate())
//เกิดอะไรขึ้นถ้านำบรรทัด GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80; ไปใส่ในโปรแกรม?
//จะเกิด compile-time error เพราะค่าที่ประกาศด้วย const ไม่สามารถถูกเปลี่ยนแปลงได้
//ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้?
//เพราะเป็น local variable ที่มีขอบเขตการใช้งาน (scope) อยู่เฉพาะภายในฟังก์ชัน calculate() เท่านั้น
//อธิบายและสรุปผลที่ได้จากการทดลอง:
//const ใช้สำหรับเก็บค่าคงที่ที่ไม่สามารถเปลี่ยนแปลงได้
//ตัวแปร const ที่อยู่ในระดับ global สามารถเข้าถึงได้จากทุกฟังก์ชัน
//ตัวแปร const ที่อยู่ในระดับ local จะสามารถเข้าถึงได้เฉพาะภายในฟังก์ชันหรือบล็อกที่มันถูกประกาศ

