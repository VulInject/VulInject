static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    if (!strcmp(VAR5, ""))
    {
        VAR4->VAR9 = VAR4->VAR10 = FUN2(VAR8, VAR6);
    }
    else if (!strcmp(VAR5, ""))
    {
        char *VAR11 = FUN3(VAR8, VAR6);
        if (!strcmp(VAR11, ""))
        {
            VAR4->VAR12->VAR13 = VAR14;
        }
        else if (!strcmp(VAR11, ""))
        {
            VAR4->VAR12->VAR15 = VAR16;
            VAR4->VAR12->VAR13 = VAR17;
        }
        else if (!strcmp(VAR11, ""))
        {
            VAR4->VAR12->VAR13 = VAR18;
        }
        else if (!strcmp(VAR11, ""))
        {
            VAR4->VAR12->VAR13 = VAR19;
        }
        else if (!strcmp(VAR11, ""))
        {
            VAR4->VAR12->VAR13 = VAR20;
        }
        else
        {
            FUN4(VAR2, "", VAR11);
        }
        FUN5(VAR11);
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR21 = FUN6(FUN7(VAR8, VAR6));
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR12->VAR22 = FUN2(VAR8, VAR6);
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR23 = FUN7(VAR8, VAR6);
        FUN8(&VAR4->VAR23.VAR24, &VAR4->VAR23.VAR25, VAR4->VAR23.VAR24, VAR4->VAR23.VAR25, VAR26);
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR12->VAR27 = FUN2(VAR8, VAR6);
    }
    else if (!strcmp(VAR5, ""))
    {
        if (FUN2(VAR8, VAR6) == 1101)
        {
            VAR4->VAR12->VAR28 = FUN9("");
            VAR4->VAR12->VAR29 = 9;
        }
    }
    else if (!strcmp(VAR5, "") || !strcmp(VAR5, ""))
    {
        FUN10(VAR2, VAR5, VAR6);
    }
    else if (!strcmp(VAR5, "") || !strcmp(VAR5, ""))
    {
        FUN11(VAR8, VAR6);
    }
    else
        return -1;
    return 0;
}