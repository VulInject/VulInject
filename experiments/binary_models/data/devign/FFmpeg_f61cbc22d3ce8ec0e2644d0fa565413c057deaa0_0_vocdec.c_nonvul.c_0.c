FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR6->VAR13;
    VAR14 *VAR15 = VAR2->VAR15;
    VocType VAR16;
    int VAR17, VAR18 = -1;
    int VAR19 = 0;
    int VAR20 = 1;
    while (!VAR9->VAR21)
    {
        VAR16 = FUN2(VAR15);
        if (VAR16 == VAR22)
            return FUN3(VAR23);
        VAR9->VAR21 = FUN4(VAR15);
        if (!VAR9->VAR21)
        {
            if (FUN5(VAR2->VAR15))
                return FUN3(VAR23);
            VAR9->VAR21 = FUN6(VAR15) - FUN7(VAR15);
        }
        VAR7 -= 4;
        switch (VAR16)
        {
        case VAR24:
            VAR12->VAR19 = 1000000 / (256 - FUN2(VAR15));
            if (VAR19)
                VAR12->VAR19 = VAR19;
            VAR12->VAR20 = VAR20;
            VAR18 = FUN2(VAR15);
            VAR12->VAR25 = FUN8(VAR12->VAR26);
            VAR9->VAR21 -= 2;
            VAR7 -= 2;
            VAR20 = 1;
            break;
        case VAR27:
            break;
        case VAR28:
            VAR19 = FUN9(VAR15);
            FUN2(VAR15);
            VAR20 = FUN2(VAR15) + 1;
            VAR19 = 256000000 / (VAR20 * (65536 - VAR19));
            VAR9->VAR21 = 0;
            VAR7 -= 4;
            break;
        case VAR29:
            VAR12->VAR19 = FUN10(VAR15);
            VAR12->VAR25 = FUN2(VAR15);
            VAR12->VAR20 = FUN2(VAR15);
            VAR18 = FUN9(VAR15);
            FUN11(VAR15, 4);
            VAR9->VAR21 -= 12;
            VAR7 -= 12;
            break;
        default:
            FUN11(VAR15, VAR9->VAR21);
            VAR7 -= VAR9->VAR21;
            VAR9->VAR21 = 0;
            break;
        }
    }
    if (VAR18 >= 0)
    {
        VAR18 = FUN12(VAR30, VAR18);
        if (VAR12->VAR26 == VAR31)
            VAR12->VAR26 = VAR18;
        else if (VAR12->VAR26 != VAR18)
            FUN13(VAR2, VAR32, "");
        if (VAR12->VAR26 == VAR31)
        {
            if (VAR2->VAR33 == VAR31)
            {
                FUN13(VAR2, VAR34, "");
                return FUN3(VAR35);
            }
            FUN13(VAR2, VAR32, "");
        }
    }
    VAR12->VAR36 = VAR12->VAR19 * VAR12->VAR25;
    if (VAR7 <= 0)
        VAR7 = 2048;
    VAR17 = FUN14(VAR9->VAR21, VAR7);
    VAR9->VAR21 -= VAR17;
    return FUN15(VAR15, VAR4, VAR17);
}