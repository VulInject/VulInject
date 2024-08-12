static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    unsigned int *VAR4;
    unsigned char VAR5, VAR6, VAR7;
    unsigned char *VAR8 = VAR2->VAR9 + 16;
    unsigned char *VAR10;
    unsigned char VAR11;
    unsigned char *VAR12;
    unsigned char *VAR13;
    unsigned char VAR14;
    int VAR15;
    int VAR16, VAR17;
    int VAR18, VAR19;
    int VAR20;
    VAR16 = FUN2(&VAR2->VAR9[6]);
    VAR17 = FUN2(&VAR2->VAR9[8]);
    VAR18 = FUN2(&VAR2->VAR9[10]) - VAR16 + 1;
    VAR19 = FUN2(&VAR2->VAR9[12]) - VAR17 + 1;
    if (VAR16 || VAR17 || (VAR18 != VAR2->VAR21->VAR22) || (VAR19 != VAR2->VAR21->VAR23))
    {
        memcpy(VAR2->VAR24.VAR25[0], VAR2->VAR26.VAR25[0], VAR2->VAR21->VAR23 * VAR2->VAR24.VAR27[0]);
    }
    if (VAR2->VAR9[15] & 0x02)
    {
        VAR8 += 2;
        VAR4 = (unsigned int *)VAR2->VAR28;
        for (VAR3 = 0; VAR3 < VAR29; VAR3++)
        {
            VAR5 = *VAR8++ * 4;
            VAR6 = *VAR8++ * 4;
            VAR7 = *VAR8++ * 4;
            VAR4[VAR3] = (VAR5 << 16) | (VAR6 << 8) | (VAR7);
        }
        VAR2->VAR30 -= (256 * 3 + 2);
    }
    if (VAR2->VAR30 >= 0)
    {
        VAR10 = VAR8;
        VAR11 = *VAR10++;
        if (VAR11 & 0x80)
        {
            FUN3(VAR10, VAR2->VAR31, VAR2->VAR32);
            VAR11 &= 0x7F;
            VAR10 = VAR2->VAR31;
        }
        VAR12 = &VAR2->VAR24.VAR25[0][VAR17 * VAR2->VAR24.VAR27[0] + VAR16];
        VAR20 = VAR2->VAR24.VAR27[0] * VAR2->VAR21->VAR23;
        VAR13 = &VAR2->VAR26.VAR25[0][VAR17 * VAR2->VAR26.VAR27[0] + VAR16];
        switch (VAR11)
        {
        case 1:
            for (VAR3 = 0; VAR3 < VAR19; VAR3++)
            {
                VAR15 = 0;
                do
                {
                    VAR14 = *VAR10++;
                    if (VAR14 & 0x80)
                    {
                        VAR14 = (VAR14 & 0x7F) + 1;
                        if (VAR15 + VAR14 > VAR18)
                            return;
                        memcpy(&VAR12[VAR15], VAR10, VAR14);
                        VAR10 += VAR14;
                        VAR15 += VAR14;
                    }
                    else
                    {
                        if (VAR15 + VAR14 + 1 > VAR18)
                            return;
                        memcpy(&VAR12[VAR15], &VAR13[VAR15], VAR14 + 1);
                        VAR15 += VAR14 + 1;
                    }
                } while (VAR15 < VAR18);
                if (VAR15 > VAR18)
                {
                    FUN4(VAR2->VAR21, VAR33, "", VAR15, VAR18);
                    break;
                }
                VAR12 += VAR2->VAR24.VAR27[0];
                VAR13 += VAR2->VAR26.VAR27[0];
            }
            break;
        case 2:
            for (VAR3 = 0; VAR3 < VAR19; VAR3++)
            {
                memcpy(VAR12, VAR10, VAR18);
                VAR10 += VAR18;
                VAR12 += VAR2->VAR24.VAR27[0];
                VAR13 += VAR2->VAR26.VAR27[0];
            }
            break;
        case 3:
            for (VAR3 = 0; VAR3 < VAR19; VAR3++)
            {
                VAR15 = 0;
                do
                {
                    VAR14 = *VAR10++;
                    if (VAR14 & 0x80)
                    {
                        VAR14 = (VAR14 & 0x7F) + 1;
                        if (*VAR10++ == 0xFF)
                            VAR14 = FUN5(VAR10, &VAR12[VAR15], VAR14, VAR18 - VAR15);
                        else
                            memcpy(&VAR12[VAR15], VAR10, VAR14);
                        VAR10 += VAR14;
                        VAR15 += VAR14;
                    }
                    else
                    {
                        if (VAR15 + VAR14 + 1 > VAR18)
                            return;
                        memcpy(&VAR12[VAR15], &VAR13[VAR15], VAR14 + 1);
                        VAR15 += VAR14 + 1;
                    }
                } while (VAR15 < VAR18);
                if (VAR15 > VAR18)
                {
                    FUN4(VAR2->VAR21, VAR33, "", VAR15, VAR18);
                }
                VAR12 += VAR2->VAR24.VAR27[0];
                VAR13 += VAR2->VAR26.VAR27[0];
            }
            break;
        }
    }
}