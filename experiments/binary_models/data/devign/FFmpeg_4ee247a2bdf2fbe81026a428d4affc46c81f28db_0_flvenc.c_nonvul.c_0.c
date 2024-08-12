static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9[VAR4->VAR10]->VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    unsigned VAR15;
    int VAR16 = VAR4->VAR16;
    VAR17 *VAR18 = NULL;
    int VAR19, VAR20;
    if (VAR8->VAR21 == VAR22 || VAR8->VAR21 == VAR23 || VAR8->VAR21 == VAR24)
        VAR20 = 2;
    else if (VAR8->VAR21 == VAR25)
        VAR20 = 5;
    else
        VAR20 = 1;
    if (VAR8->VAR26 == VAR27)
    {
        FUN2(VAR6, VAR28);
        VAR19 = VAR8->VAR29;
        if (VAR19 == 0)
        {
            FUN3(VAR8, VAR30, "", VAR8->VAR21);
            return -1;
        }
        VAR19 |= VAR4->VAR19 & VAR31 ? VAR32 : VAR33;
    }
    else
    {
        assert(VAR8->VAR26 == VAR34);
        VAR19 = FUN4(VAR8);
        assert(VAR16);
        FUN2(VAR6, VAR35);
    }
    if (VAR8->VAR21 == VAR25)
    {
        if (VAR8->VAR36 > 0 && *(VAR17 *)VAR8->VAR37 != 1)
        {
            if (FUN5(VAR4->VAR18, &VAR18, &VAR16) < 0)
                return -1;
        }
    }
    if (!VAR13->VAR38 && VAR4->VAR39 < 0)
        VAR13->VAR38 = -VAR4->VAR39;
    VAR15 = VAR4->VAR39 + VAR13->VAR38;
    if (VAR8->VAR21 == VAR40 && VAR15 - VAR13->VAR41 > 160)
    {
        FUN3(VAR2, VAR42, ""
                                  ""
                                  "");
    }
    if (VAR13->VAR41 < VAR15)
        VAR13->VAR41 = VAR15;
    FUN6(VAR6, VAR16 + VAR20);
    FUN6(VAR6, VAR15);
    FUN2(VAR6, (VAR15 >> 24) & 0x7F);
    FUN6(VAR6, VAR13->VAR43);
    FUN2(VAR6, VAR19);
    if (VAR8->VAR21 == VAR22)
        FUN2(VAR6, 0);
    if (VAR8->VAR21 == VAR23)
        FUN2(VAR6, VAR8->VAR36 ? VAR8->VAR37[0] : 0);
    else if (VAR8->VAR21 == VAR24)
        FUN2(VAR6, 1);
    else if (VAR8->VAR21 == VAR25)
    {
        FUN2(VAR6, 1);
        FUN6(VAR6, VAR4->VAR44 - VAR4->VAR39);
    }
    FUN7(VAR6, VAR18 ? VAR18 : VAR4->VAR18, VAR16);
    FUN8(VAR6, VAR16 + VAR20 + 11);
    VAR13->VAR45 = FUN9(VAR13->VAR45, VAR4->VAR44 + VAR13->VAR38 + VAR4->VAR45);
    FUN10(VAR6);
    FUN11(VAR18);
    return VAR6->VAR46;
}