#include <stdio.h>
int main(void)
{
    int money, change, change_1;
    int price, c5000, c1000, c500, c100;

    printf("���� ���� �Է��Ͻÿ�: ");
    scanf("%d", &price); // ���� ���� �Է¹޴´�.

    printf("������ �ݾ��� �Է��Ͻÿ�: ");
    scanf("%d", &money); // ���� ���� �Է¹޴´�.

    change = money - price; // �Ž������� change�� ���� 1400
    change_1 = change;
    c1000 = change / 1000; // ���� �ܵ����� 1000������ ������ ����Ѵ�. 1
    change = change % 1000; //������ �����ڸ� ����Ͽ� ���� �ܵ��� ����Ѵ�.400
    c500 = change / 500; // ���� �ܵ����� 500�� ������ ������ ����Ѵ�.0
    change = change % 500; //������ �����ڸ� ����Ͽ� ���� �ܵ��� ����Ѵ�. 400
    c100 = change / 100; // 4
    change = change % 100;
    

    printf("\nõ����: %d��\n", c1000);
    printf("����� ����: %d��\n", c500);
    printf("��� ����: %d��\n", c100);
    printf("�� �Ž�������: %d��", change_1);
    return 0;
}
    
