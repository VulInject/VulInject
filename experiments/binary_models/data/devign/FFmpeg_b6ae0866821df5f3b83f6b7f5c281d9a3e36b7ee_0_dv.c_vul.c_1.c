static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = VAR2->VAR8;
    const VAR9 *VAR10 = VAR4->VAR10;
    const VAR11 *VAR12 = VAR4->VAR12;
    int VAR13 = VAR4->VAR13;
    int VAR14 = VAR4->VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    FUN2(VAR19, VAR2);
    FUN3(VAR19, VAR2);
    if (VAR14 > 0)
    {
        VAR20 = ((unsigned)VAR20 >> VAR14) | (VAR4->VAR21 << (sizeof(VAR20) * 8 - VAR14));
        VAR22 -= VAR14;
        VAR4->VAR14 = 0;
    }
    for (;;)
    {
        FUN4(NULL, "", VAR13, FUN5(VAR19, VAR2, 16), VAR22);
        VAR18 = FUN6(VAR20, VAR23);
        VAR17 = VAR24[VAR18].VAR25;
        if (VAR17 < 0)
        {
            VAR18 = FUN6((unsigned)VAR20 << VAR23, -VAR17) + VAR24[VAR18].VAR15;
            VAR17 = VAR23 - VAR17;
        }
        VAR15 = VAR24[VAR18].VAR15;
        VAR16 = VAR24[VAR18].VAR16;
        if (VAR22 + VAR17 > VAR7)
        {
            VAR4->VAR14 = VAR7 - VAR22;
            VAR4->VAR21 = FUN6(VAR20, VAR4->VAR14);
            VAR22 = VAR7;
            break;
        }
        VAR22 += VAR17;
        FUN4(NULL, "", VAR16, VAR15);
        VAR13 += VAR16;
        if (VAR13 >= 64)
            break;
        VAR15 = (VAR15 * VAR12[VAR13] + (1 << (VAR26 - 1))) >> VAR26;
        VAR6[VAR10[VAR13]] = VAR15;
        FUN3(VAR19, VAR2);
    }
    FUN7(VAR19, VAR2);
    VAR4->VAR13 = VAR13;
}