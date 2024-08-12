static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    int VAR6, VAR7, VAR8;
    short *VAR9;
    unsigned char *VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR10 = VAR3;
    VAR9 = (short *)VAR5;
    VAR8 = VAR2->VAR14 == 2;
    switch (VAR2->VAR15->VAR16)
    {
    case VAR17:
        break;
    case VAR18:
        VAR6 = VAR2->VAR19 / 8;
        VAR12->VAR20[0].VAR21 = (signed short)VAR9[0]; 
        FUN2(&VAR10, VAR12->VAR20[0].VAR21);
        *VAR10++ = (unsigned char)VAR12->VAR20[0].VAR22;
        *VAR10++ = 0;
        VAR9++;
        if (VAR2->VAR14 == 2)
        {
            VAR12->VAR20[1].VAR21 = (signed short)VAR9[1];
            FUN2(&VAR10, VAR12->VAR20[1].VAR21);
            *VAR10++ = (unsigned char)VAR12->VAR20[1].VAR22;
            *VAR10++ = 0;
            VAR9++;
        }
        if (VAR2->VAR23 > 0)
        {
            uint8_t VAR24[2][VAR6 * 8];
            FUN3(VAR2, VAR9, VAR24[0], &VAR12->VAR20[0], VAR6 * 8);
            if (VAR2->VAR14 == 2)
                FUN3(VAR2, VAR9 + 1, VAR24[1], &VAR12->VAR20[1], VAR6 * 8);
            for (VAR7 = 0; VAR7 < VAR6; VAR7++)
            {
                *VAR10++ = VAR24[0][8 * VAR7 + 0] | (VAR24[0][8 * VAR7 + 1] << 4);
                *VAR10++ = VAR24[0][8 * VAR7 + 2] | (VAR24[0][8 * VAR7 + 3] << 4);
                *VAR10++ = VAR24[0][8 * VAR7 + 4] | (VAR24[0][8 * VAR7 + 5] << 4);
                *VAR10++ = VAR24[0][8 * VAR7 + 6] | (VAR24[0][8 * VAR7 + 7] << 4);
                if (VAR2->VAR14 == 2)
                {
                    *VAR10++ = VAR24[1][8 * VAR7 + 0] | (VAR24[1][8 * VAR7 + 1] << 4);
                    *VAR10++ = VAR24[1][8 * VAR7 + 2] | (VAR24[1][8 * VAR7 + 3] << 4);
                    *VAR10++ = VAR24[1][8 * VAR7 + 4] | (VAR24[1][8 * VAR7 + 5] << 4);
                    *VAR10++ = VAR24[1][8 * VAR7 + 6] | (VAR24[1][8 * VAR7 + 7] << 4);
                }
            }
        }
        else
            for (; VAR6 > 0; VAR6--)
            {
                *VAR10 = FUN4(&VAR12->VAR20[0], VAR9[0]);
                *VAR10 |= FUN4(&VAR12->VAR20[0], VAR9[VAR2->VAR14]) << 4;
                VAR10++;
                *VAR10 = FUN4(&VAR12->VAR20[0], VAR9[VAR2->VAR14 * 2]);
                *VAR10 |= FUN4(&VAR12->VAR20[0], VAR9[VAR2->VAR14 * 3]) << 4;
                VAR10++;
                *VAR10 = FUN4(&VAR12->VAR20[0], VAR9[VAR2->VAR14 * 4]);
                *VAR10 |= FUN4(&VAR12->VAR20[0], VAR9[VAR2->VAR14 * 5]) << 4;
                VAR10++;
                *VAR10 = FUN4(&VAR12->VAR20[0], VAR9[VAR2->VAR14 * 6]);
                *VAR10 |= FUN4(&VAR12->VAR20[0], VAR9[VAR2->VAR14 * 7]) << 4;
                VAR10++;
                if (VAR2->VAR14 == 2)
                {
                    *VAR10 = FUN4(&VAR12->VAR20[1], VAR9[1]);
                    *VAR10 |= FUN4(&VAR12->VAR20[1], VAR9[3]) << 4;
                    VAR10++;
                    *VAR10 = FUN4(&VAR12->VAR20[1], VAR9[5]);
                    *VAR10 |= FUN4(&VAR12->VAR20[1], VAR9[7]) << 4;
                    VAR10++;
                    *VAR10 = FUN4(&VAR12->VAR20[1], VAR9[9]);
                    *VAR10 |= FUN4(&VAR12->VAR20[1], VAR9[11]) << 4;
                    VAR10++;
                    *VAR10 = FUN4(&VAR12->VAR20[1], VAR9[13]);
                    *VAR10 |= FUN4(&VAR12->VAR20[1], VAR9[15]) << 4;
                    VAR10++;
                }
                VAR9 += 8 * VAR2->VAR14;
            }
        break;
    case VAR25:
    {
        int VAR7;
        PutBitContext VAR26;
        FUN5(&VAR26, VAR10, VAR4 * 8);
        VAR6 = VAR2->VAR19 - 1;
        FUN6(&VAR26, 2, 2);
        for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
        {
            VAR12->VAR20[VAR7].VAR22 = FUN7(VAR12->VAR20[VAR7].VAR22, 0, 63);
            FUN6(&VAR26, 16, VAR9[VAR7] & 0xFFFF);
            FUN6(&VAR26, 6, VAR12->VAR20[VAR7].VAR22);
            VAR12->VAR20[VAR7].VAR21 = (signed short)VAR9[VAR7];
        }
        if (VAR2->VAR23 > 0)
        {
            uint8_t VAR24[2][VAR6];
            FUN3(VAR2, VAR9 + 2, VAR24[0], &VAR12->VAR20[0], VAR6);
            if (VAR2->VAR14 == 2)
                FUN3(VAR2, VAR9 + 3, VAR24[1], &VAR12->VAR20[1], VAR6);
            for (VAR7 = 0; VAR7 < VAR6; VAR7++)
            {
                FUN6(&VAR26, 4, VAR24[0][VAR7]);
                if (VAR2->VAR14 == 2)
                    FUN6(&VAR26, 4, VAR24[1][VAR7]);
            }
        }
        else
        {
            for (VAR7 = 1; VAR7 < VAR2->VAR19; VAR7++)
            {
                FUN6(&VAR26, 4, FUN4(&VAR12->VAR20[0], VAR9[VAR2->VAR14 * VAR7]));
                if (VAR2->VAR14 == 2)
                    FUN6(&VAR26, 4, FUN4(&VAR12->VAR20[1], VAR9[2 * VAR7 + 1]));
            }
        }
        FUN8(&VAR26);
        VAR10 += FUN9(&VAR26) >> 3;
        break;
    }
    case VAR27:
        for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
        {
            int VAR28 = 0;
            *VAR10++ = VAR28;
            VAR12->VAR20[VAR7].VAR29 = VAR30[VAR28];
            VAR12->VAR20[VAR7].VAR31 = VAR32[VAR28];
        }
        for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
        {
            if (VAR12->VAR20[VAR7].VAR33 < 16)
                VAR12->VAR20[VAR7].VAR33 = 16;
            FUN2(&VAR10, VAR12->VAR20[VAR7].VAR33);
        }
        for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
        {
            VAR12->VAR20[VAR7].VAR34 = *VAR9++;
            FUN2(&VAR10, VAR12->VAR20[VAR7].VAR34);
        }
        for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
        {
            VAR12->VAR20[VAR7].VAR35 = *VAR9++;
            FUN2(&VAR10, VAR12->VAR20[VAR7].VAR35);
        }
        if (VAR2->VAR23 > 0)
        {
            int VAR6 = VAR2->VAR36 - 7 * VAR2->VAR14;
            uint8_t VAR24[2][VAR6];
            if (VAR2->VAR14 == 1)
            {
                VAR6 *= 2;
                FUN3(VAR2, VAR9, VAR24[0], &VAR12->VAR20[0], VAR6);
                for (VAR7 = 0; VAR7 < VAR6; VAR7 += 2)
                    *VAR10++ = (VAR24[0][VAR7] << 4) | VAR24[0][VAR7 + 1];
            }
            else
            {
                FUN3(VAR2, VAR9, VAR24[0], &VAR12->VAR20[0], VAR6);
                FUN3(VAR2, VAR9 + 1, VAR24[1], &VAR12->VAR20[1], VAR6);
                for (VAR7 = 0; VAR7 < VAR6; VAR7++)
                    *VAR10++ = (VAR24[0][VAR7] << 4) | VAR24[1][VAR7];
            }
        }
        else
            for (VAR7 = 7 * VAR2->VAR14; VAR7 < VAR2->VAR36; VAR7++)
            {
                int VAR37;
                VAR37 = FUN10(&VAR12->VAR20[0], *VAR9++) << 4;
                VAR37 |= FUN10(&VAR12->VAR20[VAR8], *VAR9++);
                *VAR10++ = VAR37;
            }
        break;
    case VAR38:
        VAR6 = VAR2->VAR19 / 2;
        if (VAR2->VAR23 > 0)
        {
            uint8_t VAR24[2][VAR6 * 2];
            VAR6 *= 2;
            if (VAR2->VAR14 == 1)
            {
                FUN3(VAR2, VAR9, VAR24[0], &VAR12->VAR20[0], VAR6);
                for (VAR7 = 0; VAR7 < VAR6; VAR7 += 2)
                    *VAR10++ = VAR24[0][VAR7] | (VAR24[0][VAR7 + 1] << 4);
            }
            else
            {
                FUN3(VAR2, VAR9, VAR24[0], &VAR12->VAR20[0], VAR6);
                FUN3(VAR2, VAR9 + 1, VAR24[1], &VAR12->VAR20[1], VAR6);
                for (VAR7 = 0; VAR7 < VAR6; VAR7++)
                    *VAR10++ = VAR24[0][VAR7] | (VAR24[1][VAR7] << 4);
            }
        }
        else
            for (; VAR6 > 0; VAR6--)
            {
                for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
                {
                    int VAR37;
                    VAR37 = FUN11(&VAR12->VAR20[VAR7], VAR9[VAR7]);
                    VAR37 |= FUN11(&VAR12->VAR20[VAR7], VAR9[VAR7 + VAR2->VAR14]) << 4;
                    *VAR10++ = VAR37;
                }
                VAR9 += 2 * VAR2->VAR14;
            }
        break;
    default:
        return -1;
    }
    return VAR10 - VAR3;
}