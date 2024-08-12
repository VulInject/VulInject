static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7;
    FUN2(*VAR8)[4];
    int VAR9[3], VAR10[3], VAR11[3];
    const int VAR12 = VAR2->VAR12[0];
    const int VAR13 = (1 << VAR2->VAR14) - 1;
    FUN3(&VAR2->VAR15, &VAR2->VAR16, (unsigned)VAR2->VAR17 * 4 * sizeof(VAR2->VAR15[0][0]));
    VAR8 = VAR2->VAR15;
    for (VAR5 = 0; VAR5 < 3; VAR5++)
    {
        VAR8[0][VAR5] = 1 << (VAR2->VAR14 + VAR4 - 1);
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR18; VAR7++)
    {
        const int VAR19 = VAR7 ? VAR3 : 1;
        VAR20 *VAR21 = VAR2->VAR22.VAR23[0] + (VAR12 * VAR7);
        if (VAR2->VAR24 && VAR2->VAR25)
            VAR21 += VAR12 >> 1;
        for (VAR5 = 0; VAR5 < 3; VAR5++)
        {
            VAR10[VAR5] = VAR9[VAR5] = VAR11[VAR5] = VAR8[0][VAR5];
        }
        for (VAR6 = 0; VAR6 < VAR2->VAR17; VAR6++)
        {
            if (VAR2->VAR26 && !VAR2->VAR27)
                VAR2->VAR27 = VAR2->VAR26;
            for (VAR5 = 0; VAR5 < 3; VAR5++)
            {
                int VAR28, VAR29;
                VAR11[VAR5] = VAR10[VAR5];
                VAR10[VAR5] = VAR8[VAR6][VAR5];
                FUN4(VAR28, VAR11[VAR5], VAR10[VAR5], VAR9[VAR5], VAR19);
                VAR29 = FUN5(VAR2, VAR2->VAR30[VAR5]);
                if (VAR29 == 0xFFFF)
                    return -1;
                VAR9[VAR5] = VAR8[VAR6][VAR5] = VAR13 & (VAR28 + (VAR29 << VAR4));
            }
            if (VAR2->VAR26 && !--VAR2->VAR27)
            {
                FUN6(&VAR2->VAR31);
                FUN7(&VAR2->VAR31, 16);
            }
        }
        if (VAR2->VAR32)
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR17; VAR6++)
            {
                VAR21[3 * VAR6 + 1] = VAR8[VAR6][0] - ((VAR8[VAR6][1] + VAR8[VAR6][2] - 0x200) >> 2);
                VAR21[3 * VAR6 + 0] = VAR8[VAR6][1] + VAR21[3 * VAR6 + 1];
                VAR21[3 * VAR6 + 2] = VAR8[VAR6][2] + VAR21[3 * VAR6 + 1];
            }
        }
        else if (VAR2->VAR33)
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR17; VAR6++)
            {
                VAR21[3 * VAR6 + 1] = VAR8[VAR6][0] - ((VAR8[VAR6][1] + VAR8[VAR6][2]) >> 2);
                VAR21[3 * VAR6 + 0] = VAR8[VAR6][1] + VAR21[3 * VAR6 + 1];
                VAR21[3 * VAR6 + 2] = VAR8[VAR6][2] + VAR21[3 * VAR6 + 1];
            }
        }
        else
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR17; VAR6++)
            {
                VAR21[3 * VAR6 + 0] = VAR8[VAR6][2];
                VAR21[3 * VAR6 + 1] = VAR8[VAR6][1];
                VAR21[3 * VAR6 + 2] = VAR8[VAR6][0];
            }
        }
    }
    return 0;
}