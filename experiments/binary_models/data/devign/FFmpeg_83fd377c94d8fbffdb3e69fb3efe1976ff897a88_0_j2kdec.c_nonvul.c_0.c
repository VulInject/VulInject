static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8, VAR9, *VAR10[4];
    VAR11 *VAR12;
    Jpeg2000T1Context VAR13;
    for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
    {
        VAR15 *VAR16 = VAR4->VAR16 + VAR5;
        VAR17 *VAR18 = VAR4->VAR18 + VAR5;
        for (VAR6 = 0; VAR6 < VAR18->VAR19; VAR6++)
        {
            VAR20 *VAR21 = VAR16->VAR22 + VAR6;
            for (VAR7 = 0; VAR7 < VAR21->VAR23; VAR7++)
            {
                int VAR24, VAR25;
                VAR26 *VAR27 = VAR21->VAR27 + VAR7;
                int VAR28, VAR29, VAR30 = 0, VAR31;
                VAR31 = VAR7 + (VAR6 > 0);
                if (VAR27->VAR32[0][0] == VAR27->VAR32[0][1] || VAR27->VAR32[1][0] == VAR27->VAR32[1][1])
                    continue;
                VAR24 = VAR21->VAR33 * VAR21->VAR34;
                for (VAR25 = 0; VAR25 < VAR24; VAR25++)
                {
                    VAR35 *VAR36 = VAR27->VAR36 + VAR25;
                    for (VAR30 = 0; VAR30 < VAR36->VAR37 * VAR36->VAR38; VAR30++)
                    {
                        int VAR8, VAR9;
                        int VAR39, VAR40;
                        VAR41 *VAR42 = VAR36->VAR42 + VAR30;
                        FUN2(VAR2, VAR18, &VAR13, VAR42, VAR42->VAR32[0][1] - VAR42->VAR32[0][0], VAR42->VAR32[1][1] - VAR42->VAR32[1][0], VAR31);
                        VAR8 = VAR42->VAR32[0][0];
                        VAR9 = VAR42->VAR32[1][0];
                        if (VAR18->VAR43 == VAR44)
                            FUN3(VAR8, VAR9, VAR42, VAR16, &VAR13, VAR27);
                        else
                            FUN4(VAR8, VAR9, VAR42, VAR16, &VAR13, VAR27);
                    }
                }
            }
        }
        FUN5(&VAR16->VAR45, VAR16->VAR46);
        VAR10[VAR5] = VAR16->VAR46;
    }
    if (VAR4->VAR18[0].VAR47)
        FUN6(VAR2, VAR4);
    if (VAR2->VAR48 <= 8)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
        {
            VAR15 *VAR16 = VAR4->VAR16 + VAR5;
            float *VAR49 = (float *)VAR16->VAR46;
            VAR50 *VAR51 = (VAR50 *)VAR16->VAR46;
            VAR9 = VAR4->VAR16[VAR5].VAR32[1][0] - VAR2->VAR52;
            VAR12 = VAR2->VAR53->VAR46[0] + VAR9 * VAR2->VAR53->VAR54[0];
            for (; VAR9 < VAR4->VAR16[VAR5].VAR32[1][1] - VAR2->VAR52; VAR9 += VAR2->VAR55[VAR5])
            {
                VAR11 *VAR56;
                VAR8 = VAR4->VAR16[VAR5].VAR32[0][0] - VAR2->VAR57;
                VAR56 = VAR12 + VAR8 * VAR2->VAR14 + VAR5;
                for (; VAR8 < VAR4->VAR16[VAR5].VAR32[0][1] - VAR2->VAR57; VAR8 += VAR2->VAR58[VAR5])
                {
                    int VAR59;
                    if (VAR4->VAR18->VAR43 == VAR44)
                        VAR59 = FUN7(*VAR49) + (1 << (VAR2->VAR60[VAR5] - 1));
                    else
                        VAR59 = *VAR51 + (1 << (VAR2->VAR60[VAR5] - 1));
                    VAR59 = FUN8(VAR59, 0, (1 << VAR2->VAR60[VAR5]) - 1);
                    *VAR56 = VAR59 << (8 - VAR2->VAR60[VAR5]);
                    VAR49++;
                    VAR51++;
                    VAR56 += VAR2->VAR14;
                }
                VAR12 += VAR2->VAR53->VAR54[0];
            }
        }
    }
    else
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
        {
            VAR15 *VAR16 = VAR4->VAR16 + VAR5;
            float *VAR49 = (float *)VAR16->VAR46;
            VAR50 *VAR51 = (VAR50 *)VAR16->VAR46;
            VAR61 *VAR62;
            VAR9 = VAR4->VAR16[VAR5].VAR32[1][0] - VAR2->VAR52;
            VAR62 = (VAR61 *)VAR2->VAR53->VAR46[0] + VAR9 * (VAR2->VAR53->VAR54[0] >> 1);
            for (; VAR9 < VAR4->VAR16[VAR5].VAR32[1][1] - VAR2->VAR52; VAR9 += VAR2->VAR55[VAR5])
            {
                VAR61 *VAR56;
                VAR8 = VAR4->VAR16[VAR5].VAR32[0][0] - VAR2->VAR57;
                VAR56 = VAR62 + (VAR8 * VAR2->VAR14 + VAR5);
                for (; VAR8 < VAR4->VAR16[VAR5].VAR32[0][1] - VAR2->VAR57; VAR8 += VAR2->VAR58[VAR5])
                {
                    int VAR59;
                    if (VAR4->VAR18->VAR43 == VAR44)
                        VAR59 = FUN7(*VAR49) + (1 << (VAR2->VAR60[VAR5] - 1));
                    else
                        VAR59 = *VAR51 + (1 << (VAR2->VAR60[VAR5] - 1));
                    VAR59 = FUN8(VAR59, 0, (1 << VAR2->VAR60[VAR5]) - 1);
                    *VAR56 = VAR59 << (16 - VAR2->VAR60[VAR5]);
                    VAR49++;
                    VAR51++;
                    VAR56 += VAR2->VAR14;
                }
                VAR62 += VAR2->VAR53->VAR54[0] >> 1;
            }
        }
    }
    return 0;
}