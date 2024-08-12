static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR4->VAR7.VAR6;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    uint8_t VAR15, *VAR16 = VAR2->VAR17;
    VAR15 = FUN2(VAR6, 1);
    VAR8 = FUN3(VAR6, VAR18.VAR19, VAR20, 2);
    VAR2->VAR21 = 0;
    switch (VAR8)
    {
    case VAR22:
        VAR2->VAR21 = 1;
        return VAR15;
    case VAR23:
    case VAR24:
        if ((VAR2->VAR25 * VAR2->VAR26) & 1)
            *(++VAR16) = FUN2(VAR6, 1);
        for (VAR9 = 0; VAR9 < (VAR2->VAR25 * VAR2->VAR26) >> 1; VAR9++)
        {
            VAR11 = FUN3(VAR6, VAR27.VAR19, VAR28, 2);
            *(++VAR16) = VAR11 & 1;
            *(++VAR16) = (VAR11 >> 1) & 1;
        }
        break;
    case VAR29:
    case VAR30:
        VAR12 = VAR2->VAR25 % 3 == 0 && VAR2->VAR26 % 3 != 0;
        VAR13 = VAR12 ? 2 : 3;
        VAR14 = VAR12 ? 3 : 2;
        for (VAR10 = VAR2->VAR25 % VAR14; VAR10 < VAR2->VAR25; VAR10 += VAR14)
        {
            for (VAR9 = VAR2->VAR26 % VAR13; VAR9 < VAR2->VAR26; VAR9 += VAR13)
            {
                VAR11 = FUN3(VAR6, VAR31.VAR19, VAR32, 2);
                if (VAR11 < 0)
                {
                    FUN4(VAR4->VAR7.VAR33, VAR34, "");
                    return -1;
                }
                VAR11 = FUN3(VAR6, VAR35.VAR19, VAR36, 2);
                if (VAR11 == 22)
                {
                    VAR11 = VAR37[FUN2(VAR6, 5)];
                }
                else if (VAR11 == 23)
                {
                    VAR11 = FUN3(VAR6, VAR38.VAR19, VAR39, 2);
                    assert(VAR11 > -1 && VAR11 < 22);
                    VAR11 = VAR40[VAR11];
                    VAR11 = VAR40[FUN3(VAR6, VAR38.VAR19, VAR39, 2)];
                }
                VAR16[VAR9 + 0 * VAR2->VAR41] = (VAR11 >> 0) & 1;
                VAR16[VAR9 + 1 + 0 * VAR2->VAR41] = (VAR11 >> 1) & 1;
                if (VAR12)
                {
                    VAR16[VAR9 + 0 + 1 * VAR2->VAR41] = (VAR11 >> 2) & 1;
                    VAR16[VAR9 + 1 + 1 * VAR2->VAR41] = (VAR11 >> 3) & 1;
                    VAR16[VAR9 + 0 + 2 * VAR2->VAR41] = (VAR11 >> 4) & 1;
                    VAR16[VAR9 + 1 + 2 * VAR2->VAR41] = (VAR11 >> 5) & 1;
                }
                else
                {
                    VAR16[VAR9 + 2 + 0 * VAR2->VAR41] = (VAR11 >> 2) & 1;
                    VAR16[VAR9 + 0 + 1 * VAR2->VAR41] = (VAR11 >> 3) & 1;
                    VAR16[VAR9 + 1 + 1 * VAR2->VAR41] = (VAR11 >> 4) & 1;
                    VAR16[VAR9 + 2 + 1 * VAR2->VAR41] = (VAR11 >> 5) & 1;
                }
            }
        }
        VAR9 = VAR2->VAR26 % VAR13;
        FUN5(VAR2->VAR17, VAR9, VAR2->VAR25, VAR2->VAR41, VAR4);
        FUN6(VAR2->VAR17 + VAR9, VAR2->VAR26 - VAR9, VAR2->VAR25 % VAR14, VAR2->VAR41, VAR4);
        break;
    case VAR42:
        FUN6(VAR2->VAR17, VAR2->VAR26, VAR2->VAR25, VAR2->VAR41, VAR4);
        break;
    case VAR43:
        FUN5(VAR2->VAR17, VAR2->VAR26, VAR2->VAR25, VAR2->VAR41, VAR4);
        break;
    default:
        break;
    }
    if (VAR8 == VAR23 || VAR8 == VAR29)
    {
        VAR16 = VAR2->VAR17;
        VAR16[0] ^= VAR15;
        for (VAR9 = 1; VAR9 < VAR2->VAR26; VAR9++)
            VAR16[VAR9] ^= VAR16[VAR9 - 1];
        for (VAR10 = 1; VAR10 < VAR2->VAR25; VAR10++)
        {
            VAR16 += VAR2->VAR41;
            VAR16[0] ^= VAR16[-VAR2->VAR41];
            for (VAR9 = 1; VAR9 < VAR2->VAR26; VAR9++)
            {
                if (VAR16[VAR9 - 1] != VAR16[VAR9 - VAR2->VAR41])
                    VAR16[VAR9] ^= VAR15;
                else
                    VAR16[VAR9] ^= VAR16[VAR9 - 1];
            }
        }
    }
    else if (VAR15)
    {
        VAR16 = VAR2->VAR17;
        for (VAR9 = 0; VAR9 < VAR2->VAR26 * VAR2->VAR25; VAR9++)
            VAR16[VAR9] = !VAR16[VAR9];
    }
    return (VAR8 << 1) + VAR15;
}