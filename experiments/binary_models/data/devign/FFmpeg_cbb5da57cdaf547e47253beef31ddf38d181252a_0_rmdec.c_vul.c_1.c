static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, int VAR11, int *VAR12)
{
    int VAR13, VAR14, VAR15, VAR16, VAR17;
    int VAR18;
    VAR13 = FUN2(VAR4);
    VAR11--;
    VAR18 = VAR13 >> 6;
    if (VAR18 != 3)
    {
        VAR14 = FUN2(VAR4);
        VAR11--;
    }
    if (VAR18 != 1)
    {
        VAR16 = FUN3(VAR4, &VAR11);
        VAR17 = FUN3(VAR4, &VAR11);
        VAR15 = FUN2(VAR4);
        VAR11--;
    }
    if (VAR11 < 0)
        return -1;
    VAR6->VAR19 = VAR11;
    if (VAR18 & 1)
    {
        if (VAR18 == 3)
            VAR11 = VAR16;
        if (VAR6->VAR19 < VAR11)
            return -1;
        VAR6->VAR19 -= VAR11;
        if (FUN4(VAR10, VAR11 + 9) < 0)
            return FUN5(VAR20);
        VAR10->VAR21[0] = 0;
        FUN6(VAR10->VAR21 + 1, 1);
        FUN6(VAR10->VAR21 + 5, 0);
        FUN7(VAR4, VAR10->VAR21 + 9, VAR11);
        return 0;
    }
    *VAR12 = VAR14;
    if ((VAR14 & 0x7F) == 1 || VAR8->VAR22 != VAR15)
    {
        VAR8->VAR23 = ((VAR13 & 0x3F) << 1) + 1;
        VAR8->VAR24 = VAR16 + 8 * VAR8->VAR23 + 1;
        FUN8(&VAR8->VAR10);
        if (FUN4(&VAR8->VAR10, VAR8->VAR24) < 0)
            return FUN5(VAR25);
        VAR8->VAR26 = 8 * VAR8->VAR23 + 1;
        VAR8->VAR27 = 0;
        VAR8->VAR22 = VAR15;
        VAR8->VAR28 = FUN9(VAR4);
    }
    if (VAR18 == 2)
        VAR11 = FUN10(VAR11, VAR17);
    if (++VAR8->VAR27 > VAR8->VAR23)
        return 1;
    FUN6(VAR8->VAR10.VAR21 - 7 + 8 * VAR8->VAR27, 1);
    FUN6(VAR8->VAR10.VAR21 - 3 + 8 * VAR8->VAR27, VAR8->VAR26 - 8 * VAR8->VAR23 - 1);
    if (VAR8->VAR26 + VAR11 > VAR8->VAR24)
        return 1;
    if (FUN7(VAR4, VAR8->VAR10.VAR21 + VAR8->VAR26, VAR11) != VAR11)
        return FUN5(VAR20);
    VAR8->VAR26 += VAR11;
    VAR6->VAR19 -= VAR11;
    if (VAR18 == 2 || (VAR8->VAR26) == VAR8->VAR24)
    {
        VAR8->VAR10.VAR21[0] = VAR8->VAR27 - 1;
        *VAR10 = VAR8->VAR10;
        VAR8->VAR10.VAR21 = NULL;
        VAR8->VAR10.VAR29 = 0;
        if (VAR8->VAR23 != VAR8->VAR27)
            memmove(VAR10->VAR21 + 1 + 8 * VAR8->VAR27, VAR10->VAR21 + 1 + 8 * VAR8->VAR23, VAR8->VAR26 - 1 - 8 * VAR8->VAR23);
        VAR10->VAR29 = VAR8->VAR26 + 8 * (VAR8->VAR27 - VAR8->VAR23);
        VAR10->VAR30 = VAR31;
        VAR10->VAR17 = VAR8->VAR28;
        return 0;
    }
    return 1;