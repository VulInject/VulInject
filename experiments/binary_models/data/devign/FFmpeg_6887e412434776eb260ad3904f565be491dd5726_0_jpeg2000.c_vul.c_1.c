int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11)
{
    int VAR12, VAR13, VAR14 = 0, VAR15, VAR16, VAR17;
    uint32_t VAR18;
    if (VAR4->VAR19 <= 0)
    {
        FUN2(VAR11, VAR20, "", VAR4->VAR19);
        return VAR21;
    }
    if (VAR15 = FUN3(&VAR2->VAR22, VAR2->VAR23, VAR4->VAR19 - 1, VAR4->VAR24))
        return VAR15;
    if (FUN4(VAR2->VAR23[0][1] - VAR2->VAR23[0][0], VAR2->VAR23[1][1] - VAR2->VAR23[1][0], 0, VAR11))
        return VAR21;
    VAR18 = (VAR2->VAR23[0][1] - VAR2->VAR23[0][0]) * (VAR2->VAR23[1][1] - VAR2->VAR23[1][0]);
    if (VAR2->VAR23[0][1] - VAR2->VAR23[0][0] > 32768 || VAR2->VAR23[1][1] - VAR2->VAR23[1][0] > 32768)
    {
        FUN2(VAR11, VAR20, "");
        return VAR25;
    }
    if (VAR4->VAR24 == VAR26)
    {
        VAR18 += VAR27 / sizeof(*VAR2->VAR28);
        VAR2->VAR29 = NULL;
        VAR2->VAR28 = FUN5(VAR18, sizeof(*VAR2->VAR28));
        if (!VAR2->VAR28)
    }
    else
    {
        VAR18 += VAR27 / sizeof(*VAR2->VAR29);
        VAR2->VAR28 = NULL;
        VAR2->VAR29 = FUN5(VAR18, sizeof(*VAR2->VAR29));
        if (!VAR2->VAR29)
    }
    VAR2->VAR30 = FUN5(VAR4->VAR31, sizeof(*VAR2->VAR30));
    if (!VAR2->VAR30)
        for (VAR12 = 0; VAR12 < VAR4->VAR31; VAR12++)
        {
            int VAR32 = VAR4->VAR31 - VAR12;
            VAR33 *VAR30 = VAR2->VAR30 + VAR12;
            for (VAR16 = 0; VAR16 < 2; VAR16++)
                for (VAR17 = 0; VAR17 < 2; VAR17++)
                    VAR30->VAR23[VAR16][VAR17] = FUN6(VAR2->VAR34[VAR16][VAR17], VAR32 - 1);
            VAR30->VAR35 = VAR4->VAR36[VAR12];
            VAR30->VAR37 = VAR4->VAR38[VAR12];
            if (!VAR30->VAR35 || !VAR30->VAR37)
            {
                return VAR21;
            }
            if (VAR12 == 0)
                VAR30->VAR39 = 1;
            else
                VAR30->VAR39 = 3;
            if (VAR30->VAR23[0][1] == VAR30->VAR23[0][0])
                VAR30->VAR40 = 0;
            else
                VAR30->VAR40 = FUN6(VAR30->VAR23[0][1], VAR30->VAR35) - (VAR30->VAR23[0][0] >> VAR30->VAR35);
            if (VAR30->VAR23[1][1] == VAR30->VAR23[1][0])
                VAR30->VAR41 = 0;
            else
                VAR30->VAR41 = FUN6(VAR30->VAR23[1][1], VAR30->VAR37) - (VAR30->VAR23[1][0] >> VAR30->VAR37);
            VAR30->VAR42 = FUN5(VAR30->VAR39, sizeof(*VAR30->VAR42));
            if (!VAR30->VAR42)
                for (VAR13 = 0; VAR13 < VAR30->VAR39; VAR13++, VAR14++)
                {
                    VAR15 = FUN7(VAR11, VAR30, VAR2, VAR4, VAR6, VAR13, VAR14, VAR12, VAR7, VAR8, VAR9);
                    if (VAR15 < 0)
                        return VAR15;
                }
        }
    return 0;