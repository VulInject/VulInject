static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR16 *VAR17;
    VAR16 *VAR18;
    uint8_t VAR19[64];
    EncBlockInfo VAR20[5 * VAR21];
    PutBitContext VAR22[5 * VAR21];
    VAR23 *VAR24;
    VAR25 *VAR26;
    int VAR27 = 0;
    int VAR28[5] = {15, 15, 15, 15, 15};
    int *VAR29 = &VAR28[0];
    VAR18 = &VAR6->VAR30[VAR4->VAR31 * 80];
    VAR26 = &VAR20[0];
    for (VAR8 = 0; VAR8 < 5; VAR8++)
    {
        FUN2(VAR6, VAR4, VAR8, &VAR11, &VAR12);
        if ((VAR6->VAR32->VAR33 == VAR34) || (VAR6->VAR32->VAR33 == VAR35 && VAR11 >= (704 / 8)) || (VAR6->VAR32->VAR36 >= 720 && VAR12 != 134))
        {
            VAR15 = VAR6->VAR37.VAR14[0] << 3;
        }
        else
        {
            VAR15 = 16;
        }
        VAR17 = VAR6->VAR37.VAR38[0] + ((VAR12 * VAR6->VAR37.VAR14[0] + VAR11) << 3);
        VAR14 = VAR6->VAR37.VAR14[0];
        if (VAR6->VAR32->VAR39 == 4)
        {
            VAR27 += FUN3(VAR26 + 0, VAR17, VAR14, VAR6, 0) + FUN3(VAR26 + 1, NULL, VAR14, VAR6, 0) + FUN3(VAR26 + 2, VAR17 + 8, VAR14, VAR6, 0) + FUN3(VAR26 + 3, NULL, VAR14, VAR6, 0);
        }
        else
        {
            VAR27 += FUN3(VAR26 + 0, VAR17, VAR14, VAR6, 0) + FUN3(VAR26 + 1, VAR17 + 8, VAR14, VAR6, 0) + FUN3(VAR26 + 2, VAR17 + VAR15, VAR14, VAR6, 0) + FUN3(VAR26 + 3, VAR17 + 8 + VAR15, VAR14, VAR6, 0);
        }
        VAR26 += 4;
        VAR13 = (((VAR12 >> (VAR6->VAR32->VAR33 == VAR34)) * VAR6->VAR37.VAR14[1] + (VAR11 >> ((VAR6->VAR32->VAR33 == VAR35) ? 2 : 1))) << 3);
        for (VAR10 = 2; VAR10; VAR10--)
        {
            VAR16 *VAR40 = VAR6->VAR37.VAR38[VAR10] + VAR13;
            VAR14 = VAR6->VAR37.VAR14[VAR10];
            VAR15 = (VAR12 == 134) ? 8 : (VAR6->VAR37.VAR14[VAR10] << 3);
            if (VAR6->VAR32->VAR33 == VAR35 && VAR11 >= (704 / 8))
            {
                VAR16 *VAR41;
                VAR16 *VAR42 = VAR19;
                for (VAR9 = 0; VAR9 < 8; VAR9++)
                {
                    VAR41 = VAR40 + (VAR14 << 3);
                    VAR42[0] = VAR40[0];
                    VAR42[1] = VAR40[1];
                    VAR42[2] = VAR40[2];
                    VAR42[3] = VAR40[3];
                    VAR42[4] = VAR41[0];
                    VAR42[5] = VAR41[1];
                    VAR42[6] = VAR41[2];
                    VAR42[7] = VAR41[3];
                    VAR40 += VAR14;
                    VAR42 += 8;
                }
                VAR40 = VAR19;
                VAR14 = 8;
            }
            VAR27 += FUN3(VAR26++, VAR40, VAR14, VAR6, 1);
            if (VAR6->VAR32->VAR43 == 8)
            {
                VAR27 += FUN3(VAR26++, VAR40 + VAR15, VAR14, VAR6, 1);
            }
        }
    }
    if (VAR44 < VAR27)
        FUN4(&VAR20[0], VAR29);
    for (VAR10 = 0; VAR10 < 5 * VAR6->VAR32->VAR43;)
    {
        int VAR45 = VAR10;
        VAR18[3] = *VAR29++;
        VAR18 += 4;
        for (VAR9 = 0; VAR9 < VAR6->VAR32->VAR43; VAR9++, VAR10++)
        {
            int VAR46 = VAR6->VAR32->VAR47[VAR9] >> 3;
            FUN5(&VAR22[VAR10], VAR18, VAR46);
            FUN6(&VAR22[VAR10], 9, (VAR48)(((VAR20[VAR10].VAR49[0] >> 3) - 1024 + 2) >> 2));
            FUN6(&VAR22[VAR10], 1, VAR20[VAR10].VAR50);
            FUN6(&VAR22[VAR10], 2, VAR20[VAR10].VAR51);
            FUN7(&VAR20[VAR10], &VAR22[VAR10], &VAR22[VAR10 + 1]);
            VAR18 += VAR46;
        }
        VAR24 = &VAR22[VAR45];
        for (VAR9 = 0; VAR9 < VAR6->VAR32->VAR43; VAR9++)
        {
            if (VAR20[VAR45 + VAR9].VAR52)
                VAR24 = FUN7(&VAR20[VAR45 + VAR9], VAR24, &VAR22[VAR45 + VAR6->VAR32->VAR43]);
        }
    }
    VAR24 = &VAR22[0];
    for (VAR10 = 0; VAR10 < 5 * VAR6->VAR32->VAR43; VAR10++)
    {
        if (VAR20[VAR10].VAR52)
            VAR24 = FUN7(&VAR20[VAR10], VAR24, &VAR22[VAR6->VAR32->VAR43 * 5]);
        if (VAR20[VAR10].VAR52)
            FUN8(NULL, VAR53, "");
    }
    for (VAR10 = 0; VAR10 < 5 * VAR6->VAR32->VAR43; VAR10++)
        FUN9(&VAR22[VAR10]);
    return 0;
}