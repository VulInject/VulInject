static void FUN1(VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int32_t VAR9;
    VAR1 *VAR10;
    uint32_t VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    uint32_t VAR17;
    int VAR18 = (VAR5 + 7) / 8;
    int VAR19 = ((VAR5 + 15) / 16) * 2;
    int VAR20, VAR21, VAR22, VAR23, VAR24;
    GetByteContext VAR25;
    VAR9 = VAR19 * VAR7;
    VAR20 = VAR5 < 320 ? (320 - VAR5) / 8 / 2 : 0;
    FUN2(&VAR25, VAR3, VAR4 - VAR3);
    while (FUN3(&VAR25) >= 2)
    {
        VAR11 = FUN4(&VAR25);
        switch (VAR11)
        {
        case 0:
            return;
        case 1:
            VAR12 = FUN4(&VAR25);
            VAR13 = FUN4(&VAR25);
            VAR14 = FUN4(&VAR25);
            for (VAR22 = 0; VAR22 < VAR14; VAR22++)
            {
                VAR17 = FUN4(&VAR25);
                if (VAR13 * VAR7 == 0 || FUN3(&VAR25) < VAR13 * VAR7)
                    return;
                if (VAR20)
                    VAR17 = ((VAR17 / (320 / 8)) * VAR9) + (VAR17 % (320 / 8)) - VAR20;
                else
                    VAR17 = ((VAR17 / VAR18) * VAR9) + (VAR17 % VAR18);
                for (VAR21 = 0; VAR21 < VAR13; VAR21++)
                {
                    for (VAR24 = 0; VAR24 < VAR7; VAR24++)
                    {
                        uint8_t VAR26 = FUN5(&VAR25);
                        if (VAR17 >= VAR8)
                            return;
                        VAR10 = VAR2 + VAR17;
                        if (VAR12)
                            VAR10[0] ^= VAR26;
                        else
                            VAR10[0] = VAR26;
                        VAR17 += VAR19;
                    }
                }
                if ((VAR13 * VAR7) & 1)
                    FUN6(&VAR25, 1);
            }
            break;
        case 2:
            VAR12 = FUN4(&VAR25);
            VAR15 = FUN4(&VAR25);
            VAR16 = FUN4(&VAR25);
            VAR14 = FUN4(&VAR25);
            for (VAR22 = 0; VAR22 < VAR14; VAR22++)
            {
                VAR17 = FUN4(&VAR25);
                if (VAR20)
                    VAR17 = ((VAR17 / (320 / 8)) * VAR9) + (VAR17 % (320 / 8)) - VAR20;
                else
                    VAR17 = ((VAR17 / VAR18) * VAR9) + (VAR17 % VAR18);
                for (VAR23 = 0; VAR23 < VAR15; VAR23++)
                {
                    for (VAR24 = 0; VAR24 < VAR7; VAR24++)
                    {
                        unsigned VAR27 = VAR17 + (VAR23 * VAR9) + VAR24 * VAR19;
                        if (!VAR16 || FUN3(&VAR25) < VAR16)
                            return;
                        for (VAR21 = 0; VAR21 < VAR16; VAR21++)
                        {
                            uint8_t VAR26 = FUN5(&VAR25);
                            if (VAR27 >= VAR8)
                                return;
                            VAR10 = VAR2 + VAR27;
                            if (VAR12)
                                VAR10[0] ^= VAR26;
                            else
                                VAR10[0] = VAR26;
                            VAR27++;
                        }
                    }
                }
                if ((VAR15 * VAR16 * VAR7) & 1)
                    FUN6(&VAR25, 1);
            }
            break;
        default:
            return;
        }
    }
}