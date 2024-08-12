static void FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR1;
    char VAR6[2];
    FUN2(VAR5->VAR7, -1, -1);
    FUN3(VAR5->VAR7, 2, 1);
    snprintf(VAR6, 2, "", VAR5->VAR8);
    FUN4(VAR3++, FUN5(VAR6[0], VAR9, VAR10, 1));
    FUN4(VAR3++, FUN5(VAR6[1], VAR9, VAR10, 1));
    FUN6(VAR5->VAR7, 0, 0, 2, 1);
}