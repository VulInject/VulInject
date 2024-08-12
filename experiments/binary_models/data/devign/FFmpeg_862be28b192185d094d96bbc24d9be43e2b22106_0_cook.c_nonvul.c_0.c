static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    if (VAR2->VAR9 <= 0)
    {
        FUN2(VAR2, VAR10, "");
        return -1;
    }
    else
    {
        FUN2(VAR2, VAR11, "", VAR2->VAR9);
        if (VAR2->VAR9 >= 8)
        {
            VAR4->VAR12 = FUN3(FUN4(&VAR7));
            VAR4->VAR13 = FUN5(FUN6(&VAR7));
            VAR4->VAR14 = FUN5(FUN6(&VAR7));
        }
        if (VAR2->VAR9 >= 16)
        {
            FUN4(&VAR7);
            VAR4->VAR15 = FUN5(FUN6(&VAR7));
            VAR4->VAR16 = FUN5(FUN6(&VAR7));
        }
    }
    VAR4->VAR17 = VAR2->VAR17;
    VAR4->VAR18 = VAR2->VAR19;
    VAR4->VAR20 = VAR2->VAR20;
    VAR4->VAR21 = 1;
    VAR4->VAR22 = VAR4->VAR13 / VAR4->VAR18;
    VAR4->VAR23 = VAR2->VAR24 * 8;
    VAR4->VAR25 = 5;
    VAR4->VAR26 = VAR4->VAR14;
    FUN2(NULL, VAR11, "", VAR4->VAR12);
    VAR4->VAR27 = 0;
    switch (VAR4->VAR12)
    {
    case VAR28:
        if (VAR4->VAR18 != 1)
        {
            FUN2(VAR2, VAR10, "");
            return -1;
        }
        FUN2(VAR2, VAR11, "");
        break;
    case VAR29:
        if (VAR4->VAR18 != 1)
        {
            VAR4->VAR23 = VAR4->VAR23 / 2;
        }
        FUN2(VAR2, VAR11, "");
        break;
    case VAR30:
        if (VAR4->VAR18 != 2)
        {
            FUN2(VAR2, VAR10, "");
            return -1;
        }
        FUN2(VAR2, VAR11, "");
        if (VAR2->VAR9 >= 16)
        {
            VAR4->VAR26 = VAR4->VAR14 + VAR4->VAR15;
            VAR4->VAR27 = 1;
        }
        if (VAR4->VAR22 > 256)
        {
            VAR4->VAR25 = 6;
        }
        if (VAR4->VAR22 > 512)
        {
            VAR4->VAR25 = 7;
        }
        break;
    case VAR31:
        FUN2(VAR2, VAR10, "");
        return -1;
        break;
    default:
        FUN2(VAR2, VAR10, "");
        return -1;
        break;
    }
    VAR4->VAR32 = VAR4->VAR22;
    VAR4->VAR33 = (1 << VAR4->VAR25);
    FUN7(VAR4);
    FUN8(VAR4);
    FUN9(VAR4);
    if (FUN10(VAR4) != 0)
        return -1;
    if (VAR2->VAR24 >= VAR34 / 2)
        return -1;
    if (VAR4->VAR18 == 2 && VAR4->VAR27 == 0)
    {
        VAR4->VAR35 = FUN11(VAR2->VAR24 / 2 + FUN12(VAR2->VAR24 / 2) + VAR36);
    }
    else
    {
        VAR4->VAR35 = FUN11(VAR2->VAR24 + FUN13(VAR2->VAR24) + VAR36);
    }
    if (VAR4->VAR35 == NULL)
        return -1;
    VAR4->VAR37[0] = &VAR4->VAR38;
    VAR4->VAR37[1] = &VAR4->VAR39;
    VAR4->VAR40[0] = &VAR4->VAR41;
    VAR4->VAR40[1] = &VAR4->VAR42;
    if (FUN14(VAR4) == 0)
        return -1;
    if (VAR4->VAR26 > 53)
    {
        FUN2(VAR2, VAR10, "");
        return -1;
    }
    if (VAR4->VAR14 > 50)
    {
        FUN2(VAR2, VAR10, "");
        return -1;
    }
    if ((VAR4->VAR22 == 256) || (VAR4->VAR22 == 512) || (VAR4->VAR22 == 1024))
    {
    }
    else
    {
        FUN2(VAR2, VAR10, "", VAR4->VAR22);
        return -1;
    }
    FUN15(VAR4);
    return 0;
}