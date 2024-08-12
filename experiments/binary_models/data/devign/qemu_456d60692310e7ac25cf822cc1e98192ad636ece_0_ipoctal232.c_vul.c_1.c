static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    unsigned VAR5;
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        VAR7 *VAR8 = &VAR4->VAR8[VAR5];
        VAR8->VAR9 = VAR4;
        if (VAR8->VAR10)
        {
            const char VAR11[] = "";
            char VAR12[FUN3(VAR11) + 2];
            static int VAR13;
            snprintf(VAR12, sizeof(VAR12), "", VAR11, VAR13);
            VAR8->VAR14 = FUN4(VAR12, VAR8->VAR10, NULL);
            if (VAR8->VAR14)
            {
                VAR13++;
                FUN5(VAR8->VAR14, VAR15, VAR16, VAR17, VAR8);
                FUN6("", VAR5, VAR8->VAR10, VAR12);
            }
            else
            {
                FUN6("", VAR5, VAR8->VAR10);
            }
        }
    }
    return 0;