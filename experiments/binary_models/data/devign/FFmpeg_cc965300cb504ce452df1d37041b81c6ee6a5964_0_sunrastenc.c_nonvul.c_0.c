static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR3 *VAR11;
    int VAR12, VAR13, VAR14;
    if (VAR9->VAR15)
    {
        PutByteContext VAR16, VAR17;
        int VAR12 = VAR9->VAR15 / 3;
        VAR16 = VAR9->VAR18;
        FUN2(&VAR9->VAR18, VAR12);
        VAR17 = VAR9->VAR18;
        FUN2(&VAR9->VAR18, VAR12);
        for (VAR14 = 0; VAR14 < VAR12; VAR14++)
        {
            uint32_t VAR19 = VAR6[VAR14];
            FUN3(&VAR16, (VAR19 >> 16) & 0xFF);
            FUN3(&VAR17, (VAR19 >> 8) & 0xFF);
            FUN3(&VAR9->VAR18, VAR19 & 0xFF);
        }
    }
    VAR12 = (VAR9->VAR20 * VAR2->VAR21 + 7) >> 3;
    VAR13 = VAR12 + (VAR12 & 1);
    VAR11 = VAR4;
    if (VAR9->VAR22 == VAR23)
    {
        uint8_t VAR24, VAR25;
        int VAR26;
        const VAR3 *VAR27 = VAR7 < 0 ? VAR4 + (VAR2->VAR28 - 1) * VAR7 : VAR4;
        const VAR3 *VAR29 = VAR7 < 0 ? VAR4 - VAR7 : VAR4 + VAR2->VAR28 * VAR7;
        VAR11 = VAR4;
        VAR14 = 0;
        VAR25 = VAR30;
        while (VAR11 < VAR29 && VAR11 >= VAR27)
        {
            VAR26 = 1;
            VAR24 = VAR25;
            VAR14++;
            if (VAR14 >= VAR13)
            {
                VAR14 = 0;
                VAR11 += VAR7;
            }
            VAR25 = VAR30;
            while (VAR25 == VAR24 && VAR26 < 256 && VAR11 < VAR29 && VAR11 >= VAR27)
            {
                VAR14++;
                VAR26++;
                if (VAR14 >= VAR13)
                {
                    VAR14 = 0;
                    VAR11 += VAR7;
                }
                VAR25 = VAR30;
            }
            if (VAR26 > 2 || VAR24 == VAR31)
            {
                FUN3(&VAR9->VAR18, VAR31);
                FUN3(&VAR9->VAR18, VAR26 - 1);
                if (VAR26 > 1)
                    FUN3(&VAR9->VAR18, VAR24);
            }
            else if (VAR26 == 1)
            {
                FUN3(&VAR9->VAR18, VAR24);
            }
            else
                FUN4(&VAR9->VAR18, (VAR24 << 8) | VAR24);
        }
        VAR9->VAR32 = FUN5(&VAR9->VAR18) - 32 - VAR9->VAR15;
    }
    else
    {
        int VAR33;
        for (VAR33 = 0; VAR33 < VAR2->VAR28; VAR33++)
        {
            FUN6(&VAR9->VAR18, VAR11, VAR12);
            if (VAR12 < VAR13)
                FUN3(&VAR9->VAR18, 0);
            VAR11 += VAR7;
        }
    }
}