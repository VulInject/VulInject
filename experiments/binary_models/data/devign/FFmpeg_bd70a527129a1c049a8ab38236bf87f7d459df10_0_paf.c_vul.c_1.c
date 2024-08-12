static int FUN1(VAR1 *VAR2, uint8_t VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    uint32_t VAR9, VAR10;
    VAR4 *VAR11, *VAR12, VAR13 = 0, VAR14 = 0, VAR15, VAR16, VAR17;
    const VAR4 *VAR18, *send, *VAR19;
    int VAR20, VAR21, VAR22 = 0;
    VAR20 = FUN2(&VAR7->VAR23);
    if (VAR20)
    {
        if (VAR3 & 0x10)
        {
            int VAR24;
            VAR24 = FUN3(&VAR7->VAR23) & 3;
            if (VAR24)
                FUN4(&VAR7->VAR23, 4 - VAR24);
        }
        do
        {
            VAR15 = FUN2(&VAR7->VAR23);
            VAR16 = FUN2(&VAR7->VAR23);
            VAR17 = (VAR15 & 0xC0) >> 6;
            VAR11 = VAR7->VAR25[VAR17] + FUN5(VAR2, VAR15, VAR16);
            VAR12 = VAR7->VAR25[VAR17] + VAR7->VAR26;
            VAR10 = (VAR16 & 0x7F) * 2;
            VAR21 = FUN6(&VAR7->VAR23) + VAR10;
            do
            {
                VAR10++;
                if (VAR11 + 3 * VAR2->VAR27 + 4 > VAR12)
                    return VAR28;
                FUN7(VAR2, VAR11);
                if ((VAR10 & 0x3F) == 0)
                    VAR11 += VAR2->VAR27 * 3;
                VAR11 += 4;
            } while (VAR10 < VAR21);
        } while (--VAR20);
    }
    VAR11 = VAR7->VAR25[VAR7->VAR29];
    do
    {
        VAR15 = FUN2(&VAR7->VAR23);
        VAR16 = FUN2(&VAR7->VAR23);
        VAR17 = (VAR15 & 0xC0) >> 6;
        VAR18 = VAR7->VAR25[VAR17] + FUN5(VAR2, VAR15, VAR16);
        send = VAR7->VAR25[VAR17] + VAR7->VAR26;
        if (VAR18 + 3 * VAR2->VAR27 + 4 > send)
            return VAR28;
        FUN8(VAR11, VAR18, VAR2->VAR27, VAR2->VAR27, 4);
        VAR20++;
        if ((VAR20 & 0x3F) == 0)
            VAR11 += VAR2->VAR27 * 3;
        VAR11 += 4;
    } while (VAR20 < VAR7->VAR30 / 16);
    VAR9 = FUN6(&VAR7->VAR23);
    FUN4(&VAR7->VAR23, 2);
    if (FUN9(&VAR7->VAR23) < VAR9)
        return VAR28;
    VAR19 = VAR5 + FUN3(&VAR7->VAR23);
    FUN10(&VAR7->VAR23, VAR9);
    VAR11 = VAR7->VAR25[VAR7->VAR29];
    for (VAR20 = 0; VAR20 < VAR2->VAR31; VAR20 += 4, VAR11 += VAR2->VAR27 * 3)
    {
        for (VAR21 = 0; VAR21 < VAR2->VAR27; VAR21 += 4, VAR11 += 4)
        {
            int VAR32, VAR33 = 0;
            if (VAR22 > VAR9)
                return VAR28;
            if (VAR21 & 4)
            {
                VAR32 = VAR19[VAR22] & 15;
                VAR22++;
            }
            else
            {
                VAR32 = VAR19[VAR22] >> 4;
            }
            while (VAR34[VAR32][VAR33])
            {
                VAR10 = VAR2->VAR27 * 2;
                VAR3 = VAR34[VAR32][VAR33++];
                switch (VAR3)
                {
                case 2:
                    VAR10 = 0;
                case 3:
                    VAR14 = FUN2(&VAR7->VAR23);
                case 4:
                    VAR13 = FUN2(&VAR7->VAR23);
                    FUN11(VAR2, VAR13, VAR11 + VAR10, VAR14);
                    break;
                case 5:
                    VAR10 = 0;
                case 6:
                    VAR15 = FUN2(&VAR7->VAR23);
                    VAR16 = FUN2(&VAR7->VAR23);
                    VAR17 = (VAR15 & 0xC0) >> 6;
                    VAR18 = VAR7->VAR25[VAR17] + FUN5(VAR2, VAR15, VAR16);
                    send = VAR7->VAR25[VAR17] + VAR7->VAR26;
                case 7:
                    if (VAR18 + VAR10 + VAR2->VAR27 + 4 > send)
                        return VAR28;
                    VAR13 = FUN2(&VAR7->VAR23);
                    FUN12(VAR2, VAR13, VAR11 + VAR10, VAR18 + VAR10);
                    break;
                }
            }
        }
    }
    return 0;
}