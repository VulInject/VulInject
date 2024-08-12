static void FUN1(VAR1)(VAR2 *VAR3, void *VAR4, int VAR5, const void *VAR6, int VAR7, int VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR4;
    const VAR10 *VAR12 = VAR6;
    int VAR13;
    int VAR14 = VAR8 >> VAR3->VAR15;
    FELEM2 VAR16 = 0;
    VAR10 *VAR17 = ((VAR10 *)VAR3->VAR18) + VAR3->VAR19 * (VAR8 & VAR3->VAR20);
    if (VAR14 < 0)
    {
        for (VAR13 = 0; VAR13 < VAR3->VAR19; VAR13++)
            VAR16 += VAR12[FUN2(VAR14 + VAR13) % VAR7] * (VAR21)VAR17[VAR13];
    }
    else if (VAR3->VAR22)
    {
        FELEM2 VAR23 = 0;
        for (VAR13 = 0; VAR13 < VAR3->VAR19; VAR13++)
        {
            VAR16 += VAR12[VAR14 + VAR13] * (VAR21)VAR17[VAR13];
            VAR23 += VAR12[VAR14 + VAR13] * (VAR21)VAR17[VAR13 + VAR3->VAR19];
        }
        VAR16 += (VAR23 - VAR16) * (VAR24)VAR9 / VAR3->VAR25;
    }
    else
    {
        for (VAR13 = 0; VAR13 < VAR3->VAR19; VAR13++)
            VAR16 += VAR12[VAR14 + VAR13] * (VAR21)VAR17[VAR13];
    }
    FUN3(VAR11[VAR5], VAR16);
}