static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, int VAR11, int *VAR12, VAR13 *VAR14)
{
    int VAR15, VAR16, VAR17, VAR18, VAR19;
    int VAR20;
    VAR15 = FUN2(VAR4);
    VAR11--;
    VAR20 = VAR15 >> 6;
    if (VAR20 != 3)
    {
        VAR16 = FUN2(VAR4);
        VAR11--;
    }
    if (VAR20 != 1)
    {
        VAR18 = FUN3(VAR4, &VAR11);
        VAR19 = FUN3(VAR4, &VAR11);
        VAR17 = FUN2(VAR4);
        VAR11--;
    }
    if (VAR11 < 0)
        return -1;
    VAR6->VAR21 = VAR11;
    if (VAR20 & 1)
    {
        if (VAR20 == 3)
        {
            VAR11 = VAR18;
            *VAR14 = VAR19;
        }
        if (VAR6->VAR21 < VAR11)
            return -1;
        VAR6->VAR21 -= VAR11;
        if (FUN4(VAR10, VAR11 + 9) < 0)
            return FUN5(VAR22);
        VAR10->VAR23[0] = 0;
        FUN6(VAR10->VAR23 + 1, 1);
        FUN6(VAR10->VAR23 + 5, 0);
        FUN7(VAR4, VAR10->VAR23 + 9, VAR11);
        return 0;
    }
    *VAR12 = VAR16;
    if ((VAR16 & 0x7F) == 1 || VAR8->VAR24 != VAR17)
    {
        VAR8->VAR25 = ((VAR15 & 0x3F) << 1) + 1;
        VAR8->VAR26 = VAR18 + 8 * VAR8->VAR25 + 1;
        FUN8(&VAR8->VAR10);
        if (FUN4(&VAR8->VAR10, VAR8->VAR26) < 0)
            return FUN5(VAR27);
        VAR8->VAR28 = 8 * VAR8->VAR25 + 1;
        VAR8->VAR29 = 0;
        VAR8->VAR24 = VAR17;
        VAR8->VAR30 = FUN9(VAR4);
    }
    if (VAR20 == 2)
        VAR11 = FUN10(VAR11, VAR19);
    if (++VAR8->VAR29 > VAR8->VAR25)
        return 1;
    FUN6(VAR8->VAR10.VAR23 - 7 + 8 * VAR8->VAR29, 1);
    FUN6(VAR8->VAR10.VAR23 - 3 + 8 * VAR8->VAR29, VAR8->VAR28 - 8 * VAR8->VAR25 - 1);
    if (VAR8->VAR28 + VAR11 > VAR8->VAR26)
        return 1;
    if (FUN7(VAR4, VAR8->VAR10.VAR23 + VAR8->VAR28, VAR11) != VAR11)
        return FUN5(VAR22);
    VAR8->VAR28 += VAR11;
    VAR6->VAR21 -= VAR11;
    if (VAR20 == 2 || VAR8->VAR28 == VAR8->VAR26)
    {
        VAR8->VAR10.VAR23[0] = VAR8->VAR29 - 1;
        *VAR10 = VAR8->VAR10;
        VAR8->VAR10.VAR23 = NULL;
        VAR8->VAR10.VAR31 = 0;
        if (VAR8->VAR25 != VAR8->VAR29)
            memmove(VAR10->VAR23 + 1 + 8 * VAR8->VAR29, VAR10->VAR23 + 1 + 8 * VAR8->VAR25, VAR8->VAR28 - 1 - 8 * VAR8->VAR25);
        VAR10->VAR31 = VAR8->VAR28 + 8 * (VAR8->VAR29 - VAR8->VAR25);
        VAR10->VAR32 = VAR33;
        VAR10->VAR19 = VAR8->VAR30;
        VAR8->VAR25 = 0;
        return 0;
    }
    return 1;
}