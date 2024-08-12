static void
FUN1(const char *VAR1, wchar_t VAR2, int VAR3)
{
charmap_t	VAR4;
VAR5	*VAR6 = NULL;
avl_index_t	VAR7;

VAR4.VAR2 = VAR2;
VAR4.VAR8 = VAR1;


if ((VAR2 != (wchar_t)-1) &&
((FUN2(&VAR9, &VAR4, &VAR7)) == NULL)) {
if ((VAR6 = calloc(1, sizeof (*VAR6))) == NULL) {
FUN3(FUN4(""));
return;
}
VAR6->VAR2 = VAR2;
FUN5(&VAR9, VAR6, VAR7);
}

if (VAR1) {
if (FUN2(&VAR10, &VAR4, &VAR7) != NULL) {
if (VAR3) {
FUN3(FUN4(""));
}
return;
}
if ((VAR6 == NULL) && ((VAR6 = calloc(1, sizeof (*VAR6))) == NULL)) {
FUN3(FUN4(""));
return;
}
VAR6->VAR2 = VAR2;
VAR6->VAR8 = VAR1;

FUN5(&VAR10, VAR6, VAR7);
}
}