static VAR1 *FUN1(VAR2 *VAR3, uint64_t VAR4, uint64_t VAR5, VAR6 **VAR7)
{
    int VAR8;
    VAR9 *VAR10 = VAR3->VAR11;
    VAR12 *VAR13, *VAR14;
    VAR15 *VAR16;
    uint32_t VAR17 = 0;
    VAR1 *VAR18 = NULL;
    if (VAR5 == 0)
    {
        FUN2(VAR7, "");
        return NULL;
    }
    if (VAR5 > VAR19)
    {
        FUN2(VAR7, "");
        return NULL;
    }
    VAR13 = FUN3(VAR5);
    if (VAR13 == NULL)
    {
        FUN2(VAR7, "");
        return NULL;
    }
    VAR14 = VAR13 + VAR5;
    VAR8 = FUN4(VAR3->VAR20, VAR4, VAR13, VAR5);
    if (VAR8 < 0)
    {
        FUN5(VAR7, -VAR8, "");
        goto VAR21;
    }
    VAR18 = FUN6();
    for (VAR16 = (VAR15 *)VAR13; VAR16 < (VAR15 *)VAR14; VAR16 = FUN7(VAR16))
    {
        VAR22 *VAR23;
        if ((VAR12 *)(VAR16 + 1) > VAR14)
        {
            goto VAR24;
        }
        if (++VAR17 > VAR10->VAR25)
        {
            FUN2(VAR7, ""
                             "");
            goto VAR21;
        }
        FUN8(VAR16);
        if ((VAR12 *)FUN7(VAR16) > VAR14)
        {
            goto VAR24;
        }
        if (VAR16->VAR26 != 0)
        {
            FUN2(VAR7, "");
            goto VAR21;
        }
        VAR8 = FUN9(VAR3, VAR16);
        if (VAR8 < 0)
        {
            FUN2(VAR7, "", VAR16->VAR27, FUN10(VAR16));
            goto VAR21;
        }
        VAR23 = FUN11(VAR22, 1);
        VAR23->VAR28.VAR4 = VAR16->VAR29;
        VAR23->VAR28.VAR5 = VAR16->VAR30;
        VAR23->VAR31 = VAR16->VAR31;
        VAR23->VAR32 = VAR16->VAR32;
        VAR23->VAR33 = FUN12(VAR16);
        FUN13(VAR18, VAR23, VAR34);
    }
    if (VAR17 != VAR10->VAR25)
    {
        FUN2(VAR7, ""
                         "");
        goto VAR21;
    }
    if ((VAR12 *)VAR16 != VAR14)
    {
        goto VAR24;
    }
    FUN14(VAR13);
    return VAR18;
VAR24:
    VAR8 = -VAR35;
    FUN2(VAR7, "");
VAR21:
    FUN14(VAR13);
    FUN15(VAR18);
    return NULL;
}