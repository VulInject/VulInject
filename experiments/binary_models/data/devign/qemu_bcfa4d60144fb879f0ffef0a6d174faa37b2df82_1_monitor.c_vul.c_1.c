void FUN1(VAR1 *VAR2, int VAR3, const char *VAR4)
{
    VAR5 *VAR6[VAR7];
    int VAR8, VAR9, VAR10;
    VAR10 = strlen(VAR4);
    FUN2(VAR2, VAR10);
    if (VAR3 == 2)
    {
        VAR8 = FUN3(NULL, VAR6, VAR11, VAR7);
        for (VAR9 = 0; VAR9 < VAR8; VAR9++)
        {
            int VAR12;
            char VAR13[16];
            if (FUN4(VAR6[VAR9], &VAR12))
            {
                continue;
            }
            snprintf(VAR13, sizeof(VAR13), "", VAR12);
            if (!FUN5(VAR4, VAR13, VAR10))
            {
                FUN6(VAR2, VAR13);
            }
        }
        return;
    }
    else if (VAR3 == 3)
    {
        VAR8 = FUN3(NULL, VAR6, VAR14, VAR7);
        for (VAR9 = 0; VAR9 < VAR8; VAR9++)
        {
            int VAR12;
            const char *VAR13;
            if (VAR6[VAR9]->VAR15->VAR16 == VAR17 || FUN4(VAR6[VAR9], &VAR12))
            {
                continue;
            }
            VAR13 = VAR6[VAR9]->VAR13;
            if (!FUN5(VAR4, VAR13, VAR10))
            {
                FUN6(VAR2, VAR13);
            }
        }
        return;
    }
}