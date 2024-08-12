static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15;
    int VAR16;
    VAR10 = FUN2(VAR9);
    VAR7--;
    VAR15 = VAR10 >> 6;
    switch (VAR15)
    {
    case 0:
    case 2:
        VAR11 = FUN2(VAR9);
        VAR7--;
        VAR13 = FUN3(VAR9, &VAR7);
        VAR14 = FUN3(VAR9, &VAR7);
        VAR12 = FUN2(VAR9);
        VAR7--;
        VAR4->VAR17 = VAR7;
        break;
    case 1:
        VAR11 = FUN2(VAR9);
        VAR7--;
        if (FUN4(VAR6, VAR7 + 9) < 0)
            return FUN5(VAR18);
        VAR6->VAR19[0] = 0;
        FUN6(VAR6->VAR19 + 1, 1);
        FUN6(VAR6->VAR19 + 5, 0);
        FUN7(VAR9, VAR6->VAR19 + 9, VAR7);
        VAR4->VAR17 = 0;
        return 0;
    case 3:
        VAR13 = FUN3(VAR9, &VAR7);
        VAR14 = FUN3(VAR9, &VAR7);
        VAR12 = FUN2(VAR9);
        VAR7--;
        VAR4->VAR17 = VAR7 - VAR13;
        if (FUN4(VAR6, VAR13 + 9) < 0)
            return FUN5(VAR18);
        VAR6->VAR19[0] = 0;
        FUN6(VAR6->VAR19 + 1, 1);
        FUN6(VAR6->VAR19 + 5, 0);
        FUN7(VAR9, VAR6->VAR19 + 9, VAR13);
        return 0;
    }
    if ((VAR11 & 0x7F) == 1 || VAR4->VAR20 != VAR12)
    {
        VAR4->VAR21 = ((VAR10 & 0x3F) << 1) + 1;
        VAR16 = VAR13 + 8 * VAR4->VAR21 + 1;
        VAR4->VAR22 = FUN8(VAR4->VAR22, VAR16);
        VAR4->VAR23 = VAR16;
        VAR4->VAR24 = 8 * VAR4->VAR21 + 1;
        VAR4->VAR25 = 0;
        VAR4->VAR20 = VAR12;
        VAR4->VAR26 = FUN9(VAR9);
    }
    if (VAR15 == 2)
    {
        VAR7 = FUN10(VAR7, VAR14);
        VAR14 = VAR13 - VAR14;
    }
    if (++VAR4->VAR25 > VAR4->VAR21)
        return 1;
    FUN6(VAR4->VAR22 - 7 + 8 * VAR4->VAR25, 1);
    FUN6(VAR4->VAR22 - 3 + 8 * VAR4->VAR25, VAR4->VAR24 - 8 * VAR4->VAR21 - 1);
    if (VAR4->VAR24 + VAR7 > VAR4->VAR23)
        return 1;
    if (FUN7(VAR9, VAR4->VAR22 + VAR4->VAR24, VAR7) != VAR7)
        return FUN5(VAR18);
    VAR4->VAR24 += VAR7, VAR4->VAR17 -= VAR7;
    if (VAR15 == 2 || (VAR4->VAR24) == VAR4->VAR23)
    {
        VAR4->VAR22[0] = VAR4->VAR25 - 1;
        if (FUN4(VAR6, VAR4->VAR24 - 8 * (VAR4->VAR21 - VAR4->VAR25)) < 0)
            return FUN5(VAR27);
        memcpy(VAR6->VAR19, VAR4->VAR22, 1 + 8 * VAR4->VAR25);
        memcpy(VAR6->VAR19 + 1 + 8 * VAR4->VAR25, VAR4->VAR22 + 1 + 8 * VAR4->VAR21, VAR4->VAR24 - 1 - 8 * VAR4->VAR21);
        VAR6->VAR28 = VAR29;
        VAR6->VAR14 = VAR4->VAR26;
        return 0;
    }
    return 1;
}