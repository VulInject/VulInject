static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    size_t VAR7, VAR8;
    VAR9 *VAR10 = FUN2(VAR4->VAR11 * VAR4->VAR12);
    if (!VAR10)
        return FUN3(VAR13);
    if (VAR4->VAR14 == VAR15 && VAR2->VAR16 != VAR17 && VAR2->VAR16 != VAR18 && VAR2->VAR16 != VAR19)
    {
        FUN4(VAR2, "", FUN5(VAR2->VAR16));
        return VAR20;
    }
    if (VAR4->VAR21 != VAR22)
    {
        FUN6(&VAR4->VAR23, VAR24, 0);
        memcpy(VAR10, VAR4->VAR23.VAR25->VAR26[0], VAR4->VAR11 * VAR4->VAR12);
        if (VAR4->VAR21 == VAR27)
            for (VAR8 = VAR4->VAR28; VAR8 < VAR4->VAR28 + VAR4->VAR29; ++VAR8)
                memset(VAR10 + VAR4->VAR11 * VAR8 + VAR4->VAR30 * VAR4->VAR31, 0, VAR4->VAR30 * VAR4->VAR32);
        memcpy(VAR4->VAR33.VAR25->VAR26[0], VAR10, VAR4->VAR11 * VAR4->VAR12);
        FUN7(&VAR4->VAR33, VAR24, 0);
    }
    else
    {
        FUN6(&VAR4->VAR33, VAR24, 0);
        memcpy(VAR10, VAR4->VAR33.VAR25->VAR26[0], VAR4->VAR11 * VAR4->VAR12);
    }
    if (VAR4->VAR14 == VAR34)
    {
        for (VAR8 = VAR4->VAR35; VAR8 < VAR4->VAR35 + VAR4->VAR36; ++VAR8)
        {
            size_t VAR37 = VAR4->VAR11 * VAR8 + VAR4->VAR30 * VAR4->VAR38;
            memcpy(VAR10 + VAR37, VAR6->VAR26[0] + VAR37, VAR4->VAR30 * VAR4->VAR39);
        }
    }
    else
    {
        for (VAR8 = VAR4->VAR35; VAR8 < VAR4->VAR35 + VAR4->VAR36; ++VAR8)
        {
            VAR9 *VAR40 = VAR6->VAR26[0] + VAR4->VAR11 * VAR8 + VAR4->VAR30 * VAR4->VAR38;
            VAR9 *VAR41 = VAR10 + VAR4->VAR11 * VAR8 + VAR4->VAR30 * VAR4->VAR38;
            for (VAR7 = VAR4->VAR38; VAR7 < VAR4->VAR38 + VAR4->VAR39; ++VAR7, VAR40 += VAR4->VAR30, VAR41 += VAR4->VAR30)
            {
                size_t VAR42;
                uint8_t VAR43, VAR44, VAR45;
                uint8_t VAR46[4];
                switch (VAR2->VAR16)
                {
                case VAR17:
                    VAR43 = VAR40[3];
                    VAR44 = VAR41[3];
                    break;
                case VAR18:
                    VAR43 = VAR40[1];
                    VAR44 = VAR41[1];
                    break;
                case VAR19:
                    VAR43 = VAR4->VAR47[VAR40[0]] >> 24;
                    VAR44 = VAR4->VAR47[VAR41[0]] >> 24;
                    break;
                }
                if (VAR43 == 0)
                    continue;
                if (VAR43 == 255)
                {
                    memcpy(VAR41, VAR40, VAR4->VAR30);
                    continue;
                }
                if (VAR2->VAR16 == VAR19)
                {
                    FUN4(VAR2, "");
                    VAR41[0] = VAR40[0];
                    continue;
                }
                VAR45 = VAR43 + FUN8((255 - VAR43) * VAR44);
                for (VAR42 = 0; VAR42 < VAR4->VAR30 - 1; ++VAR42)
                {
                    if (VAR45 == 0)
                    {
                        VAR46[VAR42] = 0;
                    }
                    else if (VAR44 == 255)
                    {
                        VAR46[VAR42] = FUN8(VAR43 * VAR40[VAR42] + (255 - VAR43) * VAR41[VAR42]);
                    }
                    else
                    {
                        VAR46[VAR42] = (255 * VAR43 * VAR40[VAR42] + (255 - VAR43) * VAR44 * VAR41[VAR42]) / (255 * VAR45);
                    }
                }
                VAR46[VAR42] = VAR45;
                memcpy(VAR41, VAR46, VAR4->VAR30);
            }
        }
    }
    memcpy(VAR6->VAR26[0], VAR10, VAR4->VAR11 * VAR4->VAR12);
    FUN9(VAR10);
    return 0;
}