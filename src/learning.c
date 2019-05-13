#include "learning.h"
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <strings.h>
#include <time.h>

float nem_lichniy()
{
    {
        char* slovanem[9]
                = {"Ich", "Du", "Er", "Sie", "Es", "Wir", "Ihr", "Sie"};
        char* slovrus[9] = {"Я", "Ты", "Он", "Она", "Оно", "Мы", "Вы", "Они"};
        char* sklon_po_pad_nem_dat[9]
                = {"Mir", "Dir", "Ihm", "Ihr", "Ihm", "Uns", "Euch", "Ihnen"};
        char* sklon_po_pad_rus_dat[9]
                = {"Мне", "Тебе", "Ему", "Ей", "Ему", "Нам", "Вам", "Им"};
        char* sklon_po_pad_nem_akk[9]
                = {"Mich", "Dich", "Ihn", "Sie", "Es", "Uns", "Euch", "Sie"};
        char* sklon_po_pad_rus_akk[9]
                = {"Меня", "Тебя", "Его", "Ее", "Его", "Нас", "Вас", "Их"};
        char vibor[10]; //Для изучения склонения по падежам//
        int i, n = 0, k = 0;
        printf("   Личные местоимения.\n   Личные местоимения — местоимения, "
               "которые указывают на предмет, но не называют его.\n   "
               "Указывают на лиц, участвующих в речи.");
        printf("\v\n              Normativ");
        printf("\n      ------------------------\n");
        for (i = 0; i < 8; i++) {
            printf("      | %-5s\t->\t%-5s|   \n", slovrus[i], slovanem[i]);
        }
        printf("      ------------------------\v\n     Записали и запомнили?\n "
               "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
        getchar();
        system("clear");
        char* mmm[9];
        printf("        Подготовтесь к написанию иностранных слов!\n");
        printf("        Нажмите клавишу \"ENTER\"");
        getchar();
        system("clear");
        printf("Пишите с заглавной буквы!!!\n");
        clock_t start = clock();
        for (i = 0; i < 8; i++) {
            printf("    %s  = ", slovrus[i]);
            mmm[i] = malloc(MAXLEN);
            scanf("%s", mmm[i]);
            printf("Правильный перевод:%s\n", slovanem[i]);
        }
        clock_t stop = clock();
        double elapsed = (double)(stop - start) / CLOCKS_PER_SEC;

        printf("\nВы ввели данные слова:\n");
        for (i = 0; i < 8; i++) {
            printf("%s\t->\tПравильно:%s\t = \tПеревод:%s\n",
                   mmm[i],
                   slovanem[i],
                   slovrus[i]);
        }
        for (i = 0; i < 8; i++) {
            if ((strcmp(mmm[i], slovanem[i])))
                n = n + 1;
            if ((!strcmp(mmm[i], slovanem[i])))
                k = k + 1;
        }
        printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
        printf("Время написания слов: %f min\n", elapsed);
        for (i = 0; i < 8; i++)
            free(mmm[i]);
        printf("    Вы рассмотрели личные местоимения в именительном падеже\n  "
               "  Вы можете изучить склоение личных местоимений в других "
               "падежах\n    Для этого напишите:\"next\", для выхода введите "
               "любой символ\n");
        scanf("%s", vibor);
        system("clear");
        if (!strcmp(vibor, "next")) {
            printf(" В немеком языке существует три падежа:\n Именительный- "
                   "Normativ\n Дательный- Dativ\n Родительный- Akkusativ\n Мы "
                   "с Вами рассмотрели склонение личного местоимения в "
                   "именительном падеже\n Сначала мы рассмотрим Dativ, после "
                   "Akkusativ\n");
            printf("\v              Dativ\n");
            printf("      ------------------------\n");
            for (i = 0; i < 8; i++) {
                printf("      | %-5s\t->\t%-5s|   \n",
                       sklon_po_pad_rus_dat[i],
                       sklon_po_pad_nem_dat[i]);
            }
            printf("      ------------------------\v\n     Записали и "
                   "запомнили?\n     Когда вы будете готовы, нажмите клавишу "
                   "\"ENTER\"\n");
            getchar();
            getchar();
            system("clear");
            printf("        Подготовьтесь к написанию иностранных слов!\n");
            printf("        Нажмите клавишу \"ENTER\"");
            getchar();
            system("clear");
            printf("Пишите с заглавной буквы!!!\n");
            clock_t start1 = clock();
            for (i = 0; i < 8; i++) {
                printf("    %s  = ", sklon_po_pad_rus_dat[i]);
                mmm[i] = malloc(MAXLEN);
                scanf("%s", mmm[i]);
                printf("Правильный перевод:%s\n", sklon_po_pad_nem_dat[i]);
            }
            clock_t stop1 = clock();
            double elapsed1 = (double)(stop1 - start1) / CLOCKS_PER_SEC;
            printf("\nВы ввели данные слова:\n");
            for (i = 0; i < 8; i++) {
                printf("%s\t->\tПравильно:%s\t = \tПеревод:%s\n",
                       mmm[i],
                       sklon_po_pad_nem_dat[i],
                       sklon_po_pad_rus_dat[i]);
            }
            n = 0;
            k = 0;
            for (i = 0; i < 8; i++) {
                if ((strcmp(mmm[i], sklon_po_pad_nem_dat[i])))
                    n = n + 1;
                if ((!strcmp(mmm[i], sklon_po_pad_nem_dat[i])))
                    k = k + 1;
            }
            printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
            printf("Время написания слов: %f min\n", elapsed1);

            for (i = 0; i < 8; i++)
                free(mmm[i]);
            getchar();
            getchar();
            system("clear");
            ///////////////////////////////////////////////////////////////////////////////////
            printf(" Пришло время изучить личные местоимения в склоение "
                   "Akkusativ\n");
            printf("\v              Akkusativ\n      "
                   "------------------------\n");
            for (i = 0; i < 8; i++) {
                printf("      | %-5s\t->\t%-5s|   \n",
                       sklon_po_pad_rus_akk[i],
                       sklon_po_pad_nem_akk[i]);
            }
            printf("      ------------------------\v\n     Записали и "
                   "запомнили?\n     Когда вы будете готовы, нажмите клавишу "
                   "\"ENTER\"\n");
            getchar();
            system("clear");
            printf("        Подготовьтесь к написанию иностранных слов!\n");
            printf("        Нажмите клавишу \"ENTER\"");
            getchar();
            system("clear");
            printf("Пишите с заглавной буквы!!!\n");
            clock_t start2 = clock();
            for (i = 0; i < 8; i++) {
                printf("    %s  = ", sklon_po_pad_rus_akk[i]);
                mmm[i] = malloc(MAXLEN);
                scanf("%s", mmm[i]);
                printf("Правильный перевод:%s\n", sklon_po_pad_nem_akk[i]);
            }
            clock_t stop2 = clock();
            double elapsed2 = (double)(stop2 - start2) / CLOCKS_PER_SEC;
            printf("\nВы ввели данные слова:\n");
            for (i = 0; i < 8; i++) {
                printf("%s\t->\tПравильно:%s\t = \tПеревод:%s\n",
                       mmm[i],
                       sklon_po_pad_nem_akk[i],
                       sklon_po_pad_rus_akk[i]);
            }
            n = 0;
            k = 0;
            for (i = 0; i < 8; i++) {
                if ((strcmp(mmm[i], sklon_po_pad_nem_akk[i])))
                    n = n + 1;
                if ((!strcmp(mmm[i], sklon_po_pad_nem_akk[i])))
                    k = k + 1;
            }
            printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
            printf("Время написания слов: %f min\n", elapsed2);
            for (i = 0; i < 8; i++)
                free(mmm[i]);
        }
    }
}
///функция англицкий язык///
float angl()
{
    int razdel;
    printf("Вы выбрали английский язык.\nВыберите раздел:\n1.Личные "
           "местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и "
           "овощи.\n5.Еда и "
           "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.животные.\n10."
           "Прилагательные.\nНапишите номер нужного пункта:\n");
    scanf("%d", &razdel);
    printf("Отлично, Вы выбрали раздел №%d.\nСперва программа выведит "
           "иностранные слова с переводом.\nПосле ознакомления с программой, "
           "Вы должны будете написать перевод иностранного слова.\n В конце вы "
           "узнаете колличество правильно написанных и неправильно написанных "
           "слов.\n",
           razdel);
    switch (razdel) {
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
    printf("Вы закончили раздел №%d, теперь выберите другой или повторите "
           "пройденный.\n",
           razdel);
    while (razdel = 0) {
        printf("Выберите следующий раздел:\n1.Личные местоимения.\n2.Основные "
               "глаголы\n3.Семья.\n4.Фрукты и овощи.\n5.Еда и "
               "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.животные.\n10."
               "Прилагательные.\n 0.Для выхода\nНапишите номер нужного "
               "пункта:\n");
        scanf("%d", &razdel);
        if (razdel < 0)
            printf("Отлично, Вы выбрали раздел №%d.\n", razdel);
        switch (razdel) {
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
    printf("Вы выбрали немецкий язык.\nВыберите раздел:\n1.Личные "
           "местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и "
           "овощи.\n5.Еда и "
           "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.животные.\n10."
           "Прилагательные.\nНапишите номер нужного пункта:\n");
    scanf("%d", &razdel);
    printf("Отлично, Вы выбрали раздел №%d.\nСперва программа выведит "
           "иностранные слова с переводом.\nПосле ознакомления с программой, "
           "Вы должны будете написать перевод иностранного слова.\n В конце вы "
           "узнаете колличество правильно написанных и неправильно написанных "
           "слов.\n",
           razdel);
    switch (razdel) {
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
    printf("Вы закончили раздел №%d, теперь выберите другой или повторите "
           "пройденный.\n",
           razdel);
    while (razdel = 0) {
        switch (razdel) {
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
