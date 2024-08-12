static void FUN1(const char *VAR1, ...)
{
va_list VAR2;
int VAR3 = VAR4-1;
char VAR5[256];
char VAR6[256];

if (VAR3 < 0)
return;

FUN2(VAR2, VAR1);
vsnprintf(VAR5, sizeof(VAR5), VAR1, VAR2);
FUN3(VAR2);
snprintf(VAR6, sizeof(VAR6), "",
VAR7[VAR3].VAR8, VAR5);
strncpy(VAR7[VAR3].VAR8,
VAR6,
sizeof(VAR7[VAR3].VAR8));

FUN4(VAR9[VAR3]);
VAR9[VAR3] = FUN5(
VAR7[VAR3].VAR8,
VAR7[VAR3].VAR8);
FUN6(VAR9[VAR3],
&VAR7[VAR3]);
}