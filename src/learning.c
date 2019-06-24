#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <strings.h>
#include <sys/time.h>
#define MAXLEN 256
double wtime()
{
    struct timeval t;
    gettimeofday(&t, NULL);
    return (double)t.tv_sec + (double)t.tv_usec * 1E-6;
}

float angl_zveta(char name[20])
{
    char* slovangl[10] = {"Blue",
                          "Blue",
                          "Red",
                          "Black",
                          "White",
                          "Yellow",
                          "Orange",
                          "Green",
                          "Purple",
                          "Brown"};
    char* slovrus[10] = {"Синий",
                         "Голубой",
                         "Красный",
                         "Черный",
                         "Белый",
                         "Желтый",
                         "Оранжевый",
                         "Зеленный",
                         "Фиолетовый",
                         "Коричневый"};
    int i, n = 0, k = 0;
    printf("\n                     Цвета.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovangl[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovangl[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovangl[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovangl[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float angl_pogoda(char name[20])
{
    char* slovangl[10] = {"Sunny",
                          "Fog",
                          "Rain",
                          "Snow",
                          "Hail",
                          "Heat",
                          "Dampness",
                          "Wind",
                          "Thunderstorm",
                          "Weather"};
    char* slovrus[10] = {"Солнце",
                         "Туман",
                         "Дождь",
                         "Снег",
                         "Град",
                         "Жара",
                         "Сырость",
                         "Ветер",
                         "Гроза",
                         "Погода"};
    int i, n = 0, k = 0;
    printf("\n                     Погода");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovangl[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;

    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovangl[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovangl[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovangl[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float angl_zhivotn(char name[20])
{
    char* slovangl[10] = {"Animals",
                          "Hare",
                          "Elephant",
                          "Dog",
                          "Cat",
                          "Cow",
                          "Pig",
                          "Crocodile",
                          "Mouse",
                          "Sheep"};
    char* slovrus[10] = {"Животные",
                         "Заяц",
                         "Слон",
                         "Собака",
                         "Кошка",
                         "Корова",
                         "Свинья",
                         "Крокодил",
                         "Мышь",
                         "Овца"};
    int i, n = 0, k = 0;
    printf("\n                     Животные");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovangl[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;

    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovangl[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovangl[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovangl[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float angl_prilag(char name[20])
{
    char* slovangl[10] = {"Big",
                          "Nice",
                          "Bad",
                          "Small",
                          "Long",
                          "Fat",
                          "Delicious",
                          "Smart",
                          "Funny",
                          "Sick"};
    char* slovrus[10] = {"Большой",
                         "Красивый",
                         "Плохой",
                         "Маленький",
                         "Длинный",
                         "Толстый",
                         "Вкусный",
                         "Умный",
                         "Смешной",
                         "Больной"};
    int i, n = 0, k = 0;
    printf("\n                     Прилательные-самостоятельная часть речи, "
           "обозначающая непроцессуальный признак предмета");
    printf("\n                     Прилагательные.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovangl[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;

    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovangl[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovangl[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovangl[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float nem_prilagat(char name[20])
{
    char* slovanem[10] = {"Gross",
                          "Shon",
                          "Schlecht",
                          "Klein",
                          "Lang",
                          "Dick",
                          "Lecker",
                          "Klug",
                          "Lustig",
                          "Krank"};
    char* slovrus[10] = {"Большой",
                         "Красивый",
                         "Плохой",
                         "Маленький",
                         "Длинный",
                         "Толстый",
                         "Вкусный",
                         "Умный",
                         "Смешной",
                         "Больной"};
    int i, n = 0, k = 0;
    printf("\n                     Прилательные-самостоятельная часть речи, "
           "обозначающая непроцессуальный признак предмета");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovanem[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovanem[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovanem[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovanem[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float nem_zhivotn(char name[20])
{
    char* slovanem[10] = {"Tiere",
                          "Hase",
                          "Elefant",
                          "Hund",
                          "Katze",
                          "Kuh",
                          "Schwein",
                          "Krokodil",
                          "Maus",
                          "Schaf"};
    char* slovrus[10] = {"Животные",
                         "Заяц",
                         "Слон",
                         "Собака",
                         "Кошка",
                         "Корова",
                         "Свинья",
                         "Крокодил",
                         "Мышь",
                         "Овца"};
    int i, n = 0, k = 0;
    printf("\n                     Животные.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovanem[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovanem[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovanem[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovanem[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float angl_lichniy(char name[20])
{
    char* slovangl[8] = {"I", "You", "He", "She", "It", "We", "You", "They"};
    char* slovrus[8] = {"Я", "Ты", "Он", "Она", "Оно", "Мы", "Вы", "Они"};
    int i, n = 0, k = 0;
    printf("   Личные местоимения.\n   Личные местоимения — местоимения, "
           "которые указывают на предмет, но не называют его.\n   "
           "Указывают на лиц, участвующих в речи\n");
    printf("\n                     Личные местоимения.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 8; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");

    char* mmm[8];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 8; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovangl[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;

    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 8; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovangl[i],
               slovrus[i]);
    }
    for (i = 0; i < 8; i++) {
        if ((strcmp(mmm[i], slovangl[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovangl[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 8; i++)
        free(mmm[i]);
    return 0;
}

float nem_pogoda(char name[20])
{
    char* slovanem[10] = {"Sonne",
                          "Nebel",
                          "Regen",
                          "Schnee",
                          "Hagel",
                          "Hitze",
                          "Kalte",
                          "Wind",
                          "Gewitter",
                          "Wetter"};
    char* slovrus[10] = {"Солнце",
                         "Туман",
                         "Дождь",
                         "Снег",
                         "Град",
                         "Жара",
                         "Сырость",
                         "Ветер",
                         "Гроза",
                         "Погода"};
    int i, n = 0, k = 0;
    printf("\n                     Погода.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovanem[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovanem[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovanem[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovanem[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float angl_glagol(char name[20])
{
    char* slovangl[11] = {"Eat",
                          "Sleep",
                          "Read",
                          "Live",
                          "Want",
                          "Can",
                          "Study",
                          "Work",
                          "Walk",
                          "Think"};
    char* slovrus[11] = {"Кушать",
                         "Спать",
                         "Читать",
                         "Жить",
                         "Хотеть",
                         "Уметь",
                         "Учиться",
                         "Работать",
                         "Ходить",
                         "Думать"};
    int i, n = 0, k = 0;
    printf("\n Глаголы- самостоятельная часть речи, которая обозначает "
           "состояние или действие предмета.\n В данном разделе глаголы будут "
           "представлены в ИНФИНИТИВЕ.\n");
    printf("\n                     Глаголы.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 11; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovangl[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;

    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovangl[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovangl[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovangl[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float nem_priroda(char name[20])
{
    char* slovanem[10] = {"Natur",
                          "Baum",
                          "Gras",
                          "Luft",
                          "Stein",
                          "Berg",
                          "Blume",
                          "Wald",
                          "Land",
                          "Wasser"};
    char* slovrus[10] = {"Природа",
                         "Дерево",
                         "Трава",
                         "Воздух",
                         "Камень",
                         "Гора",
                         "Цветок",
                         "Лес",
                         "Земля",
                         "Река"};
    int i, n = 0, k = 0;
    printf("\n                     Природа.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovanem[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovanem[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovanem[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovanem[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float angl_semiya(char name[20])
{
    char* slovangl[11] = {"Mother",
                          "Father",
                          "Son",
                          "Daughter",
                          "Child",
                          "Grandmother",
                          "Grandfather",
                          "Aunt",
                          "Uncle",
                          "Wife",
                          "Husband"};
    char* slovrus[11] = {"Мама",
                         "Папа",
                         "Сын",
                         "Дочь",
                         "Ребёнок",
                         "Бабушка",
                         "Дедушка",
                         "Тётя",
                         "Дядя",
                         "Жена",
                         "Муж"};
    int i, n = 0, k = 0;
    printf("   Семья — малая социальная группа или ячейка общества. Семья "
           "принадлежит к важнейшим общественным ценностям.\n"
           "Семья — это сообщество, основанное на браке супругов (отца, "
           "матери) и их холостых детей (собственных и усыновленных)"
           ", связанных духовно, общностью быта и взаимной моральной "
           "ответственностью.\n");
    printf("\n                     Семья.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 11; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[11];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 11; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovangl[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;

    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 11; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovangl[i],
               slovrus[i]);
    }
    for (i = 0; i < 11; i++) {
        if ((strcmp(mmm[i], slovangl[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovangl[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 11; i++)
        free(mmm[i]);
    return 0;
}

float nem_edainapitok(char name[20])
{
    char* slovanem[10] = {"Suppe",
                          "Brod",
                          "Milch",
                          "Saft",
                          "Butter",
                          "Brei",
                          "Kuchenr",
                          "Kase",
                          "Tee",
                          "Wasser"};
    char* slovrus[10] = {"Суп",
                         "Хлеб",
                         "Молоко",
                         "Сок",
                         "Масло",
                         "Каша",
                         "Пирог",
                         "Сыр",
                         "Чай",
                         "Вода"};
    int i, n = 0, k = 0;
    printf("\n                     Еда и напитки.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovanem[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovanem[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovanem[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovanem[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float angl_fructoovosh(char name[20])
{
    char* slovangl[10] = {"Apple",
                          "Pumpkin",
                          "Tomato",
                          "Potato",
                          "Orange",
                          "Banana",
                          "Cucumber",
                          "Pepper",
                          "Zucchini",
                          "Pineapple"};
    char* slovrus[10] = {"Яблоко",
                         "Тыква",
                         "Помидор",
                         "Картофель",
                         "Апельсин",
                         "Банан",
                         "Огурец",
                         "Перец",
                         "Кабачок",
                         "Ананас"};
    int i, n = 0, k = 0;
    printf("\n                     Фрукты и овощи.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovangl[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;

    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovangl[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovangl[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovangl[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float nem_semiya(char name[20])
{
    char* slovanem[10] = {"Vater",
                          "Mutter",
                          "Eltern",
                          "Kind",
                          "Kinder",
                          "Sohn",
                          "Tochter",
                          "Oma",
                          "Opa",
                          "Familie"};
    char* slovrus[10] = {"Отец",
                         "Мать",
                         "Родители",
                         "Ребенок",
                         "Дети",
                         "Сын",
                         "Дочь",
                         "Бабушка",
                         "Дедушка",
                         "Семья"};
    int i, n = 0, k = 0;
    printf("\n                     Семья.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovanem[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovanem[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovanem[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovanem[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float nem_zveta(char name[20])
{
    char* slovanem[10] = {"Blau",
                          "Hellblau",
                          "Rot",
                          "Schwarz",
                          "Weiss",
                          "Gelb",
                          "Orange",
                          "Grun",
                          "Violett",
                          "Braun"};
    char* slovrus[10] = {"Синий",
                         "Голубой",
                         "Красный",
                         "Черный",
                         "Белый",
                         "Желтый",
                         "Оранжевый",
                         "Зеленный",
                         "Фиолетовый",
                         "Коричневый"};
    int i, n = 0, k = 0;
    printf("\n                     Цвета.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovanem[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovanem[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovanem[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovanem[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float angl_edainapitok(char name[20])
{
    char* slovangl[11] = {"Juice",
                          "Porridge",
                          "Soup",
                          "Compote",
                          "Kisselt",
                          "Yogurt",
                          "Cottage cheese",
                          "Stew",
                          "Cake",
                          "Candies",
                          "Steak"};
    char* slovrus[11] = {"Сок",
                         "Каша",
                         "Суп",
                         "Компот",
                         "Кисель",
                         "Йогурт",
                         "Творог",
                         "Рагу",
                         "Торт",
                         "Конфеты",
                         "Стейк"};
    int i, n = 0, k = 0;
    printf("\n                     Пища.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 11; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[11];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 11; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovangl[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;

    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 11; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovangl[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovangl[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovangl[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 11; i++)
        free(mmm[i]);
    return 0;
}

float nem_fructoovosh(char name[20])
{
    char* slovanem[10] = {"Apfel",
                          "Kurbis",
                          "Tomaten",
                          "Kartoffel",
                          "Orange",
                          "Bananen",
                          "Gurken",
                          "Preffer",
                          "Melonenkurbis",
                          "Ananas"};
    char* slovrus[10] = {"Яблоко",
                         "Тыква",
                         "Томат",
                         "Картофель",
                         "Апельсин",
                         "Банан",
                         "Огурец",
                         "Перец",
                         "Кабачок",
                         "Ананас"};
    int i, n = 0, k = 0;
    printf("\n Овощи и фрукты.\n");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovanem[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovanem[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovanem[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovanem[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float angl_priroda(char name[20])
{
    char* slovangl[12] = {"Tree",
                          "Grass",
                          "Water",
                          "Rock",
                          "Mountain",
                          "Forest",
                          "Flower",
                          "Snowflake",
                          "Sand",
                          "Sheet",
                          "Nature",
                          "River"};
    char* slovrus[12] = {"Дерево",
                         "Трава",
                         "Вода",
                         "Камень",
                         "Гора",
                         "Лес",
                         "Цветок",
                         "Снежинка",
                         "Песок",
                         "Лист",
                         "Природа",
                         "Река"};
    int i, n = 0, k = 0;
    printf("\n                     Природны.");
    printf("\v");
    printf("\n      ----------------------------------------\n");
    for (i = 0; i < 12; i++) {
        printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
    }
    printf("      ----------------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[12];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 12; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovangl[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;

    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 12; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovangl[i],
               slovrus[i]);
    }
    for (i = 0; i < 12; i++) {
        if ((strcmp(mmm[i], slovangl[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovangl[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 12; i++)
        free(mmm[i]);
    return 0;
}

float nem_glagol(char name[20])
{
    char* slovanem[10] = {"Leben",
                          "Schlafen",
                          "Lesen",
                          "Essen",
                          "Arbeiten",
                          "Wollen",
                          "Konnen",
                          "Lernen",
                          "Gehen",
                          "Denken"};
    char* slovrus[10] = {"Жить",
                         "Спать",
                         "Читать",
                         "Кушать",
                         "Работать",
                         "Хотеть",
                         "Уметь",
                         "Учиться",
                         "Ходить",
                         "Думать"};
    int i, n = 0, k = 0;
    printf("\n Глаголы- самостоятельная часть речи, которая обозначает "
           "состояние или действие предмета.\n В данном разделе глаголы будут "
           "представлены в ИНФИНИТИВЕ.\n");
    printf("\v");
    printf("\n      -----------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("      |%-8s     \t---> \t%-8s|   \n", slovrus[i], slovanem[i]);
    }
    printf("      -----------------------------------\v\n     Записали и "
           "запомнили?\n "
           "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
    getchar();
    getchar();
    system("clear");
    char* mmm[10];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 10; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 10; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
               mmm[i],
               slovanem[i],
               slovrus[i]);
    }
    for (i = 0; i < 10; i++) {
        if ((strcmp(mmm[i], slovanem[i])))
            n = n + 1;
        if ((!strcmp(mmm[i], slovanem[i])))
            k = k + 1;
    }
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 10; i++)
        free(mmm[i]);
    return 0;
}

float nem_lichniy(char name[20])
{
    char* slovanem[8] = {"Ich", "Du", "Er", "Sie", "Es", "Wir", "Ihr", "Sie"};
    char* slovrus[8] = {"Я", "Ты", "Он", "Она", "Оно", "Мы", "Вы", "Они"};
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
    getchar();
    system("clear");
    char* mmm[8];
    printf("        Подготовтесь к написанию иностранных слов!\n");
    printf("        Нажмите клавишу \"ENTER\"");
    getchar();
    system("clear");
    printf("Пишите с заглавной буквы!!!\n");
    double t1, t2;
    t1 = wtime();
    for (i = 0; i < 8; i++) {
        printf("    %s  = ", slovrus[i]);
        mmm[i] = malloc(MAXLEN);
        scanf("%s", mmm[i]);
        printf("Правильный перевод:%s\n", slovanem[i]);
    }
    t2 = wtime();
    double tt = t2 - t1;
    int min, sec;
    min = tt / 60;
    sec = tt - min * 60;
    printf("\nВы ввели данные слова:\n");
    for (i = 0; i < 8; i++) {
        printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n",
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
    printf("Итак, %s, вот ваш результат:\nВерных слов:%d\nНеверные слова:%d\n",
           name,
           k,
           n);
    printf("Минуты %d\nСекунды %2.0d \n", min, sec);
    for (i = 0; i < 8; i++)
        free(mmm[i]);
    return 0;
}
///функция англицкий язык///
float angl(char name[20])
{
    int razdel;
    printf("%s, выберите раздел:\n1.Личные местоимения.\n2.Основные "
           "глаголы\n3.Семья.\n4.Фрукты и "
           "овощи.\n5.Еда и "
           "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.Животные.\n10."
           "Прилагательные.\n(напишите 0 для выхода)\nЕСЛИ УКАЖЕТЕ НОМЕР, "
           "КОТОРОГО НЕТ В СПИСКЕ "
           "- ПРОГРАММА ЗАКОНЧИТ СВОЮ РАБОТУ\nНапишите номер нужного "
           "пункта:\n",
           name);
    scanf("%d", &razdel);
    if (razdel == 0) {
        printf("Вот и всё)))\n");
        return 0;
    }
    if (razdel != 0 && razdel != 1 && razdel != 2 && razdel != 3 && razdel != 4
        && razdel != 5 && razdel != 6 && razdel != 7 && razdel != 8
        && razdel != 9 && razdel != 10) {
        return 0;
    }
    printf("Отлично, Вы выбрали раздел №%d.\nСперва программа выведит "
           "иностранные слова с переводом.\nПосле ознакомления с программой, "
           "Вы должны будете написать перевод иностранного слова.\n В конце вы "
           "узнаете колличество правильно написанных и неправильно написанных "
           "слов.\n",
           razdel);
    switch (razdel) {
    case 1:
        angl_lichniy(name);
        break;
    case 2:
        angl_glagol(name);
        break;
    case 3:
        angl_semiya(name);
        break;
    case 4:
        angl_fructoovosh(name);
        break;
    case 5:
        angl_edainapitok(name);
        break;
    case 6:
        angl_priroda(name);
        break;
    case 7:
        angl_zveta(name);
        break;
    case 8:
        angl_pogoda(name);
        break;
    case 9:
        angl_zhivotn(name);
        break;
    case 10:
        angl_prilag(name);
        break;
    default:
        printf("Ошибочка\n");
        break;
    }
    printf("Вы закончили раздел №%d, теперь выберите другой или закончите.\n",
           razdel);
    angl(name);
    return 0;
}
/////функция немецкий язык//////
float nem(char name[20])
{
    int razdel;
    printf("%s, выберите раздел:\n1.Личные местоимения.\n2.Основные "
           "глаголы\n3.Семья.\n4.Фрукты и "
           "овощи.\n5.Еда и "
           "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.Животные.\n10."
           "Прилагательные.\n(напишите 0 для выхода)\nЕСЛИ УКАЖЕТЕ НОМЕР, "
           "КОТОРОГО НЕТ В СПИСКЕ "
           "- ПРОГРАММА ЗАКОНЧИТ СВОЮ РАБОТУ\nНапишите номер нужного "
           "пункта:\n",
           name);
    scanf("%d", &razdel);
    if (razdel == 0) {
        printf("Вот и всё)))\n");
        return 0;
    }
    if (razdel != 0 && razdel != 1 && razdel != 2 && razdel != 3 && razdel != 4
        && razdel != 5 && razdel != 6 && razdel != 7 && razdel != 8
        && razdel != 9 && razdel != 10) {
        return 0;
    }
    printf("Отлично, Вы выбрали раздел №%d.\nСперва программа выведит "
           "иностранные слова с переводом.\nПосле ознакомления с программой, "
           "Вы должны будете написать перевод иностранного слова.\n В конце вы "
           "узнаете колличество правильно написанных и неправильно написанных "
           "слов.\n",
           razdel);
    switch (razdel) {
    case 1:
        nem_lichniy(name);
        break;
    case 2:
        nem_glagol(name);
        break;
    case 3:
        nem_semiya(name);
        break;
    case 4:
        nem_fructoovosh(name);
        break;
    case 5:
        nem_edainapitok(name);
        break;
    case 6:
        nem_priroda(name);
        break;
    case 7:
        nem_zveta(name);
        break;
    case 8:
        nem_pogoda(name);
        break;
    case 9:
        nem_zhivotn(name);
        break;
    case 10:
        nem_prilagat(name);
        break;
    default:
        printf("Ошибочка\n");
        break;
    }
    printf("Вы закончили раздел №%d, теперь выберите другой или закончите.\n",
           razdel);
    nem(name);
    return 0;
}
