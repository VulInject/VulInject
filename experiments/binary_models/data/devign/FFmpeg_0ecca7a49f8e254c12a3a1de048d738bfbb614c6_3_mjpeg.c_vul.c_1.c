static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7;
    uint16_t VAR8[2048][4];
    int VAR9[3], VAR10[3], VAR11[3];
    const int VAR12 = VAR2->VAR12[0];
    const int VAR13 = (1 << VAR2->VAR14) - 1;
    for (VAR5 = 0; VAR5 < 3; VAR5++)
    {
        VAR8[0][VAR5] = 1 << (VAR2->VAR14 + VAR4 - 1);
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR15; VAR7++)
    {
        const int VAR16 = VAR7 ? VAR3 : 1;
        VAR17 *VAR18 = VAR2->VAR19.VAR20[0] + (VAR12 * VAR7);
        if (VAR2->VAR21 && VAR2->VAR22)
            VAR18 += VAR12 >> 1;
        for (VAR5 = 0; VAR5 < 3; VAR5++)
        {
            VAR10[VAR5] = VAR9[VAR5] = VAR11[VAR5] = VAR8[0][VAR5];
        }
        for (VAR6 = 0; VAR6 < VAR2->VAR23; VAR6++)
        {
            if (VAR2->VAR24 && !VAR2->VAR25)
                VAR2->VAR25 = VAR2->VAR24;
            for (VAR5 = 0; VAR5 < 3; VAR5++)
            {
                int VAR26;
                VAR11[VAR5] = VAR10[VAR5];
                VAR10[VAR5] = VAR8[VAR6][VAR5];
                FUN2(VAR26, VAR11[VAR5], VAR10[VAR5], VAR9[VAR5], VAR16);
                VAR9[VAR5] = VAR8[VAR6][VAR5] = VAR13 & (VAR26 + (FUN3(VAR2, VAR2->VAR27[VAR5]) << VAR4));
            }
            if (VAR2->VAR24 && !--VAR2->VAR25)
            {
                FUN4(&VAR2->VAR28);
                FUN5(&VAR2->VAR28, 16);
            }
        }
        if (VAR2->VAR29)
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR23; VAR6++)
            {
                VAR18[4 * VAR6 + 1] = VAR8[VAR6][0] - ((VAR8[VAR6][1] + VAR8[VAR6][2] - 0x200) >> 2);
                VAR18[4 * VAR6 + 0] = VAR8[VAR6][1] + VAR18[4 * VAR6 + 1];
                VAR18[4 * VAR6 + 2] = VAR8[VAR6][2] + VAR18[4 * VAR6 + 1];
            }
        }
        else if (VAR2->VAR30)
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR23; VAR6++)
            {
                VAR18[4 * VAR6 + 1] = VAR8[VAR6][0] - ((VAR8[VAR6][1] + VAR8[VAR6][2]) >> 2);
                VAR18[4 * VAR6 + 0] = VAR8[VAR6][1] + VAR18[4 * VAR6 + 1];
                VAR18[4 * VAR6 + 2] = VAR8[VAR6][2] + VAR18[4 * VAR6 + 1];
            }
        }
        else
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR23; VAR6++)
            {
                VAR18[4 * VAR6 + 0] = VAR8[VAR6][0];
                VAR18[4 * VAR6 + 1] = VAR8[VAR6][1];
                VAR18[4 * VAR6 + 2] = VAR8[VAR6][2];
            }
        }
    }
    return 0;
}