#include "learning.h"
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAXLEN 256

int main()
{
    char name[20];
    int yaz; //для выбора языка//

    printf("Здравсвуйте.\nВас приветствует программа по заучиванию иностранных "
           "слов, я буду рад вам помочь с иностранным языком.\n");
    printf("Введите своё имя (не более 20 символов). В качестве разделителя "
           "используёте нижнее подчёркивание:\n");
    scanf("%s", name);
    printf("%s, выберите язык.\nДоступны:\n1.Английский язык.\n2.Немецкий "
           "язык.\n",
           name);
    printf("Напишите номер нужного пункта.\n");
    scanf("%d", &yaz); //считывает выбранный пункт//
    yaz = check(yaz);
    switch (yaz) {
    case 1:
        printf("Вы выбрали английский язык.\n");
        angl(name);
        break;
    case 2:
        printf("Вы выбрали немецкий язык.\n");
        nem(name);
        break;
    default:
        printf("%s, удачи в освоении иностранных языков.\n", name);
        break;
    }
    return 0;
}
