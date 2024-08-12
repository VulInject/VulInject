static int FUN1(VAR1 *VAR2, unsigned VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8, *VAR9;
    int VAR10, VAR11, VAR12;
    int VAR13, VAR14;
    const VAR7 *VAR15, *VAR16;
    const VAR7 *VAR17;
    int VAR18, VAR19, VAR20;
    if (!VAR3)
        return 0;
    if (VAR3 + 4 >= FUN2(&VAR5->VAR21))
    {
        FUN3(VAR2, VAR22, "");
        return -1;
    }
    FUN4(&VAR5->VAR21, VAR3 + 4, VAR23);
    VAR18 = FUN5(&VAR5->VAR21);
    VAR17 = VAR5->VAR21.VAR24;
    VAR19 = FUN5(&VAR5->VAR21) * 2;
    if (VAR19 >= FUN2(&VAR5->VAR21))
    {
        FUN3(VAR2, VAR22, "");
        return -1;
    }
    FUN6(&VAR5->VAR21, VAR19);
    memset(VAR5->VAR25, 0, VAR5->VAR26);
    VAR20 = FUN7(VAR5, VAR5->VAR25, VAR5->VAR26);
    if (VAR20 < 0)
    {
        FUN3(VAR2, VAR22, "");
        return -1;
    }
    VAR8 = VAR5->VAR27.VAR28[1];
    VAR9 = VAR5->VAR27.VAR28[2];
    VAR15 = VAR5->VAR25;
    VAR16 = VAR15 + VAR20;
    if (VAR18)
    {
        for (VAR14 = 0; VAR14 < VAR2->VAR29 >> 1; VAR14++)
        {
            for (VAR13 = 0; VAR13 < VAR2->VAR30 >> 1; VAR13++)
            {
                VAR10 = *VAR15++;
                if (VAR10)
                {
                    VAR10 = FUN8(VAR17 + (VAR10 << 1));
                    VAR11 = (VAR10 >> 3) & 0xF8;
                    VAR12 = (VAR10 >> 8) & 0xF8;
                    VAR8[VAR13] = VAR11 | (VAR11 >> 5);
                    VAR9[VAR13] = VAR12 | (VAR12 >> 5);
                }
                if (VAR15 == VAR16)
                    return 0;
            }
            VAR8 += VAR5->VAR27.VAR31[1];
            VAR9 += VAR5->VAR27.VAR31[2];
        }
    }
    else
    {
        VAR7 *VAR32 = VAR8 + VAR5->VAR27.VAR31[1];
        VAR7 *VAR33 = VAR9 + VAR5->VAR27.VAR31[2];
        for (VAR14 = 0; VAR14 < VAR2->VAR29 >> 2; VAR14++)
        {
            for (VAR13 = 0; VAR13 < VAR2->VAR30 >> 1; VAR13 += 2)
            {
                VAR10 = *VAR15++;
                if (VAR10)
                {
                    VAR10 = FUN8(VAR17 + (VAR10 << 1));
                    VAR11 = (VAR10 >> 3) & 0xF8;
                    VAR12 = (VAR10 >> 8) & 0xF8;
                    VAR8[VAR13] = VAR8[VAR13 + 1] = VAR32[VAR13] = VAR32[VAR13 + 1] = VAR11 | (VAR11 >> 5);
                    VAR9[VAR13] = VAR9[VAR13 + 1] = VAR33[VAR13] = VAR33[VAR13 + 1] = VAR12 | (VAR12 >> 5);
                }
            }
            VAR8 += VAR5->VAR27.VAR31[1] * 2;
            VAR9 += VAR5->VAR27.VAR31[2] * 2;
            VAR32 += VAR5->VAR27.VAR31[1] * 2;
            VAR33 += VAR5->VAR27.VAR31[2] * 2;
        }
    }
    return 0;
}