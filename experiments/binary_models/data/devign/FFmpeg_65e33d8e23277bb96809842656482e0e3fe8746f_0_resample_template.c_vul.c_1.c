static int FUN1(VAR1)(VAR2 *VAR3, void *VAR4, const void *VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR4;
    const VAR8 *VAR10 = VAR5;
    int VAR11;
    int VAR12 = VAR3->VAR12;
    int VAR13 = VAR3->VAR13;
    int VAR14 = 0;
    while (VAR12 >= VAR3->VAR15)
    {
        VAR14++;
        VAR12 -= VAR3->VAR15;
    }
    for (VAR11 = 0; VAR11 < VAR6; VAR11++)
    {
        VAR16 *VAR17 = ((VAR16 *)VAR3->VAR18) + VAR3->VAR19 * VAR12;
        FELEM2 VAR20 = VAR21;
        int VAR22;
        for (VAR22 = 0; VAR22 < VAR3->VAR23; VAR22++)
        {
            VAR20 += VAR10[VAR14 + VAR22] * (VAR24)VAR17[VAR22];
        }
        FUN2(VAR9[VAR11], VAR20);
        VAR13 += VAR3->VAR25;
        VAR12 += VAR3->VAR26;
        if (VAR13 >= VAR3->VAR27)
        {
            VAR13 -= VAR3->VAR27;
            VAR12++;
        }
        while (VAR12 >= VAR3->VAR15)
        {
            VAR14++;
            VAR12 -= VAR3->VAR15;
        }
    }
    if (VAR7)
    {
        VAR3->VAR13 = VAR13;
        VAR3->VAR12 = VAR12;
    }
    return VAR14;
}