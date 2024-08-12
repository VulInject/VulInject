FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    DisasContext VAR6;
    target_ulong VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13 = -1;
    int VAR14;
    int VAR15;
    if (VAR5 && VAR16)
        fprintf(VAR17, "", VAR5);
    VAR7 = VAR4->VAR18;
    VAR9 = VAR19 + VAR20 - 16;
    VAR6.VAR18 = VAR7;
    VAR6.VAR21 = -1;
    VAR6.VAR4 = VAR4;
    VAR6.VAR22 = VAR23;
    VAR6.VAR24 = (VAR25)VAR4->VAR26;
    FUN2(VAR2, &VAR6);
    VAR6.VAR27 = VAR28;
    VAR6.VAR27 = VAR6.VAR24 & VAR29;
    VAR14 = 0;
    VAR15 = VAR4->VAR30 & VAR31;
    if (VAR15 == 0)
        VAR15 = VAR31;
    if (VAR16 & VAR32)
    {
        fprintf(VAR17, "");
        FUN3(VAR2, VAR17, fprintf, 0);
    }
    if (VAR16 & VAR33)
        fprintf(VAR17, "", VAR4, VAR6.VAR27, VAR6.VAR24);
    FUN4();
    while (VAR6.VAR22 == VAR23)
    {
        if (FUN5(!FUN6(&VAR2->VAR34)))
        {
            FUN7(VAR11, &VAR2->VAR34, VAR35)
            {
                if (VAR11->VAR18 == VAR6.VAR18)
                {
                    FUN8(&VAR6, 1);
                    VAR6.VAR22 = VAR36;
                    FUN9(VAR37, VAR38);
                    VAR6.VAR18 += 4;
                    goto VAR39;
                }
            }
        }
        if (VAR5)
        {
            VAR12 = VAR40 - VAR19;
            if (VAR13 < VAR12)
            {
                VAR13++;
                while (VAR13 < VAR12)
                    VAR41[VAR13++] = 0;
            }
            VAR42[VAR13] = VAR6.VAR18;
            VAR43[VAR13] = VAR6.VAR24 & VAR44;
            VAR41[VAR13] = 1;
            VAR45[VAR13] = VAR14;
        }
        if (VAR14 + 1 == VAR15 && (VAR4->VAR30 & VAR46))
            FUN10();
        VAR6.VAR47 = FUN11(VAR6.VAR18);
        FUN12(VAR2, &VAR6);
        VAR6.VAR18 += 4;
        VAR14++;
        if (VAR2->VAR48)
            break;
        if ((VAR6.VAR18 & (VAR49 - 1)) == 0)
            break;
        if (VAR40 >= VAR9)
            break;
        if (VAR14 >= VAR15)
            break;
        break;
    }
    if (VAR4->VAR30 & VAR46)
        FUN13();
    if (VAR2->VAR48)
    {
        FUN8(&VAR6, VAR6.VAR22 == VAR23);
        FUN9(VAR37, VAR38);
    }
    else
    {
        switch (VAR6.VAR22)
        {
        case VAR50:
            FUN14();
            FUN15(&VAR6, 0, VAR6.VAR18);
            break;
        case VAR23:
            FUN8(&VAR6, 0);
            FUN15(&VAR6, 0, VAR6.VAR18);
            break;
        case VAR51:
            FUN14();
            FUN16(0);
            break;
        case VAR36:
        default:
            break;
        }
    }
VAR39:
    FUN17(VAR4, VAR14);
    *VAR40 = VAR52;
    if (VAR5)
    {
        VAR12 = VAR40 - VAR19;
        VAR13++;
        while (VAR13 <= VAR12)
            VAR41[VAR13++] = 0;
    }
    else
    {
        VAR4->VAR53 = VAR6.VAR18 - VAR7;
        VAR4->VAR54 = VAR14;
    }
    if (VAR16 & VAR33)
        fprintf(VAR17, "");
    if (VAR16 & VAR33)
    {
        fprintf(VAR17, "", FUN18(VAR7));
        FUN19(VAR17, VAR7, VAR6.VAR18 - VAR7, 0);
        fprintf(VAR17, "");
    }
    if (VAR16 & VAR32)
    {
        fprintf(VAR17, "", VAR6.VAR22, VAR6.VAR24);
    }
}