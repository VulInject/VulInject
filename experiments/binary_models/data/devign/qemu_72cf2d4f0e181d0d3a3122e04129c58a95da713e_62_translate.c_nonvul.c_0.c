FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    DisasContext VAR6;
    target_ulong VAR7;
    static VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13;
    int VAR14;
    int VAR15;
    VAR7 = VAR4->VAR16;
    VAR9 = VAR17 + VAR18;
    VAR6.VAR16 = VAR7;
    VAR6.VAR19 = (VAR20)VAR4->VAR19;
    VAR6.VAR21 = VAR22;
    VAR6.VAR23 = VAR2->VAR23;
    VAR6.VAR24 = VAR2->VAR24;
    VAR6.VAR25 = (VAR2->VAR23 & VAR26) ? 1 : 0;
    VAR6.VAR27 = -1;
    VAR6.VAR4 = VAR4;
    VAR6.VAR28 = VAR2->VAR28;
    VAR6.VAR29 = VAR2->VAR29;
    VAR6.VAR30 = (VAR4->VAR19 & VAR31);
    FUN2(VAR32, "");
    FUN3(VAR32, VAR2, 0);
    VAR13 = -1;
    VAR14 = 0;
    VAR15 = VAR4->VAR33 & VAR34;
    if (VAR15 == 0)
        VAR15 = VAR34;
    FUN4();
    while (VAR6.VAR21 == VAR22 && VAR35 < VAR9)
    {
        if (FUN5(!FUN6(&VAR2->VAR36)))
        {
            FUN7(VAR11, &VAR2->VAR36, VAR37)
            {
                if (VAR6.VAR16 == VAR11->VAR16)
                {
                    FUN8(VAR38, VAR6.VAR16);
                    FUN9();
                    VAR6.VAR21 = VAR39;
                    break;
                }
            }
        }
        if (VAR5)
        {
            VAR12 = VAR35 - VAR17;
            if (VAR13 < VAR12)
            {
                VAR13++;
                while (VAR13 < VAR12)
                    VAR40[VAR13++] = 0;
            }
            VAR41[VAR13] = VAR6.VAR16;
            VAR42[VAR13] = VAR6.VAR19;
            VAR40[VAR13] = 1;
            VAR43[VAR13] = VAR14;
        }
        if (VAR14 + 1 == VAR15 && (VAR4->VAR33 & VAR44))
            FUN10();
        fprintf(VAR45, "", VAR6.VAR16);
        FUN11(VAR45);
        VAR6.VAR46 = FUN12(VAR6.VAR16);
        FUN13(&VAR6);
        VAR14++;
        VAR6.VAR16 += 2;
        if ((VAR6.VAR16 & (VAR47 - 1)) == 0)
            break;
        if (VAR2->VAR28)
            break;
        if (VAR14 >= VAR15)
            break;
        if (VAR48)
            break;
    }
    if (VAR4->VAR33 & VAR44)
        FUN14();
    if (VAR2->VAR28)
    {
        FUN8(VAR38, VAR6.VAR16);
        FUN9();
    }
    else
    {
        switch (VAR6.VAR21)
        {
        case VAR49:
        case VAR22:
            if (VAR6.VAR19)
            {
                FUN15(VAR6.VAR19 | VAR50);
            }
            FUN16(&VAR6, 0, VAR6.VAR16);
            break;
        case VAR39:
            FUN17(0);
            break;
        case VAR51:
        default:
            break;
        }
    }
    FUN18(VAR4, VAR14);
    *VAR35 = VAR52;
    if (VAR5)
    {
        VAR12 = VAR35 - VAR17;
        VAR13++;
        while (VAR13 <= VAR12)
            VAR40[VAR13++] = 0;
    }
    else
    {
        VAR4->VAR53 = VAR6.VAR16 - VAR7;
        VAR4->VAR54 = VAR14;
    }
    FUN2(VAR55, "");
    if (FUN19(VAR55))
    {
        FUN20("");
        FUN21(VAR7, VAR6.VAR16 - VAR7, 0);
        FUN20("");
    }
}