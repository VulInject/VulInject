static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[VAR3] + 1;
    VAR8 *VAR11 = VAR2->VAR10[VAR4] + 1;
    int VAR12;
    int VAR13, VAR14;
    switch (VAR2->VAR15)
    {
    case 1:
        for (VAR12 = 0; VAR12 < VAR5; VAR12++)
        {
            int32_t VAR16 = VAR9[VAR12];
            int32_t VAR17 = VAR11[VAR12];
            VAR11[VAR12] = VAR16 + VAR17;
        }
        break;
    case 2:
        for (VAR12 = 0; VAR12 < VAR5; VAR12++)
        {
            int32_t VAR16 = VAR9[VAR12];
            int32_t VAR17 = VAR11[VAR12];
            VAR9[VAR12] = VAR17 - VAR16;
        }
        break;
    case 3:
        for (VAR12 = 0; VAR12 < VAR5; VAR12++)
        {
            int32_t VAR16 = VAR9[VAR12];
            int32_t VAR17 = VAR11[VAR12];
            VAR16 -= VAR17 >> 1;
            VAR9[VAR12] = VAR16;
            VAR11[VAR12] = VAR16 + VAR17;
        }
        break;
    case 4:
        FUN2(VAR8 *, VAR9, VAR11);
    case 5:
        VAR13 = FUN3(VAR7);
        VAR14 = FUN4(VAR7, 10);
        for (VAR12 = 0; VAR12 < VAR5; VAR12++)
        {
            int32_t VAR16 = VAR9[VAR12];
            int32_t VAR17 = VAR11[VAR12];
            VAR17 = VAR14 * (VAR17 >> VAR13) + 128 >> 8 << VAR13;
            VAR9[VAR12] = VAR17 - VAR16;
        }
        break;
    case 6:
        FUN2(VAR8 *, VAR9, VAR11);
    case 7:
    {
        int VAR18, VAR19, VAR20, VAR21, VAR22;
        int VAR23, VAR24, VAR25;
        if (VAR5 < 256)
            return VAR26;
        VAR13 = FUN3(VAR7);
        VAR20 = 8 << FUN5(VAR7);
        VAR21 = FUN5(VAR7);
        VAR22 = FUN5(VAR7);
        FUN6(VAR2->VAR27 + 8);
        for (VAR12 = 0; VAR12 < VAR20; VAR12++)
        {
            if (!(VAR12 & 3))
                VAR25 = 14 - FUN7(VAR7, 3);
            VAR2->VAR27[VAR12] = FUN4(VAR7, VAR25);
        }
        VAR19 = VAR20 / 2;
        VAR18 = VAR5 - (VAR20 - 1);
        if (VAR21)
        {
            for (VAR12 = 0; VAR12 < VAR19; VAR12++)
            {
                int32_t VAR16 = VAR9[VAR12];
                int32_t VAR17 = VAR11[VAR12];
                VAR9[VAR12] = VAR16 + VAR17;
            }
        }
        if (VAR22)
        {
            for (VAR12 = VAR18 + VAR19; VAR12 < VAR5; VAR12++)
            {
                int32_t VAR16 = VAR9[VAR12];
                int32_t VAR17 = VAR11[VAR12];
                VAR9[VAR12] = VAR16 + VAR17;
            }
        }
        for (VAR12 = 0; VAR12 < VAR20; VAR12++)
            VAR2->VAR28[VAR12] = *VAR11++ >> VAR13;
        VAR9 += VAR19;
        VAR24 = FUN8(VAR2->VAR28) - VAR20;
        for (; VAR18 > 0; VAR18 -= VAR23)
        {
            VAR23 = FUN9(VAR18, VAR24);
            for (VAR12 = 0; VAR12 < VAR23; VAR12++)
                VAR2->VAR28[VAR20 + VAR12] = *VAR11++ >> VAR13;
            for (VAR12 = 0; VAR12 < VAR23; VAR12++)
            {
                int VAR29 = 1 << 9;
                VAR29 += VAR2->VAR30.FUN10(&VAR2->VAR28[VAR12], VAR2->VAR27, 16);
                VAR29 = (FUN11(VAR29 >> 10, 13) << VAR13) - *VAR9;
                *VAR9++ = VAR29;
            }
            memcpy(VAR2->VAR28, &VAR2->VAR28[VAR23], 2 * VAR20);
        }
        FUN12();
        break;
    }
    }
    return 0;
}