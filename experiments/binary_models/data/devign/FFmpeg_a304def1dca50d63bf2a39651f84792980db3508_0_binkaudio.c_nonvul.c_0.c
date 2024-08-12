static void FUN1(VAR1 *VAR2, short *VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    float VAR9, VAR10[25];
    int VAR11, VAR12;
    VAR13 *VAR14 = &VAR2->VAR14;
    if (VAR4)
        FUN2(VAR14, 2);
    for (VAR5 = 0; VAR5 < VAR2->VAR15; VAR5++)
    {
        VAR16 *VAR17 = VAR2->VAR18[VAR5];
        VAR17[0] = FUN3(VAR14) * VAR2->VAR19;
        VAR17[1] = FUN3(VAR14) * VAR2->VAR19;
        for (VAR6 = 0; VAR6 < VAR2->VAR20; VAR6++)
        {
            int VAR21 = FUN4(VAR14, 8);
            VAR10[VAR6] = FUN5(FUN6(VAR21, 95) * 0.15289164787221953823f) * VAR2->VAR19;
        }
        VAR8 = 0;
        VAR9 = VAR10[0];
        VAR6 = 2;
        while (VAR6 < VAR2->VAR22)
        {
            if (FUN7(VAR14))
            {
                VAR7 = VAR6 + VAR23[FUN4(VAR14, 4)] * 8;
            }
            else
            {
                VAR7 = VAR6 + 8;
            }
            VAR7 = FUN6(VAR7, VAR2->VAR22);
            VAR11 = FUN4(VAR14, 4);
            if (VAR11 == 0)
            {
                memset(VAR17 + VAR6, 0, (VAR7 - VAR6) * sizeof(*VAR17));
                VAR6 = VAR7;
                while (VAR2->VAR24[VAR8] < VAR6)
                    VAR9 = VAR10[VAR8++];
            }
            else
            {
                while (VAR6 < VAR7)
                {
                    if (VAR2->VAR24[VAR8] == VAR6)
                        VAR9 = VAR10[VAR8++];
                    VAR12 = FUN4(VAR14, VAR11);
                    if (VAR12)
                    {
                        if (FUN7(VAR14))
                            VAR17[VAR6] = -VAR9 * VAR12;
                        else
                            VAR17[VAR6] = VAR9 * VAR12;
                    }
                    else
                    {
                        VAR17[VAR6] = 0.0f;
                    }
                    VAR6++;
                }
            }
        }
        if (VAR25 && VAR4)
        {
            VAR17[0] /= 0.5;
            FUN8(&VAR2->VAR26.VAR27, VAR17);
            VAR2->VAR28.FUN9(VAR17, VAR17, VAR2->VAR22 / 2, VAR2->VAR22);
        }
        else if (VAR29)
            FUN10(&VAR2->VAR26.VAR30, VAR17);
    }
    VAR2->VAR31.FUN11(VAR3, (const float **)VAR2->VAR18, VAR2->VAR22, VAR2->VAR15);
    if (!VAR2->VAR32)
    {
        int VAR33 = VAR2->VAR34 * VAR2->VAR15;
        int VAR35 = FUN12(VAR33);
        for (VAR6 = 0; VAR6 < VAR33; VAR6++)
        {
            VAR3[VAR6] = (VAR2->VAR36[VAR6] * (VAR33 - VAR6) + VAR3[VAR6] * VAR6) >> VAR35;
        }
    }
    memcpy(VAR2->VAR36, VAR3 + VAR2->VAR37, VAR2->VAR34 * VAR2->VAR15 * sizeof(*VAR3));
    VAR2->VAR32 = 0;
}