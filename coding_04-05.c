#include <stdio.h>

void countCall() {
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}
//ผลลัพธ์ที่ได้เหมือนหรือต่างกันอย่างไร? เพราะเหตุใด?
//ต่างกัน:
//กรณีที่ 1 (static): ค่าของ counter สะสมไว้ระหว่างการเรียกฟังก์ชัน
//กรณีที่ 2 (non-static): ค่าของ counter ถูกรีเซ็ตใหม่ทุกครั้งที่เรียก
//ความหมายของ Non-Static Variable?
//คือ ตัวแปรที่อยู่ภายในฟังก์ชันและถูกสร้างใหม่ทุกครั้งที่ฟังก์ชันถูกเรียก
//อายุของตัวแปรมีแค่ในช่วงที่ฟังก์ชันทำงานเท่านั้น (Lifetime: local to each call)
//คำว่า static มีผลยังไงต่อการทดลอง?
//ตัวแปร static จะเก็บค่าล่าสุดไว้แม้ว่าฟังก์ชันจะจบการทำงานแล้ว
// ค่าจะไม่ถูกรีเซ็ตเมื่อเรียกฟังก์ชันอีกครั้ง ทำให้ดูเหมือน "จำค่าได้"S