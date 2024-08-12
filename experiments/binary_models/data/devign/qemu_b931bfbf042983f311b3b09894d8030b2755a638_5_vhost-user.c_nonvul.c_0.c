static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR1 *VAR8;
    VAR9 *VAR10;
    int VAR11;
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
    {
        VAR8 = FUN2(&VAR12, VAR2, VAR3, VAR4);
        snprintf(VAR8->VAR13, sizeof(VAR8->VAR13), "", VAR11, VAR6->VAR14);
        VAR8->VAR15 = 1;
        VAR8->VAR16 = VAR11;
        VAR10 = FUN3(VAR9, VAR8, VAR8);
        VAR10->VAR6 = VAR6;
    }
    FUN4(VAR6, NULL, NULL, VAR17, (void *)VAR4);
    return 0;
}