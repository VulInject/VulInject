static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int64_t VAR17 = VAR18;
VAR19:
    VAR11 = FUN2(VAR6);
    VAR12 = FUN3(VAR6);
    FUN3(VAR6);
    VAR13 = FUN3(VAR6);
    VAR14 = FUN3(VAR6);
    VAR15 = FUN2(VAR6);
    VAR16 = VAR14 & 0x10;
    if (VAR11 != VAR20)
    {
        FUN4(VAR2, VAR21, "");
        return FUN5(VAR22);
    }
    if (VAR12 != VAR23 && VAR12 != VAR24)
    {
        FUN4(VAR2, VAR21, "");
        return FUN5(VAR22);
    }
    if (VAR13 != 0x55)
    {
        FUN4(VAR2, VAR25, "");
    }
    if (VAR15 > VAR26)
    {
        FUN4(VAR2, VAR21, "", VAR15);
        return FUN5(VAR22);
    }
    if (VAR12 == VAR23 && VAR16)
    {
        VAR17 = FUN6(VAR6);
        VAR15 -= 4;
    }
    else if (VAR12 == VAR24)
    {
        if (!VAR8->VAR27)
        {
            int VAR28, VAR29, VAR30, VAR31;
            unsigned char VAR32[256];
            VAR28 = FUN7(VAR6);
            FUN3(VAR6);
            VAR30 = FUN2(VAR6);
            VAR31 = FUN2(VAR6);
            VAR29 = FUN3(VAR6);
            if (VAR28 != 1)
            {
                FUN4(VAR2, VAR25, ""
                                          "");
                FUN8(VAR6, VAR15 - 9);
                goto VAR19;
            }
            FUN9(VAR6, VAR32, VAR29);
            VAR15 -= 9 + VAR29;
            VAR30 -= 3 + VAR29;
            VAR8->VAR27 = VAR30;
            if (VAR31 & 0x80 && (VAR32[0] & 0xf0) == 0x20)
                VAR17 = FUN10(VAR32);
        }
        VAR8->VAR27 -= VAR15;
        if (VAR8->VAR27 < 0)
        {
            FUN4(VAR2, VAR25, "");
            VAR8->VAR27 = 0;
        }
    }
    if ((VAR10 = FUN11(VAR6, VAR4, VAR15)) <= 0)
        return FUN5(VAR22);
    VAR4->VAR33 = VAR12 - 1;
    VAR4->VAR34 = VAR17;
    return VAR10;
}