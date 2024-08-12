static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    VAR5 = FUN2(&VAR2->VAR6, 2);
    switch (VAR5)
    {
    case 0:
        VAR2->VAR7 = VAR8;
        break;
    case 1:
        VAR2->VAR7 = VAR8;
        break;
    case 2:
        VAR2->VAR7 = VAR9;
        break;
    case 3:
        VAR2->VAR7 = VAR10;
        break;
    default:
        FUN3(VAR2->VAR11, VAR12, "");
        return -1;
    }
    if (FUN2(&VAR2->VAR6, 1))
    {
        FUN3(VAR2->VAR11, VAR12, "");
        return -1;
    }
    VAR2->VAR13 = FUN2(&VAR2->VAR6, 5);
    if (VAR2->VAR13 == 0)
    {
        FUN3(VAR2->VAR11, VAR12, "");
        return -1;
    }
    if (VAR2->VAR11->VAR14 == 0x20200002)
        VAR3 = FUN2(&VAR2->VAR6, 16);
    else
        VAR3 = FUN2(&VAR2->VAR6, 8);
    for (VAR5 = 0; VAR5 < 6; VAR5++)
    {
        if (VAR2->VAR15 * VAR2->VAR16 < VAR17[VAR5])
            break;
    }
    VAR4 = FUN2(&VAR2->VAR6, VAR18[VAR5]);
    VAR2->VAR19 = VAR4 % VAR2->VAR15;
    VAR2->VAR20 = VAR4 / VAR2->VAR15;
    VAR2->VAR21 = FUN4(&VAR2->VAR6);
    VAR2->VAR22 = 1;
    VAR2->VAR23 = 1;
    VAR2->VAR24 = VAR2->VAR7 == VAR8;
    VAR2->VAR25 = 1;
    VAR2->VAR26 = 1;
    if (VAR2->VAR11->VAR27 & VAR28)
    {
        FUN3(VAR2->VAR11, VAR29, "", VAR3, VAR2->VAR19, VAR2->VAR20, VAR2->VAR7, VAR2->VAR13, VAR2->VAR21);
    }
    if (VAR2->VAR7 == VAR10)
    {
        FUN3(VAR2->VAR11, VAR12, "");
        return -1;
    }
    return VAR2->VAR15 * VAR2->VAR16 - VAR4;
}