static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    DataCache VAR4, VAR5;
    size_t VAR6, VAR7;
    lzo_bytep VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    off_t VAR11, VAR12;
    PageDescriptor VAR13, VAR14;
    VAR9 *VAR15;
    int VAR16 = VAR2->VAR17.VAR18;
    VAR19 *VAR20 = NULL;
    uint64_t VAR21;
    VAR11 = VAR2->VAR22;
    VAR12 = VAR11 + sizeof(VAR23) * VAR2->VAR24;
    FUN2(&VAR4, VAR2, VAR11);
    FUN2(&VAR5, VAR2, VAR12);
    VAR6 = FUN3(VAR25, VAR2->VAR26);
    if (VAR6 == 0)
    {
        FUN4(VAR2, "");
        goto VAR27;
    }
    VAR8 = FUN5(VAR28);
    VAR10 = FUN5(VAR6);
    VAR14.VAR29 = FUN6(VAR25, VAR16);
    VAR14.VAR30 = FUN6(0, VAR16);
    VAR14.VAR31 = FUN7(VAR12, VAR16);
    VAR14.VAR32 = FUN7(0, VAR16);
    VAR15 = FUN8(VAR25);
    VAR3 = FUN9(&VAR5, VAR15, VAR25, false);
    FUN10(VAR15);
    if (VAR3 < 0)
    {
        FUN4(VAR2, "");
        goto VAR27;
    }
    VAR12 += VAR25;
    while (FUN11(&VAR20, &VAR21, &VAR15, VAR2))
    {
        if (FUN12(VAR15, VAR25))
        {
            VAR3 = FUN9(&VAR4, &VAR14, sizeof(VAR23), false);
            if (VAR3 < 0)
            {
                FUN4(VAR2, "");
                goto VAR27;
            }
        }
        else
        {
            VAR7 = VAR6;
            if ((VAR2->VAR26 & VAR33) && (FUN13(VAR10, (VAR34 *)&VAR7, VAR15, VAR25, VAR35) == VAR36) && (VAR7 < VAR25))
            {
                VAR13.VAR30 = FUN6(VAR33, VAR16);
                VAR13.VAR29 = FUN6(VAR7, VAR16);
                VAR3 = FUN9(&VAR5, VAR10, VAR7, false);
                if (VAR3 < 0)
                {
                    FUN4(VAR2, "");
                    goto VAR27;
                }
            }
            else if ((VAR2->VAR26 & VAR37) && (FUN14(VAR15, VAR25, VAR10, (VAR38 *)&VAR7, VAR8) == VAR39) && (VAR7 < VAR25))
            {
                VAR13.VAR30 = FUN6(VAR37, VAR16);
                VAR13.VAR29 = FUN6(VAR7, VAR16);
                VAR3 = FUN9(&VAR5, VAR10, VAR7, false);
                if (VAR3 < 0)
                {
                    FUN4(VAR2, "");
                    goto VAR27;
                }
            }
            else if ((VAR2->VAR26 & VAR40) && (FUN15((char *)VAR15, VAR25, (char *)VAR10, &VAR7) == VAR41) && (VAR7 < VAR25))
            {
                VAR13.VAR30 = FUN6(VAR40, VAR16);
                VAR13.VAR29 = FUN6(VAR7, VAR16);
                VAR3 = FUN9(&VAR5, VAR10, VAR7, false);
                if (VAR3 < 0)
                {
                    FUN4(VAR2, "");
                    goto VAR27;
                }
            }
            else
            {
                VAR13.VAR30 = FUN6(0, VAR16);
                VAR7 = VAR25;
                VAR13.VAR29 = FUN6(VAR7, VAR16);
                VAR3 = FUN9(&VAR5, VAR15, VAR25, false);
                if (VAR3 < 0)
                {
                    FUN4(VAR2, "");
                    goto VAR27;
                }
            }
            VAR13.VAR32 = FUN7(0, VAR16);
            VAR13.VAR31 = FUN7(VAR12, VAR16);
            VAR12 += VAR7;
            VAR3 = FUN9(&VAR4, &VAR13, sizeof(VAR23), false);
            if (VAR3 < 0)
            {
                FUN4(VAR2, "");
                goto VAR27;
            }
        }
    }
    VAR3 = FUN9(&VAR4, NULL, 0, true);
    if (VAR3 < 0)
    {
        FUN4(VAR2, "");
        goto VAR27;
    }
    VAR3 = FUN9(&VAR5, NULL, 0, true);
    if (VAR3 < 0)
    {
        FUN4(VAR2, "");
        goto VAR27;
    }
VAR27:
    FUN16(&VAR4);
    FUN16(&VAR5);
    FUN10(VAR8);
    FUN10(VAR10);
    return VAR3;
}