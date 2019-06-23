#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <strings.h>
#include <sys/time.h>
#define MAXLEN 256
double wtime() {
	struct timeval t;
	gettimeofday(&t, NULL);
	return (double)t.tv_sec + (double)t.tv_usec * 1E-6;
}

float angl_zveta() {
  char *slovangl[10] = {"Blue",   "Blue",   "Red",   "Black",  "White",
                        "Yellow", "Orange", "Green", "Purple", "Brown"};
  char *slovrus[10] = {"Синий",      "Голубой",   "Красный",   "Черный",
                       "Белый",      "Желтый",    "Оранжевый", "Зеленный",
                       "Фиолетовый", "Коричневый"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovangl[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovangl[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovangl[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovangl[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float angl_pogoda() {
  char *slovangl[10] = {"Sunny", "Fog",      "Rain", "Snow",         "Hail",
                        "Heat",  "Dampness", "Wind", "Thunderstorm", "Weather"};
  char *slovrus[10] = {"Солнце", "Туман",   "Дождь", "Снег",  "Град",
                       "Жара",   "Сырость", "Ветер", "Гроза", "Погода"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime();
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovangl[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;

  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovangl[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovangl[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovangl[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float angl_zhivotn() {
  char *slovangl[10] = {"Animals", "Hare", "Elephant",  "Dog",   "Cat",
                        "Cow",     "Pig",  "Crocodile", "Mouse", "Sheep"};
  char *slovrus[10] = {"Животные", "Заяц",   "Слон",     "Собака", "Кошка",
                       "Корова",   "Свинья", "Крокодил", "Мышь",   "Овца"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime();
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovangl[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;

  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovangl[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovangl[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovangl[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float angl_prilag() {
  char *slovangl[10] = {"Big",   "Nice",      "Bad",   "Small", "Long",
                        "Fat", "Delicious", "Smart", "Funny", "Sick"};
  char *slovrus[10] = {"Большой", "Красивый", "Плохой", "Маленький", "Длинный",
                       "Толстый", "Вкусный",  "Умный",  "Смешной",   "Больной"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime();
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovangl[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;

  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovangl[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovangl[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovangl[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float nem_prilagat() {
  char *slovanem[10] = {"Gross", "Shon",   "Schlecht", "Klein", "Lang",
                        "Dick",  "Lecker", "Klug",     "Lustig", "Krank"};
  char *slovrus[10] = {"Большой", "Красивый", "Плохой", "Маленький", "Длинный",
                       "Толстый", "Вкусный",  "Умный",  "Смешной",   "Больной"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovanem[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovanem[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovanem[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovanem[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float nem_zhivotn() {
  char *slovanem[10] = {"Tiere", "Hase",    "Elefant",  "Hund", "Katze",
                        "Kuh",   "Schwein", "Krokodil", "Maus", "Schaf"};
  char *slovrus[10] = {"Животные", "Заяц",   "Слон",     "Собака", "Кошка",
                       "Корова",   "Свинья", "Крокодил", "Мышь",   "Овца"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovanem[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovanem[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovanem[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovanem[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float angl_lichniy() {

  char *slovangl[9] = {"I", "You", "He", "She", "It", "We", "You", "They"};
  char *slovrus[9] = {"Я", "Ты", "Он", "Она", "Оно", "Мы", "Вы", "Они"};
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

  char *mmm[8];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime();
  for (i = 0; i < 8; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovangl[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;

  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 8; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovangl[i], slovrus[i]);
  }
  for (i = 0; i < 8; i++) {
    if ((strcmp(mmm[i], slovangl[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovangl[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 8; i++)
    free(mmm[i]);
  return 0;
}

float nem_pogoda() {
  char *slovanem[10] = {"Sonne", "Nebel", "Regen", "Schnee",   "Hagel",
                        "Hitze", "Kalte", "Wind",  "Gewitter", "Wetter"};
  char *slovrus[10] = {"Солнце", "Туман",   "Дождь", "Снег",  "Град",
                       "Жара",   "Сырость", "Ветер", "Гроза", "Погода"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovanem[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovanem[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovanem[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovanem[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float angl_glagol() {
  char *slovangl[11] = {"Eat", "Sleep", "Read", "Live", "Want",
                        "Can", "Study", "Work", "Walk", "Think"};
  char *slovrus[11] = {"Кушать", "Спать",   "Читать",   "Жить",   "Хотеть",
                       "Уметь",  "Учиться", "Работать", "Ходить", "Думать"};
  int i, n = 0, k = 0;
  printf("\n Глаголы- самостоятельная часть речи, которая обозначает "
         "состояние или действие предмета.\n В данном разделе глаголы будут "
         "представлены в ИНФИНИТИВЕ.\n");
  printf("\n                     Глаголы.");
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime();
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovangl[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;

  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovangl[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovangl[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovangl[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float nem_priroda() {
  char *slovanem[10] = {"Natur", "Baum",  "Gras", "Luft", "Stein",
                        "Berg",  "Blume", "Wald", "Land", "Wasser"};
  char *slovrus[10] = {"Природа", "Дерево", "Трава", "Воздух", "Камень",
                       "Гора",    "Цветок", "Лес",   "Земля",  "Река"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovanem[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovanem[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovanem[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovanem[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float angl_semiya() {
  char *slovangl[11] = {"Mother", "Father",      "Son",         "Daughter",
                        "Child",  "Grandmother", "Grandfather", "Aunt",
                        "Uncle",  "Wife",        "Husband"};
  char *slovrus[11] = {"Мама",    "Папа", "Сын",  "Дочь", "Ребёнок", "Бабушка",
                       "Дедушка", "Тётя", "Дядя", "Жена", "Муж"};
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
  for (i = 0; i < 10; i++) {
    printf("      |%-8s     \t---> \t%-13s|   \n", slovrus[i], slovangl[i]);
  }
  printf("      ----------------------------------------\v\n     Записали и "
         "запомнили?\n "
         "    Когда вы будете готовы, нажмите клавишу \"ENTER\"");
  getchar();
  getchar();
  system("clear");
  char *mmm[11];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime();
  for (i = 0; i < 11; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovangl[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;

  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 11; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovangl[i], slovrus[i]);
  }
  for (i = 0; i < 11; i++) {
    if ((strcmp(mmm[i], slovangl[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovangl[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 11; i++)
    free(mmm[i]);
  return 0;
}

float nem_edainapitok() {
  char *slovanem[10] = {"Suppe", "Brod",    "Milch", "Saft", "Butter",
                        "Brei",  "Kuchenr", "Kase",  "Tee",  "Wasser"};
  char *slovrus[10] = {"Суп",  "Хлеб",  "Молоко", "Сок", "Масло",
                       "Каша", "Пирог", "Сыр",    "Чай", "Вода"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovanem[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovanem[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovanem[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovanem[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float angl_fructoovosh() {
  char *slovangl[10] = {"Apple",    "Pumpkin",  "Tomato",   "Potato",
                        "Orange",   "Banana",   "Cucumber", "Pepper",
                        "Zucchini", "Pineapple"};
  char *slovrus[10] = {"Яблоко", "Тыква",  "Помидор", "Картофель", "Апельсин",
                       "Банан",  "Огурец", "Перец",   "Кабачок",   "Ананас"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime();
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovangl[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;

  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovangl[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovangl[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovangl[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float nem_semiya() {
  char *slovanem[10] = {"Vater", "Mutter",  "Eltern", "Kind", "Kinder",
                        "Sohn",  "Tochter", "Oma",    "Opa",  "Familie"};
  char *slovrus[10] = {"Отец", "Мать", "Родители", "Ребенок", "Дети",
                       "Сын",  "Дочь", "Бабушка",  "Дедушка", "Семья"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovanem[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovanem[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovanem[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovanem[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float nem_zveta() {
  char *slovanem[10] = {"Blau", "Hellblau", "Rot",  "Schwarz", "Weiss",
                        "Gelb", "Orange",   "Grun", "Violett", "Braun"};
  char *slovrus[10] = {"Синий",      "Голубой",   "Красный",   "Черный",
                       "Белый",      "Желтый",    "Оранжевый", "Зеленный",
                       "Фиолетовый", "Коричневый"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovanem[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovanem[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovanem[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovanem[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float angl_edainapitok() {
  char *slovangl[11] = {"Juice",   "Porridge", "Soup",           "Compote",
                        "Kisselt", "Yogurt",   "Cottage cheese", "Stew",
                        "Cake",    "Candies",  "Steak"};
  char *slovrus[11] = {"Сок",    "Каша", "Суп",  "Компот",  "Кисель", "Йогурт",
                       "Творог", "Рагу", "Торт", "Конфеты", "Стейк"};
  int i, n = 0, k = 0;
  printf("\n                     Пища.");
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
  char *mmm[11];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime();
  for (i = 0; i < 11; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovangl[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;

  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 11; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovangl[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovangl[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovangl[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 11; i++)
    free(mmm[i]);
  return 0;
}

float nem_fructoovosh() {
  char *slovanem[10] = {"Apfel",         "Kurbis",  "Tomaten", "Kartoffel",
                        "Orange",        "Bananen", "Gurken",  "Preffer",
                        "Melonenkurbis", "Ananas"};
  char *slovrus[10] = {"Яблоко", "Тыква",  "Томат", "Картофель", "Апельсин",
                       "Банан",  "Огурец", "Перец", "Кабачок",   "Ананас"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovanem[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovanem[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovanem[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovanem[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float angl_priroda() {
  char *slovangl[12] = {"Tree",     "Grass",  "Water",  "Rock",
                        "Mountain", "Forest", "Flower", "Snowflake",
                        "Sand",     "Sheet",  "Nature", "River"};
  char *slovrus[12] = {"Дерево", "Трава", "Вода",    "Камень",
                       "Гора",   "Лес",   "Цветок",  "Снежинка",
                       "Песок",  "Лист",  "Природа", "Река"};
  int i, n = 0, k = 0;
  printf("\n                     Природны.");
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
  char *mmm[12];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime();
  for (i = 0; i < 12; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovangl[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;

  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 12; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovangl[i], slovrus[i]);
  }
  for (i = 0; i < 12; i++) {
    if ((strcmp(mmm[i], slovangl[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovangl[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Время написания:\nМинуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 12; i++)
    free(mmm[i]);
  return 0;
}

float nem_glagol() {
  char *slovanem[10] = {"Leben",  "Schlafen", "Lesen",  "Essen", "Arbeiten",
                        "Wollen", "Konnen",   "Lernen", "Gehen", "Denken"};
  char *slovrus[10] = {"Жить",   "Спать", "Читать",  "Кушать", "Работать",
                       "Хотеть", "Уметь", "Учиться", "Ходить", "Думать"};
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
  char *mmm[10];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 10; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovanem[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 10; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovanem[i], slovrus[i]);
  }
  for (i = 0; i < 10; i++) {
    if ((strcmp(mmm[i], slovanem[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovanem[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 10; i++)
    free(mmm[i]);
  return 0;
}

float nem_lichniy() {
  char *slovanem[9] = {"Ich", "Du", "Er", "Sie", "Es", "Wir", "Ihr", "Sie"};
  char *slovrus[9] = {"Я", "Ты", "Он", "Она", "Оно", "Мы", "Вы", "Они"};
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
  char *mmm[8];
  printf("        Подготовтесь к написанию иностранных слов!\n");
  printf("        Нажмите клавишу \"ENTER\"");
  getchar();
  system("clear");
  printf("Пишите с заглавной буквы!!!\n");
  double t1,t2;
  t1 = wtime(); 
  for (i = 0; i < 8; i++) {
    printf("    %s  = ", slovrus[i]);
    mmm[i] = malloc(MAXLEN);
    scanf("%s", mmm[i]);
    printf("Правильный перевод:%s\n", slovanem[i]);
  }
  t2 = wtime();
  double tt = t2-t1;
  int min, sec;
  min=tt/60;
  sec=tt-min*60;
  printf("\nВы ввели данные слова:\n");
  for (i = 0; i < 8; i++) {
    printf("%-8s\t->\tПравильно:%-8s\t = \tПеревод:%-10s\n", mmm[i],
           slovanem[i], slovrus[i]);
  }
  for (i = 0; i < 8; i++) {
    if ((strcmp(mmm[i], slovanem[i])))
      n = n + 1;
    if ((!strcmp(mmm[i], slovanem[i])))
      k = k + 1;
  }
  printf("Верных слов:%d\nНеверные слова:%d\n", k, n);
  printf("Минуты %d\nСекунды %2.0d \n", min, sec);
  for (i = 0; i < 8; i++)
    free(mmm[i]);
  return 0;
}
///функция англицкий язык///
void ANGL () {
    printf("Вы выбрали английский язык.\nВыберите раздел:\n1.Личные "
         "местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и "
         "овощи.\n5.Еда и "
         "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.Животные.\n10."
         "Прилагательные.\nНапишите номер нужного пункта:\n");
}

float angl() {
  int razdel;
  /*printf("Вы выбрали английский язык.\nВыберите раздел:\n1.Личные "
         "местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и "
         "овощи.\n5.Еда и "
         "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.Животные.\n10."
         "Прилагательные.\nНапишите номер нужного пункта:\n");*/
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
    angl_prilag();
    break;
  default:
    printf("Ошибочка\n");
    break;
  }
  printf("Вы закончили раздел №%d, теперь выберите другой или повторите "
         "пройденный.\n",
         razdel);
  printf("Выберите раздел:\n1.Личные "
         "местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и "
         "овощи.\n5.Еда и "
         "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.Животные.\n10."
         "Прилагательные.\n(напишите 0 для выхода)\nНапишите номер нужного "
         "пункта:\n");
     //scanf("%d", &razdel);
    if (razdel>0) {
     angl();
 }
  /*while (razdel > 0) {
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
      angl_prilag();
      break;
    default:
      printf("Ошибочка\n");
      break;
    }
  }*/
  else printf("Вот и всё)))\n");
  return 0;
}
/////функция немецкий язык//////
void NEM () {
  printf("Вы выбрали немецкий язык.\nВыберите раздел:\n1.Личные "
         "местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и "
         "овощи.\n5.Еда и "
         "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.Животные.\n10."
         "Прилагательные.\nНапишите номер нужного пункта:\n");
}

float nem() {
  int razdel;
  /*printf("Вы выбрали английский язык.\nВыберите раздел:\n1.Личные "
         "местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и "
         "овощи.\n5.Еда и "
         "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.Животные.\n10."
         "Прилагательные.\nНапишите номер нужного пункта:\n");*/
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
    nem_priroda();
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
    break;
  }
  printf("Вы закончили раздел №%d, теперь выберите другой или повторите "
         "пройденный.\n",
         razdel);
  printf("Выберите раздел:\n1.Личные "
         "местоимения.\n2.Основные глаголы\n3.Семья.\n4.Фрукты и "
         "овощи.\n5.Еда и "
         "напитки.\n6.Природа.\n7.Цвета.\n8.Погода.\n9.Животные.\n10."
         "Прилагательные.\n(напишите 0 для выхода)\nНапишите номер нужного "
         "пункта:\n");
     //scanf("%d", &razdel);
    if (razdel>0) {
     nem();
 }
  /*while (razdel > 0) {
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
      angl_prilag();
      break;
    default:
      printf("Ошибочка\n");
      break;
    }
  }*/
  else printf("Вот и всё)))\n");
  return 0;
}

