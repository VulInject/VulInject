static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, uint64_t VAR10, int64_t VAR11)
{
    int VAR12 = VAR6->VAR13->VAR14;
    int VAR15 = VAR4->VAR16.VAR17;
    int VAR18 = VAR4->VAR16.VAR19;
    int VAR20 = VAR4->VAR16.VAR21;
    int VAR22 = VAR4->VAR16.VAR23;
    int VAR24 = VAR4->VAR16.VAR25;
    int VAR26;
    if (!VAR4->VAR16.VAR27)
    {
        if (VAR4->VAR16.VAR23 == 0)
            VAR4->VAR16.VAR28 = VAR10;
        if (VAR6->VAR13->VAR29 == VAR30)
        {
            if (VAR9 < VAR18 * VAR20 / 2)
            {
                FUN2(VAR2->VAR31, VAR32, "");
                return VAR33;
            }
            for (VAR26 = 0; VAR26 < VAR20 / 2; VAR26++)
                memcpy(VAR4->VAR16.VAR34 + VAR26 * 2 * VAR24 + VAR22 * VAR18, VAR8 + VAR26 * VAR18, VAR18);
        }
        else if (VAR6->VAR13->VAR29 == VAR35)
        {
            if (VAR9 < VAR24)
            {
                FUN2(VAR2->VAR31, VAR32, "");
                return VAR33;
            }
            memcpy(VAR4->VAR16.VAR34 + VAR22 * VAR24, VAR8, VAR24);
        }
        else
        {
            if (VAR9 < VAR15 * VAR24 / VAR15)
            {
                FUN2(VAR2->VAR31, VAR32, "");
                return VAR33;
            }
            for (VAR26 = 0; VAR26 < VAR24 / VAR15; VAR26++)
                memcpy(VAR4->VAR16.VAR34 + VAR15 * (VAR20 * VAR26 + ((VAR20 + 1) / 2) * (VAR22 & 1) + (VAR22 >> 1)), VAR8 + VAR26 * VAR15, VAR15);
        }
        if (++VAR4->VAR16.VAR23 >= VAR20)
        {
            if (VAR6->VAR13->VAR29 == VAR35)
                FUN3(VAR4->VAR16.VAR34, VAR20, VAR24);
            VAR4->VAR16.VAR23 = 0;
            VAR4->VAR16.VAR27 = VAR20 * VAR24 / VAR12;
        }
    }
    while (VAR4->VAR16.VAR27)
    {
        VAR36 *VAR37 = NULL;
        if (!(VAR37 = FUN4(sizeof(VAR36))) || FUN5(VAR37, VAR12) < 0)
        {
            FUN6(VAR37);
            return FUN7(VAR38);
        }
        memcpy(VAR37->VAR8, VAR4->VAR16.VAR34 + VAR12 * (VAR20 * VAR24 / VAR12 - VAR4->VAR16.VAR27--), VAR12);
        VAR37->VAR39 = VAR4->VAR16.VAR28;
        VAR4->VAR16.VAR28 = VAR40;
        VAR37->VAR11 = VAR11;
        VAR37->VAR41 = VAR6->VAR42;
        FUN8(&VAR2->VAR43, &VAR2->VAR44, VAR37);
    }
    return 0;
}