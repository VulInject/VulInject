static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5)
{
    uint32_t VAR6, VAR7;
    VAR3 *VAR8, *VAR9, VAR10 = 0, VAR11 = 0;
    const VAR3 *VAR12, *send, *VAR13;
    int VAR14, VAR15, VAR16 = 0;
    VAR14 = FUN2(&VAR2->VAR17);
    if (VAR14)
    {
        if (VAR5 & 0x10)
        {
            int VAR18;
            VAR18 = FUN3(&VAR2->VAR17) & 3;
            if (VAR18)
                FUN4(&VAR2->VAR17, 4 - VAR18);
        }
        do
        {
            int VAR19, VAR20, VAR21, VAR22;
            VAR20 = FUN5(&VAR2->VAR17);
            VAR19 = VAR20 >> 14;
            VAR21 = (VAR20 & 0x7F) * 2;
            VAR22 = ((VAR20 >> 7) & 0x7F) * 2;
            VAR8 = VAR2->VAR23[VAR19] + VAR21 + VAR22 * VAR2->VAR24;
            VAR9 = VAR2->VAR23[VAR19] + VAR2->VAR25;
            VAR7 = (VAR21 & 0x7F) * 2;
            VAR15 = FUN6(&VAR2->VAR17) + VAR7;
            do
            {
                VAR7++;
                if (VAR8 + 3 * VAR2->VAR24 + 4 > VAR9)
                    return VAR26;
                FUN7(VAR2, VAR8, VAR2->VAR24);
                if ((VAR7 & 0x3F) == 0)
                    VAR8 += VAR2->VAR24 * 3;
                VAR8 += 4;
            } while (VAR7 < VAR15);
        } while (--VAR14);
    }
    VAR8 = VAR2->VAR23[VAR2->VAR27];
    VAR9 = VAR2->VAR23[VAR2->VAR27] + VAR2->VAR25;
    do
    {
        FUN8(VAR2, &VAR12, &send);
        if ((VAR12 + 3 * VAR2->VAR24 + 4 > send) || (VAR8 + 3 * VAR2->VAR24 + 4 > VAR9))
            return VAR26;
        FUN9(VAR8, VAR12, VAR2->VAR24, VAR2->VAR24, 4);
        VAR14++;
        if ((VAR14 & 0x3F) == 0)
            VAR8 += VAR2->VAR24 * 3;
        VAR8 += 4;
    } while (VAR14 < VAR2->VAR28 / 16);
    VAR6 = FUN6(&VAR2->VAR17);
    FUN4(&VAR2->VAR17, 2);
    if (FUN10(&VAR2->VAR17) < VAR6)
        return VAR26;
    VAR13 = VAR4 + FUN3(&VAR2->VAR17);
    FUN11(&VAR2->VAR17, VAR6);
    VAR8 = VAR2->VAR23[VAR2->VAR27];
    for (VAR14 = 0; VAR14 < VAR2->VAR29; VAR14 += 4, VAR8 += VAR2->VAR24 * 3)
        for (VAR15 = 0; VAR15 < VAR2->VAR24; VAR15 += 4, VAR8 += 4)
        {
            int VAR30, VAR31 = 0;
            if (VAR16 > VAR6)
                return VAR26;
            if (VAR15 & 4)
            {
                VAR30 = VAR13[VAR16] & 15;
                VAR16++;
            }
            else
            {
                VAR30 = VAR13[VAR16] >> 4;
            }
            while (VAR32[VAR30][VAR31])
            {
                VAR7 = VAR2->VAR24 * 2;
                VAR5 = VAR32[VAR30][VAR31++];
                switch (VAR5)
                {
                case 2:
                    VAR7 = 0;
                case 3:
                    VAR11 = FUN2(&VAR2->VAR17);
                case 4:
                    VAR10 = FUN2(&VAR2->VAR17);
                    FUN12(VAR8 + VAR7, VAR2->VAR24, VAR10, VAR11);
                    break;
                case 5:
                    VAR7 = 0;
                case 6:
                    FUN8(VAR2, &VAR12, &send);
                case 7:
                    if (VAR12 + VAR7 + VAR2->VAR24 + 4 > send)
                        return VAR26;
                    VAR10 = FUN2(&VAR2->VAR17);
                    FUN13(VAR8 + VAR7, VAR2->VAR24, VAR10, VAR12 + VAR7);
                    break;
                }
            }
        }
    return 0;
}