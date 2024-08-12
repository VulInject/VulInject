static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    int VAR7[VAR8];
    int VAR9[VAR8 / 2 * 11], VAR10[VAR8 / 2 * 11];
    int VAR11[VAR12 * 2];
    VAR13 *VAR14;
    int64_t VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20;
    VAR2->VAR21[0] = FUN2(&VAR2->VAR22, 21) + 123;
    VAR2->VAR21[1] = FUN2(&VAR2->VAR22, 19) + 123;
    for (VAR3 = 0; VAR3 < VAR8; VAR3++)
    {
        VAR2->VAR23[VAR3].VAR24 = FUN2(&VAR2->VAR22, 50) + 1;
        VAR2->VAR23[VAR3].VAR25 = VAR26[VAR3];
    }
    for (VAR3 = 0; VAR3 < VAR8 / 2; VAR3++)
    {
        VAR6 = FUN2(&VAR2->VAR22, 1 << 13);
        VAR7[VAR3 * 2] = VAR6 & 1;
        VAR7[VAR3 * 2 + 1] = ((VAR6 >> 1) & 1) + VAR12;
        VAR6 >>= 2;
        for (VAR4 = 0; VAR4 < 11; VAR4++)
        {
            VAR9[VAR3 * 11 + VAR4] = (VAR6 & 1) * 2 - 1 << 14;
            VAR6 >>= 1;
        }
    }
    VAR5 = 0;
    for (VAR3 = 0; VAR3 < VAR8; VAR3++)
    {
        for (VAR4 = 0; VAR4 < VAR12 / 2; VAR4++)
            VAR11[VAR4] = VAR4;
        VAR6 = VAR12 / 2;
        for (VAR4 = 0; VAR4 < VAR27[VAR3]; VAR4++, VAR5++)
        {
            int VAR28 = FUN2(&VAR2->VAR22, VAR6);
            VAR10[VAR5] = VAR11[VAR28] * 2 + VAR7[VAR3];
            VAR11[VAR28] = VAR11[--VAR6];
        }
    }
    VAR14 = VAR2->VAR29 + VAR30;
    memcpy(VAR14, VAR2->VAR31, VAR32 * sizeof(*VAR2->VAR33));
    for (VAR3 = 0; VAR3 < VAR8; VAR3 += 2)
    {
        FUN3(VAR14, VAR14, VAR2->VAR21[VAR3 >> 1], &VAR2->VAR23[VAR3], VAR2->VAR34);
        FUN3(VAR14 + VAR12, VAR14 + VAR12, VAR2->VAR21[VAR3 >> 1], &VAR2->VAR23[VAR3 + 1], VAR2->VAR34);
        VAR6 = 0;
        for (VAR4 = 0; VAR4 < VAR12 * 2; VAR4++)
            VAR6 |= FUN4(VAR14[VAR4]);
        VAR6 = FUN5(VAR6, 0x7FFF);
        if (!VAR6)
        {
            VAR20 = 0;
        }
        else
        {
            VAR20 = -10 + FUN6(VAR6);
            if (VAR20 < -2)
                VAR20 = -2;
        }
        VAR15 = 0;
        if (VAR20 < 0)
        {
            for (VAR4 = 0; VAR4 < VAR12 * 2; VAR4++)
            {
                VAR6 = VAR14[VAR4] << -VAR20;
                VAR15 += VAR6 * VAR6;
                VAR11[VAR4] = VAR6;
            }
        }
        else
        {
            for (VAR4 = 0; VAR4 < VAR12 * 2; VAR4++)
            {
                VAR6 = VAR14[VAR4] >> VAR20;
                VAR15 += VAR6 * VAR6;
                VAR11[VAR4] = VAR6;
            }
        }
        VAR16 = 0;
        for (VAR4 = 0; VAR4 < 11; VAR4++)
            VAR16 += VAR11[VAR10[(VAR3 / 2) * 11 + VAR4]] * VAR9[(VAR3 / 2) * 11 + VAR4];
        VAR16 = VAR16 * 2 * 2979LL + (1 << 29) >> 30;
        VAR17 = VAR2->VAR35 * (VAR2->VAR35 * VAR12 >> 5);
        if (VAR20 * 2 + 3 >= 0)
            VAR17 >>= VAR20 * 2 + 3;
        else
            VAR17 <<= -(VAR20 * 2 + 3);
        VAR17 = (FUN7(VAR15 << 1) - VAR17) * 2979LL >> 15;
        VAR18 = VAR16 * VAR16 * 2 - VAR17;
        if (VAR18 <= 0)
        {
            VAR19 = -VAR16;
        }
        else
        {
            VAR18 = FUN8(VAR18);
            VAR19 = VAR18 - VAR16;
            VAR6 = VAR18 + VAR16;
            if (FUN4(VAR6) < FUN4(VAR19))
                VAR19 = -VAR6;
        }
        VAR20++;
        if (VAR20 < 0)
            VAR19 >>= -VAR20;
        else
            VAR19 <<= VAR20;
        VAR19 = FUN9(VAR19, -10000, 10000);
        for (VAR4 = 0; VAR4 < 11; VAR4++)
        {
            VAR5 = (VAR3 / 2) * 11 + VAR4;
            VAR14[VAR10[VAR5]] = FUN10(VAR14[VAR10[VAR5]] + (VAR19 * VAR9[VAR5] >> 15));
        }
        memcpy(VAR14 + VAR32, VAR14, sizeof(*VAR14) * VAR12 * 2);
        VAR14 += VAR12 * 2;
    }
    memcpy(VAR2->VAR31, VAR2->VAR29 + VAR30 + VAR36, VAR32 * sizeof(*VAR2->VAR33));
}