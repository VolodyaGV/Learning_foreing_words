#include "../src/learning.h"
#include "../thirdparty/ctest.h"

// Входные данные
CTEST(choose, normal)
{
    // Given
    const int a = 1;
    // When
    const int result = check(a);
    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(choose, normal_2)
{
    // Given
    const int a = 2;
    // When
    const int result = check(a);
    // Then
    const int expected = 2;
    ASSERT_EQUAL(expected, result);
}

CTEST(choose, normal_3)
{
    // Given
    const int a = 99;
    // When
    const int result = check(a);
    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

// Проверка корректности имени
CTEST(angl, VolodyaGatsuliaVuacheslavovich)
{
    // Given
    const char a[] = "VolodyaGatsuliaVuacheslavovich";
    // When
    const int result = angl_zveta((char*)a);
    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(angl, test_NULL)
{
    // Given
    const char a[] = "VolodyaGatsuliaVuacheslavovich";
    // When
    const int result = angl_zveta(NULL);
    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

// тестирование времени
CTEST(time, min_minus)
{
    // Given
    const double a = -99;
    // When
    const int result = return_min(a);
    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(time, min_normal)
{
    // Given
    const double a = 60;
    // When
    const int result = return_min(a);
    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(time, sec_minus_minus)
{
    // Given
    const double a = -99;
    const double b = -99;
    // When
    const int result = return_sec(a, b);
    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(time, sec_minus)
{
    // Given
    const double a = -99;
    const double b = 99;
    // When
    const int result = return_sec(a, b);
    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(time, sec_normal)
{
    // Given
    const double a = 60;
    const int b = 1;
    // When
    const int result = return_sec(a, b);
    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
