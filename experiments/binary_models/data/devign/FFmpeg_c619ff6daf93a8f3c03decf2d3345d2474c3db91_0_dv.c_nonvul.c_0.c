static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = FUN2(VAR2);
    const VAR8 *VAR9 = VAR4->VAR9;
    const VAR8 *VAR10 = VAR4->VAR10;
    int VAR11 = VAR4->VAR11;
    int VAR12 = VAR4->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17;
    FUN3(VAR18, VAR2);
    FUN4(VAR18, VAR2);
    if (VAR12 > 0)
    {
        VAR19 = ((unsigned)VAR19 >> VAR12) | (VAR4->VAR20 << (sizeof(VAR19) * 8 - VAR12));
        VAR21 -= VAR12;
        VAR4->VAR12 = 0;
    }
    for (;;)
    {
        FUN5("", VAR11, FUN6(VAR18, VAR2, 16), VAR21);
        VAR17 = FUN7(VAR19, VAR22);
        VAR16 = VAR23[VAR17].VAR24;
        if (VAR16 < 0)
        {
            VAR17 = FUN7((unsigned)VAR19 << VAR22, -VAR16) + VAR23[VAR17].VAR13;
            VAR16 = VAR22 - VAR16;
        }
        VAR13 = VAR23[VAR17].VAR13;
        VAR15 = VAR23[VAR17].VAR15;
        if (VAR21 + VAR16 > VAR7)
        {
            VAR4->VAR12 = VAR7 - VAR21;
            VAR4->VAR20 = FUN7(VAR19, VAR4->VAR12);
            VAR21 = VAR7;
            break;
        }
        VAR21 += VAR16;
        FUN5("", VAR15, VAR13);
        VAR11 += VAR15;
        if (VAR11 >= 64)
            break;
        assert(VAR13);
        VAR14 = VAR9[VAR11];
        VAR6[VAR14] = VAR13 << VAR10[VAR14];
        FUN4(VAR18, VAR2);
    }
    FUN8(VAR18, VAR2);
    VAR4->VAR11 = VAR11;
}