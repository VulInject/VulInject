static int FUN1(int VAR1, const char *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    char VAR8[VAR9];
    int VAR10 = -1, VAR11 = -1, VAR12 = -1, VAR13 = -1;
    int VAR14 = -1, VAR15;
    bool VAR16 = !strcmp(VAR2, "");
    if (VAR16)
    {
        VAR6 = FUN2(VAR1, VAR17, "");
        if (!VAR6)
        {
            if (VAR18 == VAR19)
            {
                goto VAR20;
            }
            else
            {
                return -1;
            }
        }
    }
    else
    {
        VAR7 = FUN3(VAR1, VAR21, 0700);
        if (VAR7 < 0 && VAR18 != VAR22)
        {
            return -1;
        }
        VAR14 = FUN4(VAR1, VAR21);
        if (VAR14 == -1)
        {
            return -1;
        }
        VAR6 = FUN2(VAR14, VAR2, "");
        if (!VAR6)
        {
            if (VAR18 == VAR19)
            {
                goto VAR20;
            }
            else
            {
                FUN5(VAR14);
                return -1;
            }
        }
    }
    memset(VAR8, 0, VAR9);
    while (fgets(VAR8, VAR9, VAR6))
    {
        if (!FUN6(VAR8, "", 10))
        {
            VAR10 = FUN7(VAR8 + 11);
        }
        else if (!FUN6(VAR8, "", 10))
        {
            VAR11 = FUN7(VAR8 + 11);
        }
        else if (!FUN6(VAR8, "", 11))
        {
            VAR12 = FUN7(VAR8 + 12);
        }
        else if (!FUN6(VAR8, "", 11))
        {
            VAR13 = FUN7(VAR8 + 12);
        }
        memset(VAR8, 0, VAR9);
    }
    fclose(VAR6);
VAR20:
    if (VAR16)
    {
        VAR6 = FUN2(VAR1, VAR17, "");
    }
    else
    {
        VAR6 = FUN2(VAR14, VAR2, "");
        if (VAR14 != -1)
        {
            FUN5(VAR14);
        }
    }
    if (!VAR6)
    {
        return -1;
    }
    VAR15 = FUN8(VAR6);
    assert(VAR15 != -1);
    VAR7 = FUN9(VAR15, 0600);
    assert(VAR7 == 0);
    if (VAR4->VAR23 != -1)
    {
        VAR10 = VAR4->VAR23;
    }
    if (VAR4->VAR24 != -1)
    {
        VAR11 = VAR4->VAR24;
    }
    if (VAR4->VAR25 != -1)
    {
        VAR12 = VAR4->VAR25;
    }
    if (VAR4->VAR26 != -1)
    {
        VAR13 = VAR4->VAR26;
    }
    if (VAR10 != -1)
    {
        fprintf(VAR6, "", VAR10);
    }
    if (VAR11 != -1)
    {
        fprintf(VAR6, "", VAR11);
    }
    if (VAR12 != -1)
    {
        fprintf(VAR6, "", VAR12);
    }
    if (VAR13 != -1)
    {
        fprintf(VAR6, "", VAR13);
    }
    fclose(VAR6);
    return 0;
}