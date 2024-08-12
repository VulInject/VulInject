static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, float *VAR6, const double *VAR7, const double *VAR8, float *VAR9, float *VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18[VAR19], VAR20;
    int VAR21 = VAR12->VAR22[FUN2(VAR4, VAR23.VAR24, 6, 3)], VAR25;
    if (VAR21 < 0)
    {
        FUN3(VAR2, VAR26, "");
        return -1;
    }
    VAR25 = VAR27 / VAR28[VAR21].VAR29;
    if (VAR28[VAR21].VAR30 == VAR31)
    {
        VAR15 = VAR28[VAR21].VAR29 << 1;
        VAR16 = VAR28[VAR21].VAR32 + 1;
        VAR17 = VAR12->VAR33 + FUN4(VAR4, VAR12->VAR34);
        VAR17 = FUN5(VAR17, VAR12->VAR35 - 1);
        if (VAR12->VAR36 == VAR37 || 20 * FUN6(VAR17 - VAR12->VAR38) > (VAR17 + VAR12->VAR38))
            VAR12->VAR38 = VAR17;
        for (VAR14 = 0; VAR14 < VAR28[VAR21].VAR29; VAR14++)
        {
            int VAR39 = VAR14 * 2 + 1;
            VAR18[VAR14] = (FUN7(VAR39, VAR17) + FUN7((VAR15 - VAR39), VAR12->VAR38) + VAR28[VAR21].VAR29) >> VAR16;
        }
        VAR12->VAR40 = ((VAR17 - VAR12->VAR38) << 16) / VAR27;
    }
    switch (VAR28[VAR21].VAR41)
    {
    case VAR42:
        VAR12->VAR43 = VAR44[FUN4(VAR4, 8)];
        break;
    case VAR45:
        FUN8(VAR12, VAR4, VAR18);
        break;
    }
    for (VAR14 = 0; VAR14 < VAR28[VAR21].VAR29; VAR14++)
    {
        int VAR46;
        switch (VAR28[VAR21].VAR30)
        {
        case VAR47:
        {
            int VAR48, VAR49 = (VAR12->VAR50[1] - VAR12->VAR50[0]) << 2, VAR51 = (VAR12->VAR50[2] - VAR12->VAR50[1]) << 1, VAR52 = VAR12->VAR50[3] - VAR12->VAR50[2] + 1;
            if (VAR14 == 0)
            {
                VAR48 = FUN4(VAR4, VAR12->VAR53);
            }
            else
                VAR48 = VAR20 - VAR12->VAR54 + FUN4(VAR4, VAR12->VAR55);
            VAR20 = FUN9(VAR48, VAR12->VAR54, VAR12->VAR56 - VAR12->VAR54);
            if (VAR48 < VAR49)
            {
                VAR46 = (VAR12->VAR50[0] << 2) + VAR48;
            }
            else
            {
                VAR48 -= VAR49;
                if (VAR48 < VAR51)
                {
                    VAR46 = (VAR12->VAR50[1] << 2) + (VAR48 << 1);
                }
                else
                {
                    VAR48 -= VAR51;
                    if (VAR48 < VAR52)
                    {
                        VAR46 = (VAR12->VAR50[2] + VAR48) << 2;
                    }
                    else
                        VAR46 = VAR12->VAR50[3] << 2;
                }
            }
            VAR18[VAR14] = VAR46 >> 2;
            break;
        }
        case VAR31:
        {
            VAR46 = VAR18[VAR14] << 2;
            break;
        }
        default:
            VAR46 = 0;
            break;
        }
        FUN10(VAR12, VAR4, VAR14, VAR25, VAR46, VAR7, VAR8, &VAR28[VAR21], &VAR9[VAR14 * VAR25], &VAR10[VAR14 * VAR25]);
    }
    if (VAR12->VAR57)
    {
        double VAR58[VAR59];
        float VAR60[VAR59];
        for (VAR14 = 0; VAR14 < VAR12->VAR7; VAR14++)
            VAR58[VAR14] = FUN11(0.5 * (VAR8[VAR14] + VAR7[VAR14]));
        FUN12(VAR58, VAR60, VAR12->VAR7 >> 1);
        FUN13(VAR12, VAR10, VAR6, 80, VAR60, &VAR12->VAR61[VAR12->VAR62 + VAR27 * VAR5], VAR28[VAR21].VAR41, VAR18[0]);
        for (VAR14 = 0; VAR14 < VAR12->VAR7; VAR14++)
            VAR58[VAR14] = FUN11(VAR7[VAR14]);
        FUN12(VAR58, VAR60, VAR12->VAR7 >> 1);
        FUN13(VAR12, &VAR10[80], &VAR6[80], 80, VAR60, &VAR12->VAR61[VAR12->VAR62 + VAR27 * VAR5 + 80], VAR28[VAR21].VAR41, VAR18[0]);
    }
    else
        memcpy(VAR6, VAR10, 160 * sizeof(VAR10[0]));
    VAR12->VAR63++;
    if (VAR12->VAR63 >= 0xFFFF)
        VAR12->VAR63 -= 0xFFFF;
    VAR12->VAR36 = VAR28[VAR21].VAR30;
    switch (VAR28[VAR21].VAR30)
    {
    case VAR37:
        VAR12->VAR38 = 0;
        break;
    case VAR31:
        VAR12->VAR38 = VAR17;
        break;
    case VAR47:
        VAR12->VAR38 = VAR18[VAR28[VAR21].VAR29 - 1];
        break;
    }
    return 0;
}