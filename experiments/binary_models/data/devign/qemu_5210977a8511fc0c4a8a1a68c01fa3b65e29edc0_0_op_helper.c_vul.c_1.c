void FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4;
    if (FUN2(VAR5))
    {
        static int VAR6;
        const char *VAR7;
        if (VAR3 < 0 || VAR3 >= 0x180)
            VAR7 = "";
        else if (VAR3 >= 0x100)
            VAR7 = "";
        else if (VAR3 >= 0xc0)
            VAR7 = "";
        else if (VAR3 >= 0x80)
            VAR7 = "";
        else
        {
            VAR7 = VAR8[VAR3];
            if (!VAR7)
                VAR7 = "";
        }
        FUN3("" VAR9 "" VAR9 "" VAR9 "", VAR6, VAR7, VAR3, VAR2->VAR10, VAR2->VAR11, VAR2->VAR12[6]);
        FUN4(VAR2, 0);
        {
            int VAR13;
            VAR14 *VAR15;
            FUN3("");
            VAR15 = (VAR14 *)VAR2->VAR10;
            for (VAR13 = 0; VAR13 < 16; VAR13++)
            {
                FUN3("", FUN5(VAR15 + VAR13));
            }
            FUN3("");
        }
        VAR6++;
    }
    if (VAR2->VAR16 >= VAR2->VAR17)
    {
        FUN6(VAR2, ""
                       "",
                  VAR2->VAR4, VAR2->VAR16, VAR2->VAR17);
        return;
    }
    if (VAR2->VAR16 < VAR2->VAR17 - 1)
    {
        VAR2->VAR16++;
    }
    else
    {
        VAR2->VAR18 |= VAR19;
        if (VAR2->VAR16 < VAR2->VAR17)
            VAR2->VAR16++;
    }
    VAR2->VAR20 = &VAR2->VAR21[VAR2->VAR16 & VAR22];
    VAR2->VAR20->VAR23 = ((VAR24)FUN7(VAR2) << 32) | ((VAR2->VAR25 & 0xff) << 24) | ((VAR2->VAR18 & 0xf3f) << 8) | FUN8(VAR2);
    VAR2->VAR20->VAR26 = VAR2->VAR10;
    VAR2->VAR20->VAR27 = VAR2->VAR11;
    VAR2->VAR20->VAR28 = VAR3;
    if (!(VAR2->VAR29->VAR30 & VAR31))
    {
        switch (VAR3)
        {
        case VAR32:
            FUN9(VAR33 | VAR34 | VAR35);
            break;
        case VAR36:
        case VAR37:
        case VAR38:
        case VAR39:
        case VAR40:
            FUN9(VAR33 | VAR34 | VAR41);
            break;
        default:
            FUN9(VAR33 | VAR34 | VAR42);
            break;
        }
    }
    if (VAR3 == VAR43)
        FUN10(VAR2, FUN11(VAR2, VAR2->VAR44 - 1));
    else if ((VAR3 & 0x1c0) == VAR45)
        FUN10(VAR2, FUN11(VAR2, VAR2->VAR44 - VAR2->VAR46 - 2));
    else if ((VAR3 & 0x1c0) == VAR47)
        FUN10(VAR2, FUN12(VAR2, VAR2->VAR44 + 1));
    VAR2->VAR48 &= ~0x7fffULL;
    VAR2->VAR48 |= ((VAR2->VAR16 > 1) ? 1 << 14 : 0) | (VAR3 << 5);
    VAR2->VAR10 = VAR2->VAR48;
    VAR2->VAR11 = VAR2->VAR10 + 4;
    VAR2->VAR4 = 0;
}