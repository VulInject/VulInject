static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5 = 0;
    int VAR6, VAR7, VAR8;
    for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++)
    {
        for (VAR7 = VAR6 ? 1 : 0; VAR7 < 4; VAR7++)
        {
            VAR10 *VAR11 = &VAR2->VAR12[0].VAR13[VAR6][VAR7];
            VAR14 *VAR15 = VAR11->VAR15;
            const int VAR16 = VAR11->VAR17;
            const int VAR18 = VAR11->VAR19;
            const int VAR20 = VAR11->VAR20;
            const int VAR21 = FUN2(2 * VAR22 + VAR11->VAR21, 0, VAR22 * 16);
            const int VAR23 = VAR24[VAR21 & (VAR22 - 1)] << (VAR21 >> VAR25);
            const int VAR26 = (1 << 16) / VAR23;
            int VAR27, VAR28;
            if (VAR7 == 0)
                FUN3(VAR2, VAR11, VAR15, VAR20, 1, 0);
            for (VAR28 = 0; VAR28 < VAR18; VAR28++)
                for (VAR27 = 0; VAR27 < VAR16; VAR27++)
                    VAR5 += FUN4(VAR15[VAR27 + VAR28 * VAR20]) * VAR26 >> 16;
            if (VAR7 == 0)
                FUN5(VAR2, VAR11, VAR15, VAR20, 1, 0);
        }
    }
    VAR5 = (VAR29)VAR5 * VAR5 >> 16;
    assert(VAR5 < VAR30);
    if (VAR4->VAR31 == VAR32)
    {
        VAR2->VAR33.VAR34.VAR35 = VAR5;
        VAR2->VAR33.VAR34.VAR36 = 0;
    }
    else
    {
        VAR2->VAR33.VAR34.VAR36 = VAR5;
        VAR2->VAR33.VAR34.VAR35 = 0;
    }
    VAR4->VAR37 = FUN6(&VAR2->VAR33, 1);
    if (VAR4->VAR37 < 0)
        return VAR38;
    VAR2->VAR39 = VAR4->VAR37 * 3 / 2;
    VAR8 = FUN7(VAR4->VAR37) - VAR2->VAR21;
    VAR2->VAR21 += VAR8;
    return VAR8;
}