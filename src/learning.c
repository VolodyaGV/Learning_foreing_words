#include "learning.h"
#include <stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<strings.h>
#include<time.h>


float nem_lichniy()
{
	char *slovanem[9]={"Ich", "Du", "Er", "Sie", "Es", "Wir", "Ihr", "Sie"};
	char *slovrus[9]={"Я", "Ты", "Он", "Она", "Оно", "Мы","Вы","Они"};
	int i, n=0, k=0;
    printf("\v");
	for(i=0; i<8; i++){
	printf("      %s\t->\t%s   \n", slovanem[i], slovrus[i]);}
    printf("\v     Записали и запомнили?\nКогда вы будете готовы, нажмите клавишу \"ENTER\"\n");
    getchar();
    system("clear");
    char *mmm[9];
    printf("        Подготовтесь к написанию иностранных слов!\n        Пишите с большой буквы!!!\n");
    clock_t start = clock();
    for(i=0; i<8; i++)
    {
        printf("%s  = ",slovrus[i]);
        mmm[i]= malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    clock_t stop = clock();
    double elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
    
    printf("\nВы ввели данные слова:\n");
    for(i=0; i<8; i++)
    {
        printf("%s\t->\tПравильно:%s\t = \tПеревод:%s\n", mmm[i], slovanem[i], slovrus[i]);
    }
    for(i=0;i<8;i++)
    {
        if((strcmp(mmm[i], slovanem[i])))
        n=n+1;
        if((!strcmp(mmm[i], slovanem[i])))
        k=k+1;
    }
    printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
    printf("Время написания слов: %f sec\n", elapsed);
    for(i=0; i<8; i++)
    free(mmm[i]);
    return 0;
}
///функция англицкий язык///
float angl()
{
	int razdel;
    printf("Вы выбрали английский язык.\nВыберите раздел:\n1.Личные местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и овощи.\n5.Еда и напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.животные.\n10.Прилагательные.\nНапишите номер нужного пункта:\n");
    scanf("%d", &razdel);
    printf("Отлично, Вы выбрали раздел №%d.\nСперва программа выведит иностранные слова с переводом.\nПосле ознакомления с программой, Вы должны будете написать перевод иностранного слова.\n В конце вы узнаете колличество правильно написанных и неправильно написанных слов.\n", razdel);
    switch(razdel){
        case 1:
        angl_lichniy();
        break;
        case 2:
        angl_glagol();
        break;
        case 3:
        angl_semiya();
        break;
        case 4:
        angl_fructoovosh();
        break;
        case 5:
        angl_edainapitok();
        break;
        case 6:
        angl_priroda();
        break;
        case 7:
        angl_zveta();
        break;
        case 8:
        angl_pogoda();
        break;
        case 9:
        angl_zhivotn();
        break;
        case 10:
        angl_prilagat();
        break;
        default:
        printf("Ошибочка\n");

    }
    printf("Вы закончили раздел №%d, теперь выберите другой или повторите пройденный.\n", razdel);
    while(razdel=0)
        {
        printf("Выберите следующий раздел:\n1.Личные местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и овощи.\n5.Еда и напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.животные.\n10.Прилагательные.\n 0.Для выхода\nНапишите номер нужного пункта:\n");
        scanf("%d", &razdel);
        if(razdel<0)
        printf("Отлично, Вы выбрали раздел №%d.\n", razdel);
        switch(razdel){
            case 1:
            angl_lichniy();
            break;
            case 2:
            angl_glagol();
            break;
            case 3:
            angl_semiya();
            break;
            case 4:
            angl_fructoovosh();
            break;
            case 5:
            angl_edainapitok();
            break;
            case 6:
            angl_priroda();
            break;
            case 7:
            angl_zveta();
            break;
            case 8:
            angl_pogoda();
            break;
            case 9:
            angl_zhivotn();
            break;
            case 10:
            angl_prilagat();
            break;
            case 0:
            exit(0);
            break;
            default:
            printf("Ошибочка\n");
        }
    printf("Вот и всё)))\n");    
    }
}
/////функция немецкий язык//////

float nem()
{
	int razdel;
    printf("Вы выбрали немецкий язык.\nВыберите раздел:\n1.Личные местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и овощи.\n5.Еда и напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.животные.\n10.Прилагательные.\nНапишите номер нужного пункта:\n");
    scanf("%d", &razdel);
    printf("Отлично, Вы выбрали раздел №%d.\nСперва программа выведит иностранные слова с переводом.\nПосле ознакомления с программой, Вы должны будете написать перевод иностранного слова.\n В конце вы узнаете колличество правильно написанных и неправильно написанных слов.\n", razdel);
    switch(razdel){
        case 1:
        nem_lichniy();
        break;
        case 2:
        nem_glagol();
        break;
        case 3:
        nem_semiya();
        break;
        case 4:
        nem_fructoovosh();
        break;
        case 5:
        nem_edainapitok();
        break;
        case 6:
        nem_pririda();
        break;
        case 7:
        nem_zveta();
        break;
        case 8:
        nem_pogoda();
        break;
        case 9:
        nem_zhivotn();
        break;
        case 10:
        nem_prilagat();
        break;
        default:
        printf("Ошибочка\n");

    }
    printf("Вы закончили раздел №%d, теперь выберите другой или повторите пройденный.\n", razdel);
    while(razdel=0){
        switch(razdel){
        case 1:
        nem_lichniy();
        break;
        case 2:
        nem_glagol();
        break;
        case 3:
        nem_semiya();
        break;
        case 4:
        nem_fructoovosh();
        break;
        case 5:
        nem_edainapitok();
        break;
        case 6:
        nem_pririda();
        break;
        case 7:
        nem_zveta();
        break;
        case 8:
        nem_pogoda();
        break;
        case 9:
        nem_zhivotn();
        break;
        case 10:
        nem_prilagat();
        break;
        default:
        printf("Ошибочка\n");

    }
        }
    printf("Вот и всё)))\n");    
}    
