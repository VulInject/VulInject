static void
FUN1(const char *VAR1, const char *VAR2)
{
VAR3	   *VAR4,
*VAR5;
StringInfoData VAR6;

VAR4 = fopen(VAR1, "");
if (!VAR4)
{
fprintf(VAR7, "", VAR1);
FUN2(2);
}
VAR5 = fopen(VAR2, "");
if (!VAR5)
{
fprintf(VAR7, "", VAR2);
FUN2(2);
}

FUN3(&VAR6);

while (FUN4(VAR4, &VAR6))
{

if (strstr(VAR6.VAR8, "") == VAR6.VAR8)
{
char	   *VAR9 = strchr(VAR6.VAR8, '');
int			VAR10 = 1;

while (*VAR9 && (*(VAR9 + VAR10) == '' || strchr(VAR9 + VAR10, '') != NULL))
{
VAR10++;
}

if (VAR10 > 1)
{
memmove(VAR9 + 1, VAR9 + VAR10, strlen(VAR9 + VAR10) + 1);

}
}
fputs(VAR6.VAR8, VAR5);
}

FUN5(VAR6.VAR8);
fclose(VAR4);
fclose(VAR5);
}