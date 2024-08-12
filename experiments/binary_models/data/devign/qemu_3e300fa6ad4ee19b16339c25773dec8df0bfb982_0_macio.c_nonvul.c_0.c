static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR1;
    VAR7 *VAR8 = FUN2(&VAR6->VAR9);
    int VAR10 = 0;
    int64_t VAR11;
    int VAR12;
    if (VAR2 < 0)
    {
        FUN3("");
        VAR6->VAR13 = NULL;
        FUN4(&VAR8->VAR14);
        FUN5(VAR8);
        VAR4->VAR15 = 0;
        goto VAR16;
    }
    if (--VAR4->VAR17)
    {
        return;
    }
    if (!VAR6->VAR18)
    {
        FUN3("", VAR8->VAR19, VAR4->VAR20, VAR8->VAR21);
        VAR4->VAR22 = false;
        return;
    }
    VAR11 = FUN6(VAR8);
    FUN3("", VAR8->VAR23);
    if (VAR8->VAR23 > 0)
    {
        VAR6->VAR13 = NULL;
        FUN4(&VAR8->VAR14);
        VAR10 = (VAR8->VAR23 + 0x1ff) >> 9;
        VAR11 += VAR10;
        FUN7(VAR8, VAR11);
        VAR8->VAR19 -= VAR10;
    }
    if (VAR4->VAR24)
    {
        VAR4->VAR24 = false;
        FUN8(VAR4->VAR25, VAR4->VAR26, VAR4->VAR27);
    }
    FUN3(""
                  "" VAR28 "",
                  VAR4->VAR15, VAR4->VAR20, VAR8->VAR19, VAR11);
    if (VAR4->VAR15 && VAR4->VAR20)
    {
        int VAR15 = FUN9(VAR4->VAR15, VAR4->VAR20);
        VAR29 *VAR30 = &VAR4->VAR26[0x200 - VAR15];
        FUN3("" VAR31 "", VAR15, VAR4->VAR32);
        switch (VAR8->VAR33)
        {
        case VAR34:
            FUN8(VAR4->VAR32, VAR30, VAR15);
            break;
        case VAR35:
            FUN10(VAR4->VAR32, VAR30, VAR15);
            break;
        case VAR36:
            break;
        }
        VAR4->VAR32 += VAR15;
        VAR4->VAR20 -= VAR15;
        VAR4->VAR15 -= VAR15;
        if (VAR8->VAR33 == VAR35 && !VAR4->VAR15)
        {
            VAR4->VAR17++;
            FUN11(&VAR4->VAR37);
            FUN12(&VAR4->VAR37, VAR4->VAR26, 0x200);
            VAR6->VAR13 = FUN13(VAR8->VAR38, VAR11 - 1, &VAR4->VAR37, 1, VAR39, VAR4);
        }
    }
    if (VAR8->VAR19 == 0 && !VAR4->VAR15)
    {
        FUN3("");
        VAR8->VAR21 = VAR40 | VAR41;
        FUN14(VAR8->VAR9);
        VAR6->VAR18 = false;
    }
    if (VAR4->VAR20 == 0)
    {
        FUN3("");
        goto VAR16;
    }
    VAR8->VAR42 = 0;
    VAR8->VAR23 = FUN9(VAR4->VAR20, VAR8->VAR19 * 512);
    VAR12 = VAR4->VAR20 & 0x1ff;
    if (VAR12)
    {
        int VAR19 = VAR4->VAR20 >> 9;
        FUN3("" VAR31 "", VAR12, VAR4->VAR32 + VAR4->VAR20 - VAR12);
        switch (VAR8->VAR33)
        {
        case VAR34:
            VAR4->VAR17++;
            VAR4->VAR25 = VAR4->VAR32 + VAR4->VAR20 - VAR12;
            VAR4->VAR27 = VAR12;
            VAR4->VAR24 = true;
            FUN11(&VAR4->VAR37);
            FUN12(&VAR4->VAR37, VAR4->VAR26, 0x200);
            VAR6->VAR13 = FUN15(VAR8->VAR38, VAR11 + VAR19, &VAR4->VAR37, 1, VAR39, VAR4);
            break;
        case VAR35:
            FUN10(VAR4->VAR32 + VAR4->VAR20 - VAR12, VAR4->VAR26 + VAR4->VAR15, VAR12);
            break;
        case VAR36:
            break;
        }
    }
    FUN3("", VAR4->VAR20);
    FUN16(&VAR8->VAR14, FUN17(VAR6), VAR4->VAR20 / VAR43 + 1, &VAR44);
    FUN18(&VAR8->VAR14, VAR4->VAR32, VAR4->VAR20);
    VAR4->VAR32 += VAR4->VAR20 + VAR12;
    VAR4->VAR15 = (0x200 - VAR12) & 0x1ff;
    FUN3("", VAR4->VAR15);
    if (!VAR4->VAR20)
    {
        if (!VAR4->VAR17)
        {
            VAR4->VAR17++;
            FUN1(VAR1, VAR2);
        }
        return;
    }
    VAR4->VAR20 = 0;
    FUN3("" VAR28 "", VAR11, VAR10, VAR8->VAR19, VAR8->VAR33);
    switch (VAR8->VAR33)
    {
    case VAR34:
        VAR6->VAR13 = FUN19(VAR8->VAR38, &VAR8->VAR14, VAR11, VAR39, VAR4);
        break;
    case VAR35:
        VAR6->VAR13 = FUN20(VAR8->VAR38, &VAR8->VAR14, VAR11, VAR39, VAR4);
        break;
    case VAR36:
        VAR6->VAR13 = FUN21(VAR8->VAR38, &VAR8->VAR14, VAR11, VAR45, VAR39, VAR4, VAR46);
        break;
    }
    VAR4->VAR17++;
    return;
VAR16:
    if (VAR8->VAR33 == VAR34 || VAR8->VAR33 == VAR35)
    {
        FUN22(VAR8->VAR38, &VAR8->VAR47);
    }
    VAR4->FUN23(VAR4);
}