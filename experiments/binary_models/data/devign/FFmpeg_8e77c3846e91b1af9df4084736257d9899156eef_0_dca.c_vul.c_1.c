static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6;
    if (FUN2(&VAR2->VAR7) < 0)
        return VAR8;
    if (!VAR3)
    {
        VAR2->VAR9[VAR2->VAR10] = FUN3(&VAR2->VAR7, 2) + 1;
        VAR2->VAR11[VAR2->VAR10] = FUN3(&VAR2->VAR7, 3);
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            VAR2->VAR14[VAR5][VAR6] = FUN3(&VAR2->VAR7, 1);
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
        {
            if (VAR2->VAR14[VAR5][VAR6] > 0)
            {
                VAR2->VAR15[VAR5][VAR6] = FUN3(&VAR2->VAR7, 12);
            }
        }
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR16[VAR5]; VAR6++)
        {
            if (VAR2->VAR17[VAR5] == 6)
                VAR2->VAR18[VAR5][VAR6] = FUN3(&VAR2->VAR7, 5);
            else if (VAR2->VAR17[VAR5] == 5)
                VAR2->VAR18[VAR5][VAR6] = FUN3(&VAR2->VAR7, 4);
            else if (VAR2->VAR17[VAR5] == 7)
            {
                FUN4(VAR2->VAR19, VAR20, "");
                return VAR8;
            }
            else
            {
                VAR2->VAR18[VAR5][VAR6] = FUN5(&VAR2->VAR7, &VAR21, VAR2->VAR17[VAR5]);
            }
            if (VAR2->VAR18[VAR5][VAR6] > 26)
            {
                return VAR8;
            }
        }
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
        {
            VAR2->VAR22[VAR5][VAR6] = 0;
            if (VAR2->VAR9[VAR2->VAR10] > 1 && VAR6 < VAR2->VAR16[VAR5] && VAR2->VAR18[VAR5][VAR6] > 0)
            {
                VAR2->VAR22[VAR5][VAR6] = FUN5(&VAR2->VAR7, &VAR23, VAR2->VAR24[VAR5]);
            }
        }
    }
    if (FUN2(&VAR2->VAR7) < 0)
        return VAR8;
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        const VAR25 *VAR26;
        int VAR27, VAR28;
        memset(VAR2->VAR29[VAR5], 0, VAR2->VAR13[VAR5] * sizeof(VAR2->VAR29[0][0][0]) * 2);
        if (VAR2->VAR30[VAR5] == 6)
        {
            VAR26 = VAR31;
            VAR28 = 7;
        }
        else
        {
            VAR26 = VAR32;
            VAR28 = 6;
        }
        VAR27 = 0;
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
        {
            if (VAR6 >= VAR2->VAR16[VAR5] || VAR2->VAR18[VAR5][VAR6] > 0)
            {
                VAR27 = FUN6(&VAR2->VAR7, VAR2->VAR30[VAR5], VAR27, VAR28);
                VAR2->VAR29[VAR5][VAR6][0] = VAR26[VAR27];
            }
            if (VAR6 < VAR2->VAR16[VAR5] && VAR2->VAR22[VAR5][VAR6])
            {
                VAR27 = FUN6(&VAR2->VAR7, VAR2->VAR30[VAR5], VAR27, VAR28);
                VAR2->VAR29[VAR5][VAR6][1] = VAR26[VAR27];
            }
        }
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        if (VAR2->VAR33[VAR5] > 0)
            VAR2->VAR34[VAR5] = FUN3(&VAR2->VAR7, 3);
    }
    if (FUN2(&VAR2->VAR7) < 0)
        return VAR8;
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        int VAR35;
        if (VAR2->VAR33[VAR5] > 0)
        {
            int VAR36 = 0;
            VAR35 = VAR2->VAR33[VAR5] - 1;
            for (VAR6 = VAR2->VAR13[VAR5]; VAR6 < VAR2->VAR13[VAR35]; VAR6++)
            {
                VAR36 = FUN6(&VAR2->VAR7, VAR2->VAR34[VAR5], 64, 7);
                VAR2->VAR37[VAR5][VAR6] = VAR36;
            }
            if (!(VAR2->VAR38 & 0x02))
            {
                FUN4(VAR2->VAR19, VAR39, "");
                VAR2->VAR38 |= 0x02;
            }
        }
    }
    if (!VAR3 && VAR2->VAR12 > 2)
    {
        if (VAR2->VAR40)
        {
            for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
            {
                VAR2->VAR41[VAR5][0] = FUN3(&VAR2->VAR7, 7);
                VAR2->VAR41[VAR5][1] = FUN3(&VAR2->VAR7, 7);
            }
        }
        else
        {
            int VAR42 = VAR2->VAR43 & VAR44;
            if (VAR42 >= FUN7(VAR45))
            {
                FUN4(VAR2->VAR19, VAR20, "", VAR42);
                return VAR8;
            }
            for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
            {
                VAR2->VAR41[VAR5][0] = VAR45[VAR42][VAR5][0];
                VAR2->VAR41[VAR5][1] = VAR45[VAR42][VAR5][1];
            }
        }
    }
    if (!VAR3 && VAR2->VAR46)
        VAR2->VAR47 = FUN3(&VAR2->VAR7, 8);
    if (VAR2->VAR48)
    {
        FUN3(&VAR2->VAR7, 16);
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
        for (VAR6 = VAR2->VAR16[VAR5]; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            VAR2->VAR49[VAR5][VAR6] = FUN3(&VAR2->VAR7, 10);
    if (!VAR3 && VAR2->VAR50)
    {
        int VAR51;
        int VAR52 = 2 * VAR2->VAR50 * (4 + VAR4);
        int VAR53 = 2 * VAR2->VAR50 * (4 + VAR4 + VAR2->VAR9[VAR2->VAR10]);
        float VAR54;
        for (VAR5 = VAR52; VAR5 < VAR53; VAR5++)
        {
            VAR2->VAR55[VAR5] = FUN8(&VAR2->VAR7, 8);
        }
        VAR51 = FUN3(&VAR2->VAR7, 8);
        if (VAR51 > 127)
        {
            FUN9(VAR2->VAR19, "");
            return VAR8;
        }
        VAR2->VAR56 = VAR31[VAR51];
        VAR54 = 0.035 * VAR2->VAR56;
        for (VAR5 = VAR52; VAR5 < VAR53; VAR5++)
            VAR2->VAR55[VAR5] *= VAR54;
    }
    FUN4(VAR2->VAR19, VAR39, "", VAR2->VAR9[VAR2->VAR10]);
    FUN4(VAR2->VAR19, VAR39, "", VAR2->VAR11[VAR2->VAR10]);
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        FUN4(VAR2->VAR19, VAR39, "");
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            FUN4(VAR2->VAR19, VAR39, "", VAR2->VAR14[VAR5][VAR6]);
        FUN4(VAR2->VAR19, VAR39, "");
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            FUN4(VAR2->VAR19, VAR39, "", (float)VAR57[VAR2->VAR15[VAR5][VAR6]][0] / 8192, (float)VAR57[VAR2->VAR15[VAR5][VAR6]][1] / 8192, (float)VAR57[VAR2->VAR15[VAR5][VAR6]][2] / 8192, (float)VAR57[VAR2->VAR15[VAR5][VAR6]][3] / 8192);
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        FUN4(VAR2->VAR19, VAR39, "");
        for (VAR6 = 0; VAR6 < VAR2->VAR16[VAR5]; VAR6++)
            FUN4(VAR2->VAR19, VAR39, "", VAR2->VAR18[VAR5][VAR6]);
        FUN4(VAR2->VAR19, VAR39, "");
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        FUN4(VAR2->VAR19, VAR39, "");
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            FUN4(VAR2->VAR19, VAR39, "", VAR2->VAR22[VAR5][VAR6]);
        FUN4(VAR2->VAR19, VAR39, "");
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        FUN4(VAR2->VAR19, VAR39, "");
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
        {
            if (VAR6 >= VAR2->VAR16[VAR5] || VAR2->VAR18[VAR5][VAR6] > 0)
                FUN4(VAR2->VAR19, VAR39, "", VAR2->VAR29[VAR5][VAR6][0]);
            if (VAR6 < VAR2->VAR16[VAR5] && VAR2->VAR22[VAR5][VAR6])
                FUN4(VAR2->VAR19, VAR39, "", VAR2->VAR29[VAR5][VAR6][1]);
        }
        FUN4(VAR2->VAR19, VAR39, "");
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        if (VAR2->VAR33[VAR5] > 0)
        {
            int VAR35 = VAR2->VAR33[VAR5] - 1;
            FUN4(VAR2->VAR19, VAR39, "");
            for (VAR6 = VAR2->VAR13[VAR5]; VAR6 < VAR2->VAR13[VAR35]; VAR6++)
                FUN4(VAR2->VAR19, VAR39, "", VAR2->VAR37[VAR5][VAR6]);
            FUN4(VAR2->VAR19, VAR39, "");
        }
    }
    if (!VAR3 && VAR2->VAR12 > 2 && VAR2->VAR40)
    {
        FUN4(VAR2->VAR19, VAR39, "");
        for (VAR5 = 0; VAR5 < VAR2->VAR12; VAR5++)
        {
            FUN4(VAR2->VAR19, VAR39, "", VAR5, VAR58[VAR2->VAR41[VAR5][0]]);
            FUN4(VAR2->VAR19, VAR39, "", VAR5, VAR58[VAR2->VAR41[VAR5][1]]);
        }
        FUN4(VAR2->VAR19, VAR39, "");
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
        for (VAR6 = VAR2->VAR16[VAR5]; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            FUN4(VAR2->VAR19, VAR39, "", VAR2->VAR49[VAR5][VAR6]);
    if (!VAR3 && VAR2->VAR50)
    {
        int VAR52 = 2 * VAR2->VAR50 * (4 + VAR4);
        int VAR53 = 2 * VAR2->VAR50 * (4 + VAR4 + VAR2->VAR9[VAR2->VAR10]);
        FUN4(VAR2->VAR19, VAR39, "");
        for (VAR5 = VAR52; VAR5 < VAR53; VAR5++)
            FUN4(VAR2->VAR19, VAR39, "", VAR2->VAR55[VAR5]);
        FUN4(VAR2->VAR19, VAR39, "");
    }
    return 0;
}