static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    PutBitContext VAR13;
    FUN2(&VAR13, VAR4, 128);
    FUN3(&VAR13, 32, VAR14);
    FUN3(&VAR13, 16, 0);
    FUN3(&VAR13, 1, 1);
    FUN3(&VAR13, 22, VAR7->VAR15);
    FUN3(&VAR13, 1, 1);
    if (VAR7->VAR16 && VAR5 == VAR17)
    {
        FUN3(&VAR13, 6, 0);
    }
    else
        FUN3(&VAR13, 6, VAR7->VAR18);
    if (VAR7->VAR16)
    {
        FUN3(&VAR13, 1, 0);
        FUN3(&VAR13, 1, 1);
    }
    else
    {
        FUN3(&VAR13, 1, 0);
        FUN3(&VAR13, 1, 0);
    }
    if (VAR7->VAR16 || VAR7->VAR19)
    {
        FUN3(&VAR13, 1, 1);
        FUN3(&VAR13, 1, 1);
    }
    else
    {
        FUN3(&VAR13, 1, 0);
        FUN3(&VAR13, 1, 0);
    }
    FUN3(&VAR13, 1, 1);
    if (VAR7->VAR16 && (VAR5 & 0xe0) == VAR20)
    {
        FUN3(&VAR13, 5, 0);
    }
    else
        FUN3(&VAR13, 5, VAR7->VAR21);
    if (VAR7->VAR19)
    {
        FUN3(&VAR13, 1, 0);
        FUN3(&VAR13, 7, 0x7f);
    }
    else
        FUN3(&VAR13, 8, 0xff);
    if (VAR7->VAR19)
    {
        int VAR22 = 0;
        int VAR23 = 0;
        int VAR24 = 0;
        for (VAR10 = 0; VAR10 < VAR2->VAR25; VAR10++)
        {
            VAR26 *VAR27 = VAR2->VAR28[VAR10]->VAR8;
            VAR12 = VAR27->VAR12;
            if (VAR12 == 0xbd && VAR27->VAR29 > VAR24)
            {
                VAR24 = VAR27->VAR29;
            }
            else if (VAR12 >= 0xc0 && VAR12 <= 0xc7 && VAR27->VAR29 > VAR23)
            {
                VAR23 = VAR27->VAR29;
            }
            else if (VAR12 == 0xe0 && VAR27->VAR29 > VAR22)
            {
                VAR22 = VAR27->VAR29;
            }
        }
        FUN3(&VAR13, 8, 0xb9);
        FUN3(&VAR13, 2, 3);
        FUN3(&VAR13, 1, 1);
        FUN3(&VAR13, 13, VAR22 / 1024);
        if (VAR23 == 0)
            VAR23 = 4096;
        FUN3(&VAR13, 8, 0xb8);
        FUN3(&VAR13, 2, 3);
        FUN3(&VAR13, 1, 0);
        FUN3(&VAR13, 13, VAR23 / 128);
        FUN3(&VAR13, 8, 0xbd);
        FUN3(&VAR13, 2, 3);
        FUN3(&VAR13, 1, 0);
        FUN3(&VAR13, 13, VAR24 / 128);
        FUN3(&VAR13, 8, 0xbf);
        FUN3(&VAR13, 2, 3);
        FUN3(&VAR13, 1, 1);
        FUN3(&VAR13, 13, 2);
    }
    else
    {
        VAR11 = 0;
        for (VAR10 = 0; VAR10 < VAR2->VAR25; VAR10++)
        {
            VAR26 *VAR27 = VAR2->VAR28[VAR10]->VAR8;
            if (!VAR7->VAR16 || VAR27->VAR12 == VAR5 || VAR5 == 0)
            {
                VAR12 = VAR27->VAR12;
                if (VAR12 < 0xc0)
                {
                    if (VAR11)
                        continue;
                    VAR11 = 1;
                    VAR12 = 0xbd;
                }
                FUN3(&VAR13, 8, VAR12);
                FUN3(&VAR13, 2, 3);
                if (VAR12 < 0xe0)
                {
                    FUN3(&VAR13, 1, 0);
                    FUN3(&VAR13, 13, VAR27->VAR29 / 128);
                }
                else
                {
                    FUN3(&VAR13, 1, 1);
                    FUN3(&VAR13, 13, VAR27->VAR29 / 1024);
                }
            }
        }
    }
    FUN4(&VAR13);
    VAR9 = FUN5(&VAR13) - VAR13.VAR4;
    VAR4[4] = (VAR9 - 6) >> 8;
    VAR4[5] = (VAR9 - 6) & 0xff;
    return VAR9;
}