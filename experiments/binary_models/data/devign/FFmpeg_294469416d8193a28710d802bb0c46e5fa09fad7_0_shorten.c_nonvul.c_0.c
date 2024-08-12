static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int32_t VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    const int *VAR13;
    if (VAR3 == VAR14)
    {
        VAR7 = FUN2(&VAR2->VAR15, VAR16);
        if ((unsigned)VAR7 > VAR2->VAR17)
        {
            FUN3(VAR2->VAR18, VAR19, "", VAR7);
            return FUN4(VAR20);
        }
        for (VAR11 = 0; VAR11 < VAR7; VAR11++)
            VAR2->VAR13[VAR11] = FUN5(&VAR2->VAR15, VAR21);
        VAR13 = VAR2->VAR13;
        VAR9 = VAR21;
    }
    else
    {
        VAR7 = VAR3;
        if (VAR7 >= FUN6(VAR22))
        {
            FUN3(VAR2->VAR18, VAR19, "", VAR7);
            return VAR23;
        }
        VAR13 = VAR22[VAR7];
        VAR9 = 0;
    }
    if (VAR3 == VAR14 && VAR6)
        for (VAR11 = -VAR7; VAR11 < 0; VAR11++)
            VAR2->VAR24[VAR4][VAR11] -= VAR6;
    VAR10 = VAR7 ? (VAR3 == VAR14 ? VAR2->VAR25 : 0) : VAR6;
    for (VAR11 = 0; VAR11 < VAR2->VAR26; VAR11++)
    {
        VAR8 = VAR10;
        for (VAR12 = 0; VAR12 < VAR7; VAR12++)
            VAR8 += VAR13[VAR12] * VAR2->VAR24[VAR4][VAR11 - VAR12 - 1];
        VAR2->VAR24[VAR4][VAR11] = FUN5(&VAR2->VAR15, VAR5) + (VAR8 >> VAR9);
    }
    if (VAR3 == VAR14 && VAR6)
        for (VAR11 = 0; VAR11 < VAR2->VAR26; VAR11++)
            VAR2->VAR24[VAR4][VAR11] += VAR6;
    return 0;
}