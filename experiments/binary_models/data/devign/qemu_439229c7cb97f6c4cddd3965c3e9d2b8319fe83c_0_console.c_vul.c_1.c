static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    const VAR8 *VAR10;
    unsigned int VAR11, VAR12, VAR13, VAR14;
    int VAR15;
    unsigned int VAR16, VAR17;
    FUN2("", VAR3, VAR4);
    FUN3(VAR7, VAR5);
    if (VAR7->VAR18)
    {
        VAR17 = VAR19[VAR7->VAR20][VAR7->VAR16];
        VAR16 = VAR19[VAR7->VAR20][VAR7->VAR17];
    }
    else
    {
        VAR16 = VAR19[VAR7->VAR20][VAR7->VAR16];
        VAR17 = VAR19[VAR7->VAR20][VAR7->VAR17];
    }
    VAR14 = (FUN4(VAR2) + 7) >> 3;
    VAR9 = FUN5(VAR2) + FUN6(VAR2) * VAR4 * VAR21 + VAR14 * VAR3 * VAR22;
    VAR12 = FUN6(VAR2);
    VAR10 = VAR23 + VAR21 * VAR5;
    VAR13 = VAR17 ^ VAR16;
    switch (FUN4(VAR2))
    {
    case 8:
        for (VAR15 = 0; VAR15 < VAR21; VAR15++)
        {
            VAR11 = *VAR10++;
            if (VAR7->VAR24 && ((VAR15 == VAR21 - 2) || (VAR15 == VAR21 - 3)))
            {
                VAR11 = 0xFFFF;
            }
            ((VAR25 *)VAR9)[0] = (VAR26[(VAR11 >> 4)] & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[1] = (VAR26[(VAR11 >> 0) & 0xf] & VAR13) ^ VAR17;
            VAR9 += VAR12;
        }
        break;
    case 16:
    case 15:
        for (VAR15 = 0; VAR15 < VAR21; VAR15++)
        {
            VAR11 = *VAR10++;
            if (VAR7->VAR24 && ((VAR15 == VAR21 - 2) || (VAR15 == VAR21 - 3)))
            {
                VAR11 = 0xFFFF;
            }
            ((VAR25 *)VAR9)[0] = (VAR27[(VAR11 >> 6)] & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[1] = (VAR27[(VAR11 >> 4) & 3] & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[2] = (VAR27[(VAR11 >> 2) & 3] & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[3] = (VAR27[(VAR11 >> 0) & 3] & VAR13) ^ VAR17;
            VAR9 += VAR12;
        }
        break;
    case 32:
        for (VAR15 = 0; VAR15 < VAR21; VAR15++)
        {
            VAR11 = *VAR10++;
            if (VAR7->VAR24 && ((VAR15 == VAR21 - 2) || (VAR15 == VAR21 - 3)))
            {
                VAR11 = 0xFFFF;
            }
            ((VAR25 *)VAR9)[0] = (-((VAR11 >> 7)) & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[1] = (-((VAR11 >> 6) & 1) & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[2] = (-((VAR11 >> 5) & 1) & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[3] = (-((VAR11 >> 4) & 1) & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[4] = (-((VAR11 >> 3) & 1) & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[5] = (-((VAR11 >> 2) & 1) & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[6] = (-((VAR11 >> 1) & 1) & VAR13) ^ VAR17;
            ((VAR25 *)VAR9)[7] = (-((VAR11 >> 0) & 1) & VAR13) ^ VAR17;
            VAR9 += VAR12;
        }
        break;
    }
}