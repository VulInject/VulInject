static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    VAR3 = FUN2(&VAR2->VAR6, 16);
    if (VAR3 < 5)
        return VAR7;
    if (8 * VAR3 > FUN3(&VAR2->VAR6))
        return VAR7;
    VAR4 = FUN4(&VAR2->VAR6, 32);
    VAR4 = FUN5(VAR4);
    VAR3 -= 6;
    if (VAR2->VAR8->VAR9 & VAR10)
        FUN6(VAR2->VAR8, VAR11, "", VAR4);
    if (VAR4 == FUN7(""))
    {
        VAR2->VAR12 = 1;
        VAR5 = FUN2(&VAR2->VAR6, 8);
        VAR3--;
        FUN6(VAR2->VAR8, VAR11, "", VAR5);
        FUN8(&VAR2->VAR6, 8);
        FUN8(&VAR2->VAR6, 32);
        FUN8(&VAR2->VAR6, 32);
        VAR3 -= 10;
        goto VAR13;
    }
    if (VAR4 == FUN7(""))
    {
        int VAR14, VAR15, VAR16, VAR17;
        FUN8(&VAR2->VAR6, 8);
        VAR16 = FUN2(&VAR2->VAR6, 8);
        VAR17 = FUN2(&VAR2->VAR6, 8);
        FUN8(&VAR2->VAR6, 8);
        VAR2->VAR8->VAR18.VAR19 = FUN2(&VAR2->VAR6, 16);
        VAR2->VAR8->VAR18.VAR20 = FUN2(&VAR2->VAR6, 16);
        if (VAR2->VAR8->VAR9 & VAR21)
            FUN6(VAR2->VAR8, VAR22, "", VAR16, VAR17, VAR2->VAR8->VAR18.VAR19, VAR2->VAR8->VAR18.VAR20);
        VAR14 = FUN2(&VAR2->VAR6, 8);
        VAR15 = FUN2(&VAR2->VAR6, 8);
        if (VAR14 && VAR15)
        {
            if (VAR3 - 10 - (VAR14 * VAR15 * 3) > 0)
                VAR3 -= VAR14 * VAR15 * 3;
        }
        VAR3 -= 10;
        goto VAR13;
    }
    if (VAR4 == FUN7("") && (FUN2(&VAR2->VAR6, 8) == ''))
    {
        if (VAR2->VAR8->VAR9 & VAR21)
            FUN6(VAR2->VAR8, VAR22, "");
        FUN8(&VAR2->VAR6, 16);
        FUN8(&VAR2->VAR6, 16);
        FUN8(&VAR2->VAR6, 16);
        FUN8(&VAR2->VAR6, 8);
        VAR3 -= 7;
        goto VAR13;
    }
    if (VAR4 == FUN7(""))
    {
        if (VAR2->VAR8->VAR9 & VAR21)
            FUN6(VAR2->VAR8, VAR22, "");
        FUN8(&VAR2->VAR6, 16);
        FUN8(&VAR2->VAR6, 16);
        FUN8(&VAR2->VAR6, 16);
        FUN8(&VAR2->VAR6, 16);
        switch (FUN2(&VAR2->VAR6, 8))
        {
        case 1:
            VAR2->VAR23 = 1;
            VAR2->VAR24 = 0;
            break;
        case 2:
            VAR2->VAR23 = 1;
            VAR2->VAR24 = 1;
            break;
        default:
            FUN6(VAR2->VAR8, VAR25, "");
        }
        VAR3 -= 9;
        goto VAR13;
    }
    if ((VAR2->VAR26 == VAR27) && (VAR3 > (0x28 - 8)))
    {
        VAR4 = FUN4(&VAR2->VAR6, 32);
        VAR4 = FUN5(VAR4);
        VAR3 -= 4;
        if (VAR4 == FUN7(""))
        {
            FUN8(&VAR2->VAR6, 32);
            FUN8(&VAR2->VAR6, 32);
            FUN8(&VAR2->VAR6, 32);
            FUN8(&VAR2->VAR6, 32);
            FUN8(&VAR2->VAR6, 32);
            FUN8(&VAR2->VAR6, 32);
            FUN8(&VAR2->VAR6, 32);
            FUN8(&VAR2->VAR6, 32);
            if (VAR2->VAR8->VAR9 & VAR21)
                FUN6(VAR2->VAR8, VAR22, "");
        }
    }
VAR13:
    if (VAR3 < 0)
        FUN6(VAR2->VAR8, VAR25, "");
    while (--VAR3 > 0)
        FUN8(&VAR2->VAR6, 8);
    return 0;
}