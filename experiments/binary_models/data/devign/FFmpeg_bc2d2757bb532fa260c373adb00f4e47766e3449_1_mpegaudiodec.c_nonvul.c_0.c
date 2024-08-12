static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8, *VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18[3];
    VAR5 *VAR19;
    VAR19 = VAR6;
    VAR17 = VAR4->VAR20 - 210;
    VAR16 = VAR4->VAR21 + 1;
    VAR8 = VAR22[VAR2->VAR23];
    VAR9 = VAR24[VAR4->VAR25];
    for (VAR11 = 0; VAR11 < VAR4->VAR26; VAR11++)
    {
        VAR15 = VAR17 - ((VAR4->VAR27[VAR11] + VAR9[VAR11]) << VAR16) + 400;
        VAR10 = VAR8[VAR11];
        for (VAR12 = VAR10; VAR12 > 0; VAR12--)
            *VAR19++ = VAR15;
    }
    if (VAR4->VAR28 < 13)
    {
        VAR8 = VAR29[VAR2->VAR23];
        VAR18[0] = VAR17 - (VAR4->VAR30[0] << 3);
        VAR18[1] = VAR17 - (VAR4->VAR30[1] << 3);
        VAR18[2] = VAR17 - (VAR4->VAR30[2] << 3);
        VAR13 = VAR4->VAR26;
        for (VAR11 = VAR4->VAR28; VAR11 < 13; VAR11++)
        {
            VAR10 = VAR8[VAR11];
            for (VAR14 = 0; VAR14 < 3; VAR14++)
            {
                VAR15 = VAR18[VAR14] - (VAR4->VAR27[VAR13++] << VAR16) + 400;
                for (VAR12 = VAR10; VAR12 > 0; VAR12--)
                    *VAR19++ = VAR15;
            }
        }
    }
}