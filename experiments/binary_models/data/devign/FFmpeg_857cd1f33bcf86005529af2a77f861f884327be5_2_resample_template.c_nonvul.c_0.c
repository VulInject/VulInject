static int FUN1(VAR1)(VAR2 *VAR3, void *VAR4, const void *VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR4;
    const VAR8 *VAR10 = VAR5;
    int VAR11;
    int VAR12 = VAR3->VAR12;
    int VAR13 = VAR3->VAR13;
    int VAR14 = VAR12 >> VAR3->VAR15;
    double VAR16 = 1.0 / VAR3->VAR17;
    VAR12 &= VAR3->VAR18;
    for (VAR11 = 0; VAR11 < VAR6; VAR11++)
    {
        VAR19 *VAR20 = ((VAR19 *)VAR3->VAR21) + VAR3->VAR22 * VAR12;
        FELEM2 VAR23 = 0, VAR24 = 0;
        int VAR25;
        for (VAR25 = 0; VAR25 < VAR3->VAR26; VAR25++)
        {
            VAR23 += VAR10[VAR14 + VAR25] * (VAR27)VAR20[VAR25];
            VAR24 += VAR10[VAR14 + VAR25] * (VAR27)VAR20[VAR25 + VAR3->VAR22];
        }
        VAR23 += (VAR24 - VAR23) * (VAR28)VAR13 / VAR3->VAR17;
        VAR23 += (VAR24 - VAR23) * VAR16 * VAR13;
        VAR23 += (VAR24 - VAR23) / VAR3->VAR17 * VAR13;
        FUN2(VAR9[VAR11], VAR23);
        VAR13 += VAR3->VAR29;
        VAR12 += VAR3->VAR30;
        if (VAR13 >= VAR3->VAR17)
        {
            VAR13 -= VAR3->VAR17;
            VAR12++;
        }
        VAR14 += VAR12 >> VAR3->VAR15;
        VAR12 &= VAR3->VAR18;
    }
    if (VAR7)
    {
        VAR3->VAR13 = VAR13;
        VAR3->VAR12 = VAR12;
    }
    return VAR14;
}