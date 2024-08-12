static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8, VAR9, *VAR10[4];
    VAR11 *VAR12;
    J2kT1Context VAR13;
    for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
    {
        VAR15 *VAR16 = VAR4->VAR16 + VAR5;
        VAR17 *VAR18 = VAR4->VAR18 + VAR5;
        for (VAR6 = 0; VAR6 < VAR18->VAR19; VAR6++)
        {
            VAR20 *VAR21 = VAR16->VAR22 + VAR6;
            for (VAR7 = 0; VAR7 < VAR21->VAR23; VAR7++)
            {
                VAR24 *VAR25 = VAR21->VAR25 + VAR7;
                int VAR26, VAR27, VAR28 = 0, VAR29, VAR30, VAR31, VAR32, VAR33, VAR34, VAR35;
                VAR35 = VAR7 + (VAR6 > 0);
                VAR33 = VAR7 == 0 ? 0 : VAR16->VAR22[VAR6 - 1].VAR36[1][1] - VAR16->VAR22[VAR6 - 1].VAR36[1][0];
                VAR32 = VAR33;
                VAR34 = FUN2(FUN3(VAR25->VAR36[1][0] + 1, VAR25->VAR37) * VAR25->VAR37, VAR25->VAR36[1][1]) - VAR25->VAR36[1][0] + VAR33;
                if (VAR25->VAR36[0][0] == VAR25->VAR36[0][1] || VAR25->VAR36[1][0] == VAR25->VAR36[1][1])
                    continue;
                for (VAR27 = 0; VAR27 < VAR25->VAR38; VAR27++)
                {
                    if (VAR6 == 0 || VAR7 == 1)
                        VAR29 = 0;
                    else
                        VAR29 = VAR16->VAR22[VAR6 - 1].VAR36[0][1] - VAR16->VAR22[VAR6 - 1].VAR36[0][0];
                    VAR30 = VAR29;
                    VAR31 = FUN2(FUN3(VAR25->VAR36[0][0] + 1, VAR25->VAR39) * VAR25->VAR39, VAR25->VAR36[0][1]) - VAR25->VAR36[0][0] + VAR29;
                    for (VAR26 = 0; VAR26 < VAR25->VAR40; VAR26++, VAR28++)
                    {
                        int VAR9, VAR8;
                        FUN4(VAR2, VAR18, &VAR13, VAR25->VAR41 + VAR28, VAR31 - VAR29, VAR34 - VAR33, VAR35);
                        if (VAR18->VAR42 == VAR43)
                        {
                            for (VAR9 = VAR33; VAR9 < VAR34; VAR9 += VAR2->VAR44[VAR5])
                            {
                                int *VAR45 = VAR13.VAR46[VAR9 - VAR33];
                                for (VAR8 = VAR29; VAR8 < VAR31; VAR8 += VAR2->VAR47[VAR5])
                                {
                                    VAR16->VAR46[(VAR16->VAR36[0][1] - VAR16->VAR36[0][0]) * VAR9 + VAR8] = *VAR45++ >> 1;
                                }
                            }
                        }
                        else
                        {
                            for (VAR9 = VAR33; VAR9 < VAR34; VAR9 += VAR2->VAR44[VAR5])
                            {
                                int *VAR45 = VAR13.VAR46[VAR9 - VAR33];
                                for (VAR8 = VAR29; VAR8 < VAR31; VAR8 += VAR2->VAR47[VAR5])
                                {
                                    int VAR48 = ((VAR49)*VAR45++) * ((VAR49)VAR25->VAR50) >> 13, VAR51;
                                    VAR51 = FUN5(VAR48 >> 1) + FUN5(VAR48 & 1);
                                    VAR16->VAR46[(VAR16->VAR36[0][1] - VAR16->VAR36[0][0]) * VAR9 + VAR8] = VAR48 < 0 ? -VAR51 : VAR51;
                                }
                            }
                        }
                        VAR29 = VAR31;
                        VAR31 = FUN2(VAR31 + VAR25->VAR39, VAR25->VAR36[0][1] - VAR25->VAR36[0][0] + VAR30);
                    }
                    VAR33 = VAR34;
                    VAR34 = FUN2(VAR34 + VAR25->VAR37, VAR25->VAR36[1][1] - VAR25->VAR36[1][0] + VAR32);
                }
            }
        }
        FUN6(&VAR16->VAR52, VAR16->VAR46);
        VAR10[VAR5] = VAR16->VAR46;
    }
    if (VAR4->VAR18[0].VAR53)
        FUN7(VAR2, VAR4);
    if (VAR2->VAR54->VAR55 == VAR56)
        FUN8(int *, VAR10[0], VAR10[2]);
    if (VAR2->VAR57 <= 8)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
        {
            VAR9 = VAR4->VAR16[VAR5].VAR36[1][0] - VAR2->VAR58;
            VAR12 = VAR2->VAR59.VAR46[0] + VAR9 * VAR2->VAR59.VAR60[0];
            for (; VAR9 < VAR4->VAR16[VAR5].VAR36[1][1] - VAR2->VAR58; VAR9 += VAR2->VAR44[VAR5])
            {
                VAR11 *VAR61;
                VAR8 = VAR4->VAR16[VAR5].VAR36[0][0] - VAR2->VAR62;
                VAR61 = VAR12 + VAR8 * VAR2->VAR14 + VAR5;
                for (; VAR8 < VAR4->VAR16[VAR5].VAR36[0][1] - VAR2->VAR62; VAR8 += VAR2->VAR47[VAR5])
                {
                    *VAR10[VAR5] += 1 << (VAR2->VAR63[VAR5] - 1);
                    if (*VAR10[VAR5] < 0)
                        *VAR10[VAR5] = 0;
                    else if (*VAR10[VAR5] >= (1 << VAR2->VAR63[VAR5]))
                        *VAR10[VAR5] = (1 << VAR2->VAR63[VAR5]) - 1;
                    *VAR61 = *VAR10[VAR5]++;
                    VAR61 += VAR2->VAR14;
                }
                VAR12 += VAR2->VAR59.VAR60[0];
            }
        }
    }
    else
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
        {
            VAR9 = VAR4->VAR16[VAR5].VAR36[1][0] - VAR2->VAR58;
            VAR12 = VAR2->VAR59.VAR46[0] + VAR9 * VAR2->VAR59.VAR60[0];
            for (; VAR9 < VAR4->VAR16[VAR5].VAR36[1][1] - VAR2->VAR58; VAR9 += VAR2->VAR44[VAR5])
            {
                VAR64 *VAR61;
                VAR8 = VAR4->VAR16[VAR5].VAR36[0][0] - VAR2->VAR62;
                VAR61 = VAR12 + (VAR8 * VAR2->VAR14 + VAR5) * 2;
                for (; VAR8 < VAR4->VAR16[VAR5].VAR36[0][1] - VAR2->VAR62; VAR8 += VAR2->VAR47[VAR5])
                {
                    int32_t VAR65;
                    VAR65 = *VAR10[VAR5]++ << (16 - VAR2->VAR63[VAR5]);
                    VAR65 += 1 << 15;
                    VAR65 = FUN9(VAR65, 0, (1 << 16) - 1);
                    *VAR61 = VAR65;
                    VAR61 += VAR2->VAR14;
                }
                VAR12 += VAR2->VAR59.VAR60[0];
            }
        }
    }
    return 0;
}