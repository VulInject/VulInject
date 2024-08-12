static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    uint8_t VAR11;
    unsigned int VAR12, VAR13, VAR14;
    int VAR15;
    if (VAR5 <= 4)
        VAR5 -= 4;
    VAR15 = FUN2(&VAR4);
    VAR10 = FUN3(VAR15, &VAR7->VAR16);
    if (!VAR10)
    {
        if (VAR7->VAR16.VAR17 >= VAR18)
        {
            FUN4(VAR2, VAR19, "");
            VAR10 = &VAR7->VAR16.VAR10[VAR7->VAR16.VAR17++];
            VAR10->VAR15 = VAR15;
            VAR4 += 1;
            VAR11 = FUN5(&VAR4);
            if (!(VAR11 & 0x80))
            {
                if (VAR5 > VAR10->VAR20)
                    memcpy(VAR10->VAR21 + VAR10->VAR22, VAR4, VAR5);
                VAR10->VAR22 += VAR5;
                VAR10->VAR20 -= VAR5;
                return 0;
                if (VAR5 <= 7)
                    VAR5 -= 7;
                VAR12 = FUN6(&VAR4) - 2 * 2;
                VAR13 = FUN2(&VAR4);
                VAR14 = FUN2(&VAR4);
                if (VAR2->VAR13 < VAR13 || VAR2->VAR14 < VAR14)
                {
                    FUN4(VAR2, VAR19, "");
                    VAR10->VAR23 = VAR13;
                    VAR10->VAR24 = VAR14;
                    FUN7(&VAR10->VAR21, &VAR10->VAR25, VAR12);
                    if (!VAR10->VAR21)
                        return FUN8(VAR26);
                    memcpy(VAR10->VAR21, VAR4, VAR5);
                    VAR10->VAR22 = VAR5;
                    VAR10->VAR20 = VAR12 - VAR5;
                    return 0