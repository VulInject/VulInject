static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR3;
    VAR11 *VAR12 = VAR10->VAR12;
    VAR11 *VAR13 = VAR10->VAR13;
    int VAR14;
    for (VAR14 = 0; VAR14 < VAR7->VAR15; VAR14++)
    {
        int VAR16 = VAR14 == 1 || VAR14 == 2 ? VAR7->VAR16 : 0;
        int VAR17 = VAR14 == 1 || VAR14 == 2 ? VAR7->VAR17 : 0;
        int VAR18 = VAR7->VAR19[VAR14];
        int VAR20 = FUN2(VAR13->VAR21, VAR17);
        int VAR22 = FUN2(VAR12->VAR23, VAR16);
        int VAR24 = FUN2(VAR12->VAR21, VAR17);
        int VAR25 = (VAR24 * VAR4) / VAR5;
        int VAR26 = (VAR24 * (VAR4 + 1)) / VAR5;
        VAR27 *VAR28, *VAR29;
        int VAR30, VAR31;
        int VAR32, VAR33;
        VAR30 = VAR12->VAR34[VAR14];
        VAR28 = VAR12->VAR35[VAR14] + VAR25 * VAR30;
        VAR29 = VAR13->VAR35[VAR14];
        VAR31 = VAR13->VAR34[VAR14];
        if (VAR7->VAR36 & 1)
        {
            VAR29 += VAR13->VAR34[VAR14] * (VAR20 - 1);
            VAR31 *= -1;
        }
        if (VAR7->VAR36 & 2)
        {
            VAR28 = VAR12->VAR35[VAR14] + VAR30 * (VAR24 - VAR25 - 1);
            VAR30 *= -1;
        }
        for (VAR33 = VAR25; VAR33 < VAR26 - 7; VAR33 += 8)
        {
            for (VAR32 = 0; VAR32 < VAR22 - 7; VAR32 += 8)
            {
                VAR7->FUN3(VAR29 + VAR32 * VAR31 + VAR33 * VAR18, VAR31, VAR28 + (VAR33 - VAR25) * VAR30 + VAR32 * VAR18, VAR30);
            }
            if (VAR22 - VAR32 > 0 && VAR26 - VAR33 > 0)
                VAR7->FUN4(VAR29 + VAR32 * VAR31 + VAR33 * VAR18, VAR31, VAR28 + (VAR33 - VAR25) * VAR30 + VAR32 * VAR18, VAR30, VAR22 - VAR32, VAR26 - VAR33);
        }
        if (VAR26 - VAR33 > 0)
            VAR7->FUN4(VAR29 + 0 * VAR31 + VAR33 * VAR18, VAR31, VAR28 + (VAR33 - VAR25) * VAR30 + 0 * VAR18, VAR30, VAR22, VAR26 - VAR33);
    }
    return 0;
}