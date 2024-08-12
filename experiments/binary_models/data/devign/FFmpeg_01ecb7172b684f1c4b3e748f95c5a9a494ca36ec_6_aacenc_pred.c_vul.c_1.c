void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7 = 0, VAR8 = 0, VAR9 = 0;
    const int VAR10 = FUN2(VAR4->VAR11.VAR12, VAR13[VAR2->VAR14]);
    float *VAR15 = &VAR2->VAR16[128 * 0], *VAR17 = &VAR2->VAR16[128 * 1];
    float *VAR18 = &VAR2->VAR16[128 * 2], *VAR19 = &VAR2->VAR16[128 * 3];
    float *VAR20 = &VAR2->VAR16[128 * 4];
    if (VAR4->VAR11.VAR21[0] == VAR22)
    {
        VAR4->VAR11.VAR23 = 0;
        return;
    }
    if (!VAR4->VAR11.VAR24)
    {
        FUN3(VAR4->VAR25);
        VAR4->VAR11.VAR24 = 1;
        memcpy(VAR4->VAR26, VAR4->VAR27, 1024 * sizeof(float));
        for (VAR6 = 1; VAR6 < 31; VAR6++)
            VAR4->VAR11.VAR28[VAR6] = VAR6;
    }
    FUN4(VAR4);
    memcpy(VAR4->VAR29, VAR4->VAR30, sizeof(VAR4->VAR30));
    for (VAR5 = VAR31; VAR5 < VAR10; VAR5++)
    {
        int VAR32, VAR33, VAR34;
        float VAR35, VAR36, VAR37 = 0.0f;
        const int VAR38 = VAR4->VAR30[VAR5];
        const int VAR39 = VAR4->VAR11.VAR40[VAR5];
        const int VAR41 = VAR4->VAR11.VAR40[VAR5 + 1] - VAR39;
        const VAR42 *VAR43 = &VAR2->VAR44.VAR45[VAR2->VAR46].VAR47[VAR5];
        if (VAR39 + VAR41 > VAR48 || (VAR2->VAR46 && VAR4->VAR30[VAR5] >= VAR49) || VAR4->VAR30[VAR5] == VAR50)
            continue;
        FUN5(VAR15, &VAR4->VAR27[VAR39], VAR41);
        VAR35 = FUN6(VAR2, NULL, &VAR4->VAR27[VAR39], NULL, VAR15, VAR41, VAR4->VAR51[VAR5], VAR38, VAR2->VAR52 / VAR43->VAR53, VAR54, &VAR32, 0);
        VAR8 += VAR32;
        for (VAR6 = 0; VAR6 < VAR41; VAR6++)
            VAR18[VAR6] = VAR4->VAR27[VAR39 + VAR6] - VAR4->VAR26[VAR39 + VAR6];
        FUN5(VAR19, VAR18, VAR41);
        if (VAR38 < VAR55)
            VAR34 = FUN7(FUN8(1, VAR41, VAR19), VAR4->VAR51[VAR5]);
        else
            VAR34 = VAR38;
        FUN6(VAR2, NULL, VAR18, VAR20, VAR19, VAR41, VAR4->VAR51[VAR5], VAR34, VAR2->VAR52 / VAR43->VAR53, VAR54, &VAR33, 0);
        for (VAR6 = 0; VAR6 < VAR41; VAR6++)
            VAR4->VAR26[VAR39 + VAR6] += VAR20[VAR6] != 0.0f ? (VAR4->VAR26[VAR39 + VAR6] - VAR20[VAR6]) : 0.0f;
        FUN5(VAR17, &VAR4->VAR26[VAR39], VAR41);
        if (VAR38 < VAR55)
            VAR34 = FUN7(FUN8(1, VAR41, VAR17), VAR4->VAR51[VAR5]);
        else
            VAR34 = VAR38;
        VAR36 = FUN6(VAR2, NULL, &VAR4->VAR26[VAR39], NULL, VAR17, VAR41, VAR4->VAR51[VAR5], VAR34, VAR2->VAR52 / VAR43->VAR53, VAR54, NULL, 0);
        for (VAR6 = 0; VAR6 < VAR41; VAR6++)
            VAR37 += (VAR15[VAR6] - VAR17[VAR6]) * (VAR15[VAR6] - VAR17[VAR6]);
        VAR37 *= VAR2->VAR52 / VAR43->VAR53;
        VAR36 += VAR37;
        if (VAR36 <= VAR35 && VAR34 <= VAR38)
        {
            VAR9 += VAR33;
            VAR4->VAR11.VAR56[VAR5] = 1;
            VAR4->VAR29[VAR5] = VAR38;
            VAR4->VAR30[VAR5] = VAR34;
            VAR7++;
        }
        else
        {
            VAR9 += VAR32;
            VAR4->VAR29[VAR5] = VAR34;
        }
    }
    if (VAR7 && VAR8 < VAR9)
    {
        VAR7 = 0;
        for (VAR5 = VAR31; VAR5 < VAR10; VAR5++)
            FUN9(VAR4, VAR5);
        memset(&VAR4->VAR11.VAR56, 0, sizeof(VAR4->VAR11.VAR56));
    }
    VAR4->VAR11.VAR23 = !!VAR7;
}