FUN1 (int argc, char *argv[])
{
VAR1  *VAR2;
VAR3 *VAR4;
VAR1  *VAR5;
VAR6   *VAR7 = NULL;

if (argc != 2) {
fprintf (VAR8, "", argv[0]);
return 1;
}

VAR2 = FUN2 (argv[1], &VAR7);
if (VAR2 == NULL) {
FUN3 (VAR7 != NULL, 1);

FUN4 ("", argv[1], VAR7->VAR9);
FUN5 (VAR7);
return 1;
}
VAR4 = FUN6 (VAR2, &VAR7);
if (VAR2 == NULL) {
FUN3 (VAR7 != NULL, 1);

FUN4 ("",
"", VAR7->VAR9);
FUN5 (VAR7);
return 1;
}
FUN7 (FUN8 (VAR2));
VAR5 = FUN9  (VAR4, "", VAR10);

if (!FUN10 (VAR5))
return 1;
if (!FUN11 ((VAR1 *) VAR5))
return 1;
if (!FUN11 ((VAR1 *) VAR4))
return 1;
FUN7 (FUN8 (VAR4));
FUN7 (VAR5);

return 0;
}