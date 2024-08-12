void FUN1(const char *VAR1, const char *VAR2, const char *VAR3, const char *VAR4, char *VAR5, uint64_t VAR6, int VAR7, VAR8 **VAR9, bool VAR10)
{
    VAR11 *VAR12 = NULL, *VAR13 = NULL;
    VAR11 *VAR14, *VAR15, *VAR16;
    VAR17 *VAR18 = NULL;
    VAR19 *VAR20, *VAR21;
    VAR19 *VAR22 = NULL;
    int VAR23 = 0;
    VAR20 = FUN2(VAR2);
    if (!VAR20)
    {
        FUN3(VAR9, "", VAR2);
        return;
    }
    VAR21 = FUN4(VAR1);
    if (!VAR21)
    {
        FUN3(VAR9, "", VAR1);
        return;
    }
    VAR13 = FUN5(VAR13, VAR20->VAR13);
    VAR13 = FUN5(VAR13, VAR21->VAR13);
    VAR12 = FUN6("", VAR13, VAR12);
    FUN7(VAR12, VAR24, VAR6);
    if (VAR5)
    {
        VAR12 = FUN6(VAR5, VAR13, VAR12);
        if (VAR12 == NULL)
        {
            FUN3(VAR9, "", VAR2);
            goto VAR25;
        }
    }
    if (VAR3)
    {
        if (FUN8(VAR12, VAR26, VAR3))
        {
            FUN3(VAR9, "", VAR2);
            goto VAR25;
        }
    }
    if (VAR4)
    {
        if (FUN8(VAR12, VAR27, VAR4))
        {
            FUN3(VAR9, ""
                             "",
                       VAR2);
            goto VAR25;
        }
    }
    VAR15 = FUN9(VAR12, VAR26);
    if (VAR15 && VAR15->VAR28.VAR29)
    {
        if (!strcmp(VAR1, VAR15->VAR28.VAR29))
        {
            FUN3(VAR9, ""
                             "");
            goto VAR25;
        }
    }
    VAR14 = FUN9(VAR12, VAR27);
    if (VAR14 && VAR14->VAR28.VAR29)
    {
        VAR22 = FUN2(VAR14->VAR28.VAR29);
        if (!VAR22)
        {
            FUN3(VAR9, "", VAR14->VAR28.VAR29);
            goto VAR25;
        }
    }
    VAR16 = FUN9(VAR12, VAR24);
    if (VAR16 && VAR16->VAR28.VAR30 == -1)
    {
        if (VAR15 && VAR15->VAR28.VAR29)
        {
            uint64_t VAR16;
            char VAR31[32];
            int VAR32;
            VAR32 = VAR7 & ~(VAR33 | VAR34 | VAR35);
            VAR18 = FUN10("");
            VAR23 = FUN11(VAR18, VAR15->VAR28.VAR29, NULL, VAR32, VAR22);
            if (VAR23 < 0)
            {
                FUN12(VAR9, -VAR23, "", VAR15->VAR28.VAR29);
                goto VAR25;
            }
            FUN13(VAR18, &VAR16);
            VAR16 *= 512;
            snprintf(VAR31, sizeof(VAR31), "" VAR36, VAR16);
            FUN8(VAR12, VAR24, VAR31);
        }
        else
        {
            FUN3(VAR9, "");
            goto VAR25;
        }
    }
    if (!VAR10)
    {
        FUN14("", VAR1, VAR2);
        FUN15(VAR12);
        FUN16("");
    }
    VAR23 = FUN17(VAR20, VAR1, VAR12);
    if (VAR23 < 0)
    {
        if (VAR23 == -VAR37)
        {
            FUN3(VAR9, ""
                             "",
                       VAR2);
        }
        else if (VAR23 == -VAR38)
        {
            const char *VAR39 = "";
            if (FUN9(VAR13, VAR40))
            {
                VAR39 = "";
            }
            FUN3(VAR9, "", VAR2, VAR39);
        }
        else
        {
            FUN3(VAR9, "", VAR1, VAR2, strerror(-VAR23));
        }
    }
VAR25:
    FUN18(VAR13);
    FUN18(VAR12);
    if (VAR18)
    {
        FUN19(VAR18);
    }
}