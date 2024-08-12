static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, int *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    int64_t VAR19 = VAR20, VAR21;
    int VAR22;
VAR23:
    VAR21 = FUN2(VAR9);
    VAR13 = FUN3(VAR9);
    VAR14 = FUN4(VAR9);
    FUN4(VAR9);
    VAR15 = FUN4(VAR9);
    VAR16 = FUN4(VAR9);
    VAR17 = FUN3(VAR9);
    VAR18 = VAR16 & 0x10;
    if (VAR13 != VAR24)
    {
        FUN5(VAR2, VAR25, "");
        return FUN6(VAR26);
    }
    if (VAR14 != VAR27 && VAR14 != VAR28)
    {
        FUN5(VAR2, VAR25, "");
        return FUN6(VAR26);
    }
    if (VAR15 != 0x55)
    {
        FUN5(VAR2, VAR29, "");
    }
    if (VAR17 > VAR30)
    {
        FUN5(VAR2, VAR25, "", VAR17);
        return FUN6(VAR26);
    }
    if (VAR14 == VAR27 && VAR18)
    {
        VAR19 = FUN7(VAR9);
        VAR17 -= 4;
    }
    else if (VAR14 == VAR28)
    {
        if (!VAR11->VAR31)
        {
            int VAR32, VAR33, VAR34, VAR35;
            unsigned char VAR36[256];
            VAR32 = FUN8(VAR9);
            FUN4(VAR9);
            VAR34 = FUN3(VAR9);
            VAR35 = FUN3(VAR9);
            VAR33 = FUN4(VAR9);
            if (VAR32 != 1 || VAR33 == 0)
            {
                FUN5(VAR2, VAR29, ""
                                           "");
                FUN9(VAR9, VAR17 - 9);
                if (!VAR7)
                    return FUN6(VAR26);
                goto VAR23;
            }
            VAR22 = FUN10(VAR9, VAR36, VAR33);
            if (VAR22 != VAR33)
                return VAR22 < 0 ? VAR22 : VAR37;
            VAR17 -= 9 + VAR33;
            VAR34 -= 3 + VAR33;
            VAR11->VAR31 = VAR34;
            if (VAR35 & 0x80 && (VAR36[0] & 0xf0) == 0x20)
                VAR19 = FUN11(VAR36);
        }
        VAR11->VAR31 -= VAR17;
        if (VAR11->VAR31 < 0)
        {
            FUN5(VAR2, VAR29, "");
            VAR11->VAR31 = 0;
        }
    }
    if (VAR19 != VAR20)
        FUN12(VAR2->VAR38[VAR14 - 1], VAR21, VAR19, 0, 0, VAR39);
    *VAR4 = VAR19;
    *VAR5 = VAR17;
    *VAR6 = VAR14;
    return 0;
}