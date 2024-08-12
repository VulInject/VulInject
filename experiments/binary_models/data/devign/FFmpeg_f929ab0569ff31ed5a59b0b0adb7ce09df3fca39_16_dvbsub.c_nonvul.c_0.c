static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    VAR3 *VAR7, *VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR7 = VAR4;
    VAR9 = 1;
    if (VAR6->VAR16 == 0 || !VAR6->VAR17)
        return -1;
    *VAR7++ = 0x00;
    *VAR7++ = 0x0f;
    *VAR7++ = 0x10;
    FUN2(&VAR7, VAR9);
    VAR8 = VAR7;
    VAR7 += 2;
    *VAR7++ = 30;
    if (VAR2->VAR18)
        VAR15 = 0;
    else
        VAR15 = 2;
    *VAR7++ = (VAR2->VAR19 << 4) | (VAR15 << 2) | 3;
    for (VAR10 = 0; VAR10 < VAR6->VAR16; VAR10++)
    {
        *VAR7++ = VAR10;
        *VAR7++ = 0xff;
        FUN2(&VAR7, VAR6->VAR17[VAR10]->VAR20);
        FUN2(&VAR7, VAR6->VAR17[VAR10]->VAR21);
    }
    FUN2(&VAR8, VAR7 - VAR8 - 2);
    if (!VAR2->VAR18)
    {
        for (VAR11 = 0; VAR11 < VAR6->VAR16; VAR11++)
        {
            if (VAR6->VAR17[VAR11]->VAR22 <= 4)
            {
                VAR14 = 0;
            }
            else if (VAR6->VAR17[VAR11]->VAR22 <= 16)
            {
                VAR14 = 1;
            }
            else
            {
                return -1;
            }
            *VAR7++ = 0x0f;
            *VAR7++ = 0x12;
            FUN2(&VAR7, VAR9);
            VAR8 = VAR7;
            VAR7 += 2;
            *VAR7++ = VAR11;
            *VAR7++ = (0 << 4) | 0xf;
            for (VAR13 = 0; VAR13 < VAR6->VAR17[VAR11]->VAR22; VAR13++)
            {
                *VAR7++ = VAR13;
                *VAR7++ = (1 << (7 - VAR14)) | (0xf << 1) | 1;
                {
                    int VAR23, VAR24, VAR25, VAR26;
                    uint32_t VAR20 = ((VAR27 *)VAR6->VAR17[VAR11]->VAR28.VAR29[1])[VAR13];
                    VAR23 = (VAR20 >> 24) & 0xff;
                    VAR24 = (VAR20 >> 16) & 0xff;
                    VAR25 = (VAR20 >> 8) & 0xff;
                    VAR26 = (VAR20 >> 0) & 0xff;
                    *VAR7++ = FUN3(VAR24, VAR25, VAR26);
                    *VAR7++ = FUN4(VAR24, VAR25, VAR26, 0);
                    *VAR7++ = FUN5(VAR24, VAR25, VAR26, 0);
                    *VAR7++ = 255 - VAR23;
                }
            }
            FUN2(&VAR8, VAR7 - VAR8 - 2);
        }
    }
    for (VAR10 = 0; VAR10 < VAR6->VAR16; VAR10++)
    {
        if (VAR6->VAR17[VAR10]->VAR22 <= 4)
        {
            VAR14 = 0;
        }
        else if (VAR6->VAR17[VAR10]->VAR22 <= 16)
        {
            VAR14 = 1;
        }
        else
        {
            return -1;
        }
        *VAR7++ = 0x0f;
        *VAR7++ = 0x11;
        FUN2(&VAR7, VAR9);
        VAR8 = VAR7;
        VAR7 += 2;
        *VAR7++ = VAR10;
        *VAR7++ = (VAR2->VAR19 << 4) | (0 << 3) | 0x07;
        FUN2(&VAR7, VAR6->VAR17[VAR10]->VAR30);
        FUN2(&VAR7, VAR6->VAR17[VAR10]->VAR6);
        *VAR7++ = ((1 + VAR14) << 5) | ((1 + VAR14) << 2) | 0x03;
        *VAR7++ = VAR10;
        *VAR7++ = 0;
        *VAR7++ = 0x03;
        if (!VAR2->VAR18)
        {
            FUN2(&VAR7, VAR10);
            *VAR7++ = (0 << 6) | (0 << 4);
            *VAR7++ = 0;
            *VAR7++ = 0xf0;
            *VAR7++ = 0;
        }
        FUN2(&VAR8, VAR7 - VAR8 - 2);
    }
    if (!VAR2->VAR18)
    {
        for (VAR12 = 0; VAR12 < VAR6->VAR16; VAR12++)
        {
            if (VAR6->VAR17[VAR12]->VAR22 <= 4)
            {
                VAR14 = 0;
            }
            else if (VAR6->VAR17[VAR12]->VAR22 <= 16)
            {
                VAR14 = 1;
            }
            else
            {
                return -1;
            }
            *VAR7++ = 0x0f;
            *VAR7++ = 0x13;
            FUN2(&VAR7, VAR9);
            VAR8 = VAR7;
            VAR7 += 2;
            FUN2(&VAR7, VAR12);
            *VAR7++ = (VAR2->VAR19 << 4) | (0 << 2) | (0 << 1) | 1;
            {
                VAR3 *VAR31, *VAR32, *VAR33, *VAR34;
                void (*VAR35)(VAR3 * *VAR36, const VAR3 *VAR37, int VAR38, int VAR30, int VAR6);
                VAR31 = VAR7;
                VAR7 += 2;
                VAR32 = VAR7;
                VAR7 += 2;
                if (VAR14 == 0)
                    VAR35 = VAR39;
                else
                    VAR35 = VAR40;
                VAR33 = VAR7;
                FUN6(&VAR7, VAR6->VAR17[VAR12]->VAR28.VAR29[0], VAR6->VAR17[VAR12]->VAR30 * 2, VAR6->VAR17[VAR12]->VAR30, VAR6->VAR17[VAR12]->VAR6 >> 1);
                VAR34 = VAR7;
                FUN6(&VAR7, VAR6->VAR17[VAR12]->VAR28.VAR29[0] + VAR6->VAR17[VAR12]->VAR30, VAR6->VAR17[VAR12]->VAR30 * 2, VAR6->VAR17[VAR12]->VAR30, VAR6->VAR17[VAR12]->VAR6 >> 1);
                FUN2(&VAR31, VAR34 - VAR33);
                FUN2(&VAR32, VAR7 - VAR34);
            }
            FUN2(&VAR8, VAR7 - VAR8 - 2);
        }
    }
    *VAR7++ = 0x0f;
    *VAR7++ = 0x80;
    FUN2(&VAR7, VAR9);
    VAR8 = VAR7;
    VAR7 += 2;
    FUN2(&VAR8, VAR7 - VAR8 - 2);
    *VAR7++ = 0xff;
    VAR2->VAR19 = (VAR2->VAR19 + 1) & 0xf;
    VAR2->VAR18 = !VAR2->VAR18;
    return VAR7 - VAR4;
}