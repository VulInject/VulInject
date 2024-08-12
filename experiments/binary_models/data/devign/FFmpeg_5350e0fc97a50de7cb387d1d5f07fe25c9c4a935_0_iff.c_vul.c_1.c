static void FUN1(VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int32_t VAR9;
    VAR1 *VAR10 = VAR2 + VAR8, *VAR11;
    uint32_t VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    uint32_t VAR18;
    int VAR19 = (VAR5 + 7) / 8;
    int VAR20 = ((VAR5 + 15) / 16) * 2;
    int VAR21, VAR22, VAR23, VAR24, VAR25;
    GetByteContext VAR26;
    VAR9 = VAR20 * VAR7;
    VAR21 = VAR5 < 320 ? (320 - VAR5) / 8 / 2 : 0;
    FUN2(&VAR26, VAR3, VAR4 - VAR3);
    while (FUN3(&VAR26) >= 2)
    {
        VAR12 = FUN4(&VAR26);
        switch (VAR12)
        {
        case 0:
            return;
        case 1:
            VAR13 = FUN4(&VAR26);
            VAR14 = FUN4(&VAR26);
            VAR15 = FUN4(&VAR26);
            for (VAR23 = 0; VAR23 < VAR15; VAR23++)
            {
                VAR18 = FUN4(&VAR26);
                if (VAR21)
                    VAR18 = ((VAR18 / (320 / 8)) * VAR9) + (VAR18 % (320 / 8)) - VAR21;
                else
                    VAR18 = ((VAR18 / VAR19) * VAR9) + (VAR18 % VAR19);
                VAR11 = VAR2 + VAR18;
                if (VAR11 >= VAR10)
                    return;
                for (VAR22 = 0; VAR22 < VAR14; VAR22++)
                {
                    for (VAR25 = 0; VAR25 < VAR7; VAR25++)
                    {
                        uint8_t VAR27 = FUN5(&VAR26);
                        if (VAR13)
                            VAR11[0] ^= VAR27;
                        else
                            VAR11[0] = VAR27;
                        VAR11 += VAR20;
                        if (VAR11 >= VAR10)
                            return;
                    }
                }
                if ((VAR14 * VAR7) & 1)
                    FUN6(&VAR26, 1);
            }
            break;
        case 2:
            VAR13 = FUN4(&VAR26);
            VAR16 = FUN4(&VAR26);
            VAR17 = FUN4(&VAR26);
            VAR15 = FUN4(&VAR26);
            for (VAR23 = 0; VAR23 < VAR15; VAR23++)
            {
                VAR18 = FUN4(&VAR26);
                if (VAR21)
                    VAR18 = ((VAR18 / (320 / 8)) * VAR9) + (VAR18 % (320 / 8)) - VAR21;
                else
                    VAR18 = ((VAR18 / VAR19) * VAR9) + (VAR18 % VAR19);
                for (VAR24 = 0; VAR24 < VAR16; VAR24++)
                {
                    for (VAR25 = 0; VAR25 < VAR7; VAR25++)
                    {
                        VAR11 = VAR2 + VAR18 + (VAR24 * VAR9) + VAR25 * VAR20;
                        if (VAR11 >= VAR10)
                            return;
                        for (VAR22 = 0; VAR22 < VAR17; VAR22++)
                        {
                            uint8_t VAR27 = FUN5(&VAR26);
                            if (VAR13)
                                VAR11[0] ^= VAR27;
                            else
                                VAR11[0] = VAR27;
                            VAR11++;
                            if (VAR11 >= VAR10)
                                return;
                        }
                    }
                }
                if ((VAR16 * VAR17 * VAR7) & 1)
                    FUN6(&VAR26, 1);
            }
            break;
        default:
            return;
        }
    }
}