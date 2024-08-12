int FUN1(const char *VAR1, const char *VAR2, const char *VAR3, const char *VAR4, char *VAR5, uint64_t VAR6, int VAR7)
{
    VAR8 *VAR9 = NULL, *VAR10 = NULL;
    VAR8 *VAR11, *VAR12;
    VAR13 *VAR14 = NULL;
    VAR15 *VAR16, *VAR17;
    int VAR18 = 0;
    VAR16 = FUN2(VAR2);
    if (!VAR16)
    {
        FUN3("", VAR2);
        VAR18 = -1;
        goto VAR19;
    }
    VAR17 = FUN4(VAR1);
    if (!VAR17)
    {
        FUN3("", VAR1);
        VAR18 = -1;
        goto VAR19;
    }
    VAR10 = FUN5(VAR10, VAR16->VAR10);
    VAR10 = FUN5(VAR10, VAR17->VAR10);
    VAR9 = FUN6("", VAR10, VAR9);
    FUN7(VAR9, VAR20, VAR6);
    if (VAR5)
    {
        VAR9 = FUN6(VAR5, VAR10, VAR9);
        if (VAR9 == NULL)
        {
            FUN3("", VAR2);
            VAR18 = -1;
            goto VAR19;
        }
    }
    if (VAR3)
    {
        if (FUN8(VAR9, VAR21, VAR3))
        {
            FUN3("", VAR2);
            VAR18 = -1;
            goto VAR19;
        }
    }
    if (VAR4)
    {
        if (FUN8(VAR9, VAR22, VAR4))
        {
            FUN3(""
                         "",
                         VAR2);
            VAR18 = -1;
            goto VAR19;
        }
    }
    VAR12 = FUN9(VAR9, VAR21);
    if (VAR12 && VAR12->VAR23.VAR24)
    {
        if (!strcmp(VAR1, VAR12->VAR23.VAR24))
        {
            FUN3(""
                         "");
            VAR18 = -1;
            goto VAR19;
        }
    }
    VAR11 = FUN9(VAR9, VAR22);
    if (VAR11 && VAR11->VAR23.VAR24)
    {
        if (!FUN2(VAR11->VAR23.VAR24))
        {
            FUN3("", VAR11->VAR23.VAR24);
            VAR18 = -1;
            goto VAR19;
        }
    }
    if (FUN9(VAR9, VAR20)->VAR23.VAR25 == -1)
    {
        if (VAR12 && VAR12->VAR23.VAR24)
        {
            uint64_t VAR26;
            const char *VAR2 = NULL;
            char VAR27[32];
            if (VAR11 && VAR11->VAR23.VAR24)
            {
                VAR2 = VAR11->VAR23.VAR24;
            }
            VAR14 = FUN10("");
            VAR18 = FUN11(VAR14, VAR12->VAR23.VAR24, VAR7, VAR16);
            if (VAR18 < 0)
            {
                FUN3("", VAR1);
                VAR18 = -1;
                goto VAR19;
            }
            FUN12(VAR14, &VAR26);
            VAR26 *= 512;
            snprintf(VAR27, sizeof(VAR27), "" VAR28, VAR26);
            FUN8(VAR9, VAR20, VAR27);
        }
        else
        {
            FUN3("");
            VAR18 = -1;
            goto VAR19;
        }
    }
    FUN13("", VAR1, VAR2);
    FUN14(VAR9);
    FUN15("");
    VAR18 = FUN16(VAR16, VAR1, VAR9);
    if (VAR18 < 0)
    {
        if (VAR18 == -VAR29)
        {
            FUN3(""
                         "",
                         VAR2);
        }
        else if (VAR18 == -VAR30)
        {
            FUN3("", VAR2);
        }
        else
        {
            FUN3("", VAR1, VAR2, strerror(-VAR18));
        }
    }
VAR19:
    FUN17(VAR10);
    FUN17(VAR9);
    if (VAR14)
    {
        FUN18(VAR14);
    }
    if (VAR18)
    {
        return 1;
    }
    return 0;
}