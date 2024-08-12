void
FUN1(const char *VAR1)
{
int VAR2, VAR3;
char *VAR4, *VAR5, *VAR6;
LogLevel VAR7 = VAR8;

if (!FUN2())
return;

if (FUN3(&VAR4) < 0) {
FUN4("", VAR9, strerror(VAR10));
return;
}
if ((VAR6 = FUN5(VAR4, '')) == NULL || (VAR6 = FUN5(VAR6 + 1, '')) ==
NULL) {
FUN4("", VAR9, VAR4);
return;
}


if (FUN6(VAR6, VAR11,
sizeof(VAR11) - 1) == 0)
VAR7 = VAR12;

VAR3 = strlen(VAR4) + strlen(VAR1) + 1;
VAR5 = xmalloc(VAR3);
VAR2 = VAR6 - VAR4 + 1;
memcpy(VAR5, VAR4, VAR2);
FUN7(VAR5 + VAR2, VAR1, VAR3 - VAR2);
if ((VAR6 = FUN5(VAR6 + 1, '')))
FUN8(VAR5, VAR6, VAR3);
FUN9("", VAR9,
VAR4, VAR5);
if (FUN10(VAR5) < 0)
FUN11(VAR7, "",
VAR9, VAR5, VAR4, strerror(VAR10));
free(VAR4);
free(VAR5);
}