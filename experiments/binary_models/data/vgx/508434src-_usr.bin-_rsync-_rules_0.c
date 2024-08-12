static void
FUN1(struct VAR1 *VAR2, char *VAR3)
{
size_t VAR4;
char *VAR5;
short VAR6 = 1;


if (*VAR3 == '') {
VAR3++;
VAR2->VAR7 = 1;
}
VAR4 = strlen(VAR3);

if (VAR4 > 1 && VAR3[VAR4 - 1] == '') {
VAR2->VAR8 = 1;
VAR3[VAR4 - 1] = '';
}
if (VAR4 > 4 && strcmp(VAR3 + VAR4 - 4, "
for (VAR5 = VAR3; *VAR5 != ''; VAR5++)
if (*VAR5 == '')
VAR6++;
VAR2->VAR9 = VAR6;


if (VAR6 == 1 && !VAR2->VAR7)
VAR2->VAR10 = 1;

if (strpbrk(VAR3, "") == NULL) {

VAR2->VAR11 = 1;
} else {

if (strstr(VAR3, "") != NULL)
VAR2->VAR9 = -1;
}

VAR2->VAR3 = strdup(VAR3);
if (VAR2->VAR3 == NULL)
FUN2(VAR12, NULL);
}