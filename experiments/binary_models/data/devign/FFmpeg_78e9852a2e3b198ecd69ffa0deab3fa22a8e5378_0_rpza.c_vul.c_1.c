static void FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4->VAR3;
    int VAR5 = VAR2->VAR6.VAR7[0] / 2;
    int VAR8 = VAR5 - 4;
    int VAR9 = 0;
    int VAR10;
    unsigned char VAR11;
    int VAR12;
    unsigned short VAR13 = 0, VAR14;
    unsigned short VAR15[4];
    unsigned char VAR16, VAR17;
    unsigned short VAR18, VAR19;
    unsigned short *VAR20 = (unsigned short *)VAR2->VAR6.VAR21[0];
    int VAR22 = 0;
    int VAR23 = 0;
    int VAR24;
    int VAR25, VAR26;
    int VAR27;
    if (VAR2->VAR28[VAR9] != 0xe1)
        FUN2(VAR2->VAR4, VAR29, "", VAR2->VAR28[VAR9]);
    VAR10 = FUN3(&VAR2->VAR28[VAR9]) & 0x00FFFFFF;
    VAR9 += 4;
    if (VAR10 != VAR2->VAR30)
        FUN2(VAR2->VAR4, VAR29, "");
    VAR10 = VAR2->VAR30;
    VAR27 = ((VAR2->VAR4->VAR3 + 3) / 4) * ((VAR2->VAR4->VAR31 + 3) / 4);
    while (VAR9 < VAR10)
    {
        VAR11 = VAR2->VAR28[VAR9++];
        VAR12 = (VAR11 & 0x1f) + 1;
        if ((VAR11 & 0x80) == 0)
        {
            VAR13 = (VAR11 << 8) | (VAR2->VAR28[VAR9++]);
            VAR11 = 0;
            if ((VAR2->VAR28[VAR9] & 0x80) != 0)
            {
                VAR11 = 0x20;
                VAR12 = 1;
            }
        }
        switch (VAR11 & 0xe0)
        {
        case 0x80:
            while (VAR12--)
            {
                FUN4();
            }
            break;
        case 0xa0:
            VAR13 = FUN5(&VAR2->VAR28[VAR9]);
            VAR9 += 2;
            while (VAR12--)
            {
                VAR24 = VAR22 + VAR23;
                for (VAR26 = 0; VAR26 < 4; VAR26++)
                {
                    for (VAR25 = 0; VAR25 < 4; VAR25++)
                    {
                        VAR20[VAR24] = VAR13;
                        VAR24++;
                    }
                    VAR24 += VAR8;
                }
                FUN4();
            }
            break;
        case 0xc0:
            VAR13 = FUN5(&VAR2->VAR28[VAR9]);
            VAR9 += 2;
        case 0x20:
            VAR14 = FUN5(&VAR2->VAR28[VAR9]);
            VAR9 += 2;
            VAR15[0] = VAR14;
            VAR15[1] = 0;
            VAR15[2] = 0;
            VAR15[3] = VAR13;
            VAR18 = (VAR13 >> 10) & 0x1F;
            VAR19 = (VAR14 >> 10) & 0x1F;
            VAR15[1] |= ((11 * VAR18 + 21 * VAR19) >> 5) << 10;
            VAR15[2] |= ((21 * VAR18 + 11 * VAR19) >> 5) << 10;
            VAR18 = (VAR13 >> 5) & 0x1F;
            VAR19 = (VAR14 >> 5) & 0x1F;
            VAR15[1] |= ((11 * VAR18 + 21 * VAR19) >> 5) << 5;
            VAR15[2] |= ((21 * VAR18 + 11 * VAR19) >> 5) << 5;
            VAR18 = VAR13 & 0x1F;
            VAR19 = VAR14 & 0x1F;
            VAR15[1] |= ((11 * VAR18 + 21 * VAR19) >> 5);
            VAR15[2] |= ((21 * VAR18 + 11 * VAR19) >> 5);
            while (VAR12--)
            {
                VAR24 = VAR22 + VAR23;
                for (VAR26 = 0; VAR26 < 4; VAR26++)
                {
                    VAR16 = VAR2->VAR28[VAR9++];
                    for (VAR25 = 0; VAR25 < 4; VAR25++)
                    {
                        VAR17 = (VAR16 >> (2 * (3 - VAR25))) & 0x03;
                        VAR20[VAR24] = VAR15[VAR17];
                        VAR24++;
                    }
                    VAR24 += VAR8;
                }
                FUN4();
            }
            break;
        case 0x00:
            if (VAR2->VAR30 - VAR9 < 16)
                VAR24 = VAR22 + VAR23;
            for (VAR26 = 0; VAR26 < 4; VAR26++)
            {
                for (VAR25 = 0; VAR25 < 4; VAR25++)
                {
                    if ((VAR26 != 0) || (VAR25 != 0))
                    {
                        VAR13 = FUN5(&VAR2->VAR28[VAR9]);
                        VAR9 += 2;
                    }
                    VAR20[VAR24] = VAR13;
                    VAR24++;
                }
                VAR24 += VAR8;
            }
            FUN4();
            break;
        default:
            FUN2(VAR2->VAR4, VAR29, ""
                                           "",
                   VAR11, VAR10 - VAR9);
        }
    }