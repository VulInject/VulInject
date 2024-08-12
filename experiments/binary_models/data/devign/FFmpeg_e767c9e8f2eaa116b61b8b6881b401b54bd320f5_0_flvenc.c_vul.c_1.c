static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9[VAR4->VAR10]->VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    VAR15 *VAR16 = VAR2->VAR9[VAR4->VAR10]->VAR14;
    unsigned VAR17;
    int VAR18 = VAR4->VAR18;
    VAR19 *VAR20 = NULL;
    int VAR21 = 0, VAR22;
    if (VAR8->VAR23 == VAR24 || VAR8->VAR23 == VAR25 || VAR8->VAR23 == VAR26)
        VAR22 = 2;
    else if (VAR8->VAR23 == VAR27)
        VAR22 = 5;
    else
        VAR22 = 1;
    if (VAR13->VAR28 == VAR29)
        VAR13->VAR28 = -VAR4->VAR30;
    if (VAR4->VAR30 < -VAR13->VAR28)
    {
        FUN2(VAR2, VAR31, "");
        return FUN3(VAR32);
    }
    VAR17 = VAR4->VAR30 + VAR13->VAR28;
    if (VAR2->VAR33 & VAR34)
    {
        FUN4(VAR2, VAR17);
        VAR2->VAR33 &= ~VAR34;
    }
    switch (VAR8->VAR35)
    {
    case VAR36:
        FUN5(VAR6, VAR37);
        VAR21 = VAR8->VAR38;
        if (VAR21 == 0)
        {
            FUN2(VAR2, VAR39, "", VAR8->VAR23);
            return -1;
        }
        VAR21 |= VAR4->VAR21 & VAR40 ? VAR41 : VAR42;
        break;
    case VAR43:
        VAR21 = FUN6(VAR2, VAR8);
        assert(VAR18);
        FUN5(VAR6, VAR44);
        break;
    case VAR45:
        FUN5(VAR6, VAR46);
        break;
    default:
        return FUN3(VAR32);
    }
    if (VAR8->VAR23 == VAR27)
        if (VAR8->VAR47 > 0 && *(VAR19 *)VAR8->VAR48 != 1)
            if (FUN7(VAR4->VAR20, &VAR20, &VAR18) < 0)
                return -1;
    if (VAR8->VAR23 == VAR49 && VAR17 - VAR16->VAR50 > 160)
        FUN2(VAR2, VAR31, ""
                                  ""
                                  "");
    if (VAR16->VAR50 < VAR17)
        VAR16->VAR50 = VAR17;
    FUN8(VAR6, VAR18 + VAR22);
    FUN8(VAR6, VAR17);
    FUN5(VAR6, (VAR17 >> 24) & 0x7F);
    FUN8(VAR6, VAR13->VAR51);
    if (VAR8->VAR35 == VAR45)
    {
        int VAR52;
        int64_t VAR53 = FUN9(VAR6);
        FUN5(VAR6, VAR54);
        FUN10(VAR6, "");
        FUN5(VAR6, VAR55);
        FUN11(VAR6, 2);
        FUN10(VAR6, "");
        FUN5(VAR6, VAR54);
        FUN10(VAR6, "");
        FUN10(VAR6, "");
        FUN5(VAR6, VAR54);
        FUN10(VAR6, VAR4->VAR20);
        FUN10(VAR6, "");
        FUN5(VAR6, VAR56);
        VAR52 = FUN9(VAR6) - VAR53;
        FUN12(VAR6, VAR53 - 10, VAR57);
        FUN8(VAR6, VAR52);
        FUN12(VAR6, VAR52 + 10 - 3, VAR58);
        FUN11(VAR6, VAR52 + 11);
    }
    else
    {
        FUN5(VAR6, VAR21);
        if (VAR8->VAR23 == VAR24 || VAR8->VAR23 == VAR25)
        {
            if (VAR8->VAR47)
                FUN5(VAR6, VAR8->VAR48[0]);
            else
                FUN5(VAR6, ((FUN13(VAR8->VAR59, 16) - VAR8->VAR59) << 4) | (FUN13(VAR8->VAR60, 16) - VAR8->VAR60));
        }
        else if (VAR8->VAR23 == VAR26)
            FUN5(VAR6, 1);
        else if (VAR8->VAR23 == VAR27)
        {
            FUN5(VAR6, 1);
            FUN8(VAR6, VAR4->VAR61 - VAR4->VAR30);
        }
        FUN14(VAR6, VAR20 ? VAR20 : VAR4->VAR20, VAR18);
        FUN11(VAR6, VAR18 + VAR22 + 11);
        VAR13->VAR62 = FUN15(VAR13->VAR62, VAR4->VAR61 + VAR13->VAR28 + VAR4->VAR62);
    }
    FUN16(VAR20);
    return VAR6->VAR63;
}