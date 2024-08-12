static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6 = VAR2->VAR7.VAR8;
    int VAR9 = 0;
    int VAR10, VAR11;
    int VAR12, VAR13, VAR14;
    int VAR15 = VAR2->VAR15;
    VAR12 = FUN2(&VAR2->VAR16, VAR4, VAR5);
    if (VAR12 < 0)
        return VAR12;
    if (VAR2->VAR7.VAR17 == VAR18 || VAR2->VAR7.VAR17 == VAR19)
    {
        if (!FUN3(VAR2->VAR20))
        {
            VAR12 = FUN4(VAR2);
            if (VAR12 < 0)
                return VAR12;
        }
        VAR6 = FUN5(VAR2->VAR21, &VAR2->VAR16, VAR2->VAR22, FUN6(VAR2->VAR7.VAR23, VAR24), VAR2->VAR7.VAR25 + 1, VAR26[VAR2->VAR7.VAR27]);
        if (VAR6 < 0)
        {
            FUN7(VAR2->VAR28, VAR29, "");
            return VAR6;
        }
        VAR6 = FUN8(VAR2->VAR20, (VAR3 **)VAR2->VAR30, VAR2->VAR7.VAR8, (const VAR3 **)VAR2->VAR22, VAR6);
        if (VAR6 < 0)
        {
            FUN7(VAR2->VAR28, VAR29, "");
            return VAR6;
        }
        VAR2->VAR15 += VAR2->VAR7.VAR8 - VAR6;
    }
    else
        FUN9(VAR2->VAR21);
    VAR14 = FUN10(&VAR2->VAR16);
    if (VAR2->VAR7.VAR17 == VAR19 && VAR14 + 37 <= VAR5 * 8)
        VAR9 = FUN11(&VAR2->VAR16, 12);
    else if (VAR2->VAR7.VAR17 == VAR18 && VAR14 + 17 <= VAR5 * 8)
        VAR9 = 1;
    if (VAR9)
    {
        VAR11 = FUN11(&VAR2->VAR16, 1);
        if (VAR2->VAR7.VAR17 == VAR19)
            VAR10 = FUN12(&VAR2->VAR16, 256) + 2;
        else
            VAR10 = VAR5 - (VAR14 + 7) / 8;
        VAR5 -= VAR10;
        if (VAR5 < 0)
        {
            FUN7(VAR2->VAR28, VAR29, "");
            return VAR31;
        }
        if (VAR11)
        {
            VAR12 = FUN13(VAR2, VAR4 + VAR5, VAR10);
            if (VAR12 < 0)
                return VAR12;
            FUN14(VAR2->VAR32);
        }
    }
    if (VAR2->VAR7.VAR17 == VAR33 || VAR2->VAR7.VAR17 == VAR19)
    {
        float *VAR34[2] = {VAR2->VAR30[0], VAR2->VAR30[1]};
        float **VAR35 = (VAR2->VAR7.VAR17 == VAR33) ? VAR34 : VAR2->VAR36;
        int VAR37 = VAR6;
        int VAR38 = FUN15(VAR2->VAR39);
        if (VAR38)
        {
            if (VAR2->VAR7.VAR17 == VAR19)
            {
                FUN16(VAR2->VAR39, (void **)VAR2->VAR36, VAR38);
                for (VAR13 = 0; VAR13 < VAR2->VAR40; VAR13++)
                {
                    VAR2->VAR41->FUN17(VAR34[VAR13], VAR2->VAR36[VAR13], 1.0, VAR38);
                    VAR34[VAR13] += VAR38;
                }
                VAR37 -= VAR38;
            }
            else
            {
                FUN7(VAR2->VAR28, VAR42, "");
                FUN18(VAR2->VAR39, VAR38);
                if (VAR2->VAR28->VAR43 & VAR44)
                    return VAR45;
            }
        }
        FUN19(&VAR2->VAR16, VAR4 + VAR5, VAR5);
        VAR12 = FUN20(VAR2->VAR32, &VAR2->VAR16, VAR35, VAR2->VAR7.VAR25 + 1, VAR2->VAR7.VAR8, (VAR2->VAR7.VAR17 == VAR19) ? 17 : 0, VAR46[VAR2->VAR7.VAR23]);
        if (VAR12 < 0)
            return VAR12;
        if (VAR2->VAR7.VAR17 == VAR19)
        {
            int VAR39 = VAR2->VAR7.VAR8 - VAR37;
            void *VAR47[2] = {VAR2->VAR36[0] + VAR37, VAR2->VAR36[1] + VAR37};
            for (VAR13 = 0; VAR13 < VAR2->VAR40; VAR13++)
            {
                VAR2->VAR41->FUN17(VAR34[VAR13], VAR2->VAR36[VAR13], 1.0, VAR37);
            }
            VAR12 = FUN21(VAR2->VAR39, VAR47, VAR39);
            if (VAR12 < 0)
                return VAR12;
        }
    }
    else
        FUN14(VAR2->VAR32);
    if (VAR2->VAR48)
    {
        for (VAR13 = 0; VAR13 < VAR2->VAR40; VAR13++)
            FUN22(VAR2->VAR30[VAR13], VAR2->VAR30[VAR13], VAR2->VAR49[VAR13] + 120 + VAR2->VAR48, VAR50 + VAR2->VAR48, 120 - VAR2->VAR48);
        VAR2->VAR48 = 0;
    }
    if (VAR9)
    {
        if (!VAR11)
        {
            FUN14(VAR2->VAR32);
            VAR12 = FUN13(VAR2, VAR4 + VAR5, VAR10);
            if (VAR12 < 0)
                return VAR12;
            for (VAR13 = 0; VAR13 < VAR2->VAR40; VAR13++)
            {
                FUN22(VAR2->VAR30[VAR13] + VAR6 - 120 + VAR15, VAR2->VAR30[VAR13] + VAR6 - 120 + VAR15, VAR2->VAR49[VAR13] + 120, VAR50, 120 - VAR15);
                if (VAR15)
                    VAR2->VAR48 = 120 - VAR15;
            }
        }
        else
        {
            for (VAR13 = 0; VAR13 < VAR2->VAR40; VAR13++)
            {
                memcpy(VAR2->VAR30[VAR13] + VAR15, VAR2->VAR49[VAR13], 120 * sizeof(float));
                FUN22(VAR2->VAR30[VAR13] + 120 + VAR15, VAR2->VAR49[VAR13] + 120, VAR2->VAR30[VAR13] + 120 + VAR15, VAR50, 120);
            }
        }
    }
    return VAR6;