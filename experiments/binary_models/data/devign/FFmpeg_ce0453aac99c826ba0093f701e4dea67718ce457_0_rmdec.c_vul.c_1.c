static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, int VAR11)
{
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17;
    VAR12 = FUN2(VAR4);
    VAR11--;
    VAR17 = VAR12 >> 6;
    if (VAR17 != 3)
    {
        VAR13 = FUN2(VAR4);
        VAR11--;
    }
    if (VAR17 != 1)
    {
        VAR15 = FUN3(VAR4, &VAR11);
        VAR16 = FUN3(VAR4, &VAR11);
        VAR14 = FUN2(VAR4);
        VAR11--;
    }
    if (VAR11 < 0)
        return -1;
    VAR6->VAR18 = VAR11;
    if (VAR17 & 1)
    {
        if (VAR17 == 3)
            VAR11 = VAR15;
        if (VAR6->VAR18 < VAR11)
            return -1;
        VAR6->VAR18 -= VAR11;
        if (FUN4(VAR10, VAR11 + 9) < 0)
            return FUN5(VAR19);
        VAR10->VAR20[0] = 0;
        FUN6(VAR10->VAR20 + 1, 1);
        FUN6(VAR10->VAR20 + 5, 0);
        FUN7(VAR4, VAR10->VAR20 + 9, VAR11);
        return 0;
    }
    if ((VAR13 & 0x7F) == 1 || VAR8->VAR21 != VAR14)
    {
        VAR8->VAR22 = ((VAR12 & 0x3F) << 1) + 1;
        VAR8->VAR23 = VAR15 + 8 * VAR8->VAR22 + 1;
        FUN8(&VAR8->VAR10);
        if (FUN4(&VAR8->VAR10, VAR8->VAR23) < 0)
            return FUN5(VAR24);
        VAR8->VAR25 = 8 * VAR8->VAR22 + 1;
        VAR8->VAR26 = 0;
        VAR8->VAR21 = VAR14;
        VAR8->VAR27 = FUN9(VAR4);
    }
    if (VAR17 == 2)
        VAR11 = FUN10(VAR11, VAR16);
    if (++VAR8->VAR26 > VAR8->VAR22)
        return 1;
    FUN6(VAR8->VAR10.VAR20 - 7 + 8 * VAR8->VAR26, 1);
    FUN6(VAR8->VAR10.VAR20 - 3 + 8 * VAR8->VAR26, VAR8->VAR25 - 8 * VAR8->VAR22 - 1);
    if (VAR8->VAR25 + VAR11 > VAR8->VAR23)
        return 1;
    if (FUN7(VAR4, VAR8->VAR10.VAR20 + VAR8->VAR25, VAR11) != VAR11)
        return FUN5(VAR19);
    VAR8->VAR25 += VAR11;
    VAR6->VAR18 -= VAR11;
    if (VAR17 == 2 || (VAR8->VAR25) == VAR8->VAR23)
    {
        VAR8->VAR10.VAR20[0] = VAR8->VAR26 - 1;
        *VAR10 = VAR8->VAR10;
        VAR8->VAR10.VAR20 = VAR8->VAR10.VAR28 = 0;
        if (VAR8->VAR22 != VAR8->VAR26)
            memmove(VAR10->VAR20 + 1 + 8 * VAR8->VAR26, VAR10->VAR20 + 1 + 8 * VAR8->VAR22, VAR8->VAR25 - 1 - 8 * VAR8->VAR22);
        VAR10->VAR28 += 8 * (VAR8->VAR26 - VAR8->VAR22);
        VAR10->VAR29 = VAR30;
        VAR10->VAR16 = VAR8->VAR27;
        return 0;
    }
    return 1;
}