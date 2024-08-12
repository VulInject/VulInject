static void FUN1(VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    GetByteContext VAR9, VAR10, VAR11, VAR12;
    PutByteContext VAR13;
    unsigned VAR14, VAR15;
    int VAR16, VAR17, VAR18;
    int VAR19 = (VAR5 + 7) / 8;
    int VAR20 = ((VAR5 + 15) / 16) * 2;
    int VAR21 = VAR20 * VAR7;
    if (VAR4 - VAR3 <= 64)
        return;
    FUN2(&VAR9, VAR3, VAR4 - VAR3);
    FUN2(&VAR10, VAR3 + 32, VAR4 - (VAR3 + 32));
    FUN3(&VAR13, VAR2, VAR8);
    VAR18 = VAR6 ? (((VAR5 + 7) / 8) * VAR7) : 2;
    for (VAR17 = 0; VAR17 < VAR7; VAR17++)
    {
        VAR14 = FUN4(&VAR9);
        VAR15 = FUN4(&VAR10);
        if (!VAR14)
            continue;
        if (2LL * VAR14 >= VAR4 - VAR3)
            return;
        if (2LL * VAR15 >= VAR4 - VAR3)
            return;
        FUN2(&VAR11, VAR3 + 2 * VAR14, VAR4 - (VAR3 + 2 * VAR14));
        FUN2(&VAR12, VAR3 + 2 * VAR15, VAR4 - (VAR3 + 2 * VAR15));
        while ((FUN5(&VAR12)) != 0xFFFF && FUN6(&VAR12) >= 4)
        {
            uint32_t VAR22 = FUN7(&VAR12);
            int16_t VAR23 = FUN7(&VAR12);
            uint16_t VAR24;
            VAR22 = ((2 * VAR22) / VAR19) * VAR21 + ((2 * VAR22) % VAR19) + VAR17 * VAR20;
            if (VAR23 < 0)
            {
                FUN8(&VAR13, VAR22, VAR25);
                VAR23 = -VAR23;
                VAR24 = FUN7(&VAR11);
                for (VAR16 = 0; VAR16 < VAR23; VAR16++)
                {
                    FUN9(&VAR13, VAR24);
                    FUN10(&VAR13, VAR18 - 2);
                }
            }
            else
            {
                FUN8(&VAR13, VAR22, VAR25);
                for (VAR16 = 0; VAR16 < VAR23; VAR16++)
                {
                    VAR24 = FUN7(&VAR11);
                    FUN9(&VAR13, VAR24);
                    FUN10(&VAR13, VAR18 - 2);
                }
            }
        }
    }
}