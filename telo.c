#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAXLEN 256

int main()
{
    char name[20];
	int yaz; //для выбора языка//
	
	printf("Здравсвуйте.\nВас приветствует программа по заучиванию иностранных слов, я буду рад вам помочь с иностранным языком.\n");
	printf("Введите своё имя:\n")
	scanf("%s", name);
	printf("%s, выберите язык.\nДоступны:\n1.Английский язык.\n2.Немецкий язык.\n", name);
	printf("Напишите номер нужного пункта.\n")
	scanf("%d", &yaz);//считывает выбранный пункт//
    switch(yaz){
        case 1:
            angl();
            break;
        case 2:
            nem();
            break;
        default:
        printf("ERROR\n");
    }
	while(yaz=0)//после первого раза, повтор//
		{
		printf("%s, выберите язык.\nДоступны:\n1.Английский язык.\n2.Немецкий язык.\n0.Выход\n", name);
		printf("Напишите номер нужного пункта:\n")
		scanf("%d", yaz);
		switch(yaz){
        case 1:
            angl();
            break;
        case 2:
            nem();
            break;
        case 0:
            exit(0);
        default:
        printf("ERROR\n");
        }
		}
	printf("%s, удачи в освоение иностранных языков.", name);
	return 0;
}