void FUN1(int VAR1, const char *VAR2, const char *VAR3, ...)
{
char VAR4[256];
va_list VAR5;
char *VAR6;

FUN2(VAR5, VAR3);
VAR6 = FUN3(VAR7, VAR4, sizeof(VAR4), VAR3, VAR5);
FUN4(VAR5);

if (!VAR6)
return;

char *VAR8 = NULL;
for (char *VAR9 = FUN5(VAR6, "", &VAR8); VAR9;
VAR9 = FUN5(NULL, "", &VAR8)) {
FUN6(VAR1, "", VAR2, VAR9);
}

if (VAR6 != VAR4)
FUN7(VAR7, VAR6);
}