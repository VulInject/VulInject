static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    char VAR4[128];
    char VAR5[1024];
    VAR6 *VAR7 = NULL;
    int VAR8, VAR9, VAR10;
    int64_t VAR11;
    if (VAR2->VAR12->VAR13)
    {
        strcpy(VAR5, VAR2->VAR12->VAR13->VAR14);
        VAR8 = VAR15;
        if (FUN2(VAR4, sizeof(VAR4), "", VAR3))
        {
            if ((VAR10 = FUN3(&VAR11, VAR4, 0)) < 0)
            {
                FUN4("", VAR4);
                return VAR10;
            }
        }
        else if (FUN2(VAR4, sizeof(VAR4), "", VAR3))
        {
            int VAR16 = FUN5(VAR4, 0, 10);
            VAR11 = FUN6() - VAR16 * (VAR17)1000000;
        }
        else
            VAR11 = FUN6() - VAR2->VAR12->VAR16 * (VAR17)1000;
    }
    else
    {
        strcpy(VAR5, VAR2->VAR12->VAR14);
        VAR8 = 0;
        if (FUN2(VAR4, sizeof(VAR4), "", VAR3))
        {
            if ((VAR10 = FUN3(&VAR11, VAR4, 1)) < 0)
            {
                FUN4("", VAR4);
                return VAR10;
            }
        }
        else
            VAR11 = 0;
    }
    if (!VAR5[0])
    {
        FUN4("");
        return FUN7(VAR18);
    }
    VAR10 = FUN8(&VAR7, VAR5, VAR2->VAR12->VAR19, &VAR2->VAR12->VAR20);
    if (VAR10 < 0)
    {
        FUN4("", VAR5, FUN9(VAR10));
        return VAR10;
    }
    if (VAR8 > 0)
    {
        VAR10 = FUN10(VAR7->VAR21, VAR8);
        if (VAR10 < 0)
        {
            FUN4("");
            return VAR10;
        }
    }
    VAR7->VAR22 |= VAR23;
    VAR2->VAR24 = VAR7;
    if (strcmp(VAR7->VAR25->VAR26, "") && (VAR10 = FUN11(VAR2->VAR24, NULL)) < 0)
    {
        FUN4("", VAR5);
        FUN12(&VAR7);
        return VAR10;
    }
    VAR2->VAR27 = 0;
    for (VAR9 = 0; VAR9 < VAR2->VAR12->VAR28; VAR9++)
    {
        if (VAR2->VAR27 == 0 && VAR2->VAR12->VAR29[VAR9]->VAR30->VAR31 == VAR32)
        {
            VAR2->VAR27 = VAR9;
        }
    }
    if (VAR2->VAR24->VAR25->VAR33)
        FUN13(VAR2->VAR24, -1, VAR11, 0);
    VAR2->VAR34 = VAR35;
    VAR2->VAR36 = VAR37;
    return 0;
}