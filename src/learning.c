#include "learning.h"
#include <stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<strings.h>

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
        angl_pririda();
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
    while(razdel=0){
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
        angl_pririda();
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
        }
    printf("Вот и всё)))\n");    
}    
