#include <stdio.h>
#include <wchar.h>
#include <locale.h> /*to use setlocale */

int main() {
	setlocale(LC_CTYPE, ""); /* Set the locale to the user's default environment */
	wchar_t str1[50]; /*intialise wide characters */
	wchar_t str2[50];
	fgetws(str1, 50, stdin); /* Read wide character strings */
	fgetws(str2, 50, stdin);
	size_t len1 = wcslen(str1); /* Get the length of wide character string */
	if (len1 > 0 && str1[len1 - 1] == L'\n') {
		str1[len1 - 1] = L'\0';
	}
	size_t len2 = wcslen(str2);
	if (len2 > 0 && str2[len2 - 1] == L'\n') {
		str2[len2 - 1] = L'\0';
	}
	int result = wcscmp(str1, str2);  /* Compare the two wide character strings */
	if (result == 0) {
		wprintf(L"The strings are equal.\n");
	} 
	else if (result < 0) {
		wprintf(L"The first string is less than the second string.\n");
	} 
	else {
		wprintf(L"The first string is greater than the second string.\n");
	}
	return 0;
}

