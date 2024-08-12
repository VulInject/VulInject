static void FUN1(VAR1 *VAR2, char VAR3, char VAR4, int64_t VAR5)
{
    struct VAR6 *VAR7 = FUN2(VAR2);
    char *VAR8 = VAR7->VAR9[VAR2->VAR10];
    int VAR11;
    FUN3(VAR7->VAR12, VAR2->VAR10);
    VAR11 = FUN4(VAR2, VAR8, VAR2->VAR13, VAR3);
    if (VAR11 == 0)
        VAR2->VAR13++;
    if (VAR4)
    {
        VAR11 = FUN4(VAR2, VAR8, VAR2->VAR13, VAR4);
        if (VAR11 == 0)
            VAR2->VAR13++;
    }
    FUN4(VAR2, VAR8, VAR2->VAR13, 0);
    VAR2->VAR14[0] = 0;
    VAR2->VAR14[1] = 0;
    if (VAR4)
        FUN5(VAR2, "", VAR3, VAR4);
    else
        FUN5(VAR2, "", VAR3);
}