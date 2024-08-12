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
        int VAR27;
        memset(VAR2->VAR28[VAR5], 0, VAR2->VAR13[VAR5] * sizeof(VAR2->VAR28[0][0][0]) * 2);
        if (VAR2->VAR29[VAR5] == 6)
            VAR26 = VAR30;
        else
            VAR26 = VAR31;
        VAR27 = 0;
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
        {
            if (VAR6 >= VAR2->VAR16[VAR5] || VAR2->VAR18[VAR5][VAR6] > 0)
            {
                VAR27 = FUN6(&VAR2->VAR7, VAR2->VAR29[VAR5], VAR27);
                VAR2->VAR28[VAR5][VAR6][0] = VAR26[VAR27];
            }
            if (VAR6 < VAR2->VAR16[VAR5] && VAR2->VAR22[VAR5][VAR6])
            {
                VAR27 = FUN6(&VAR2->VAR7, VAR2->VAR29[VAR5], VAR27);
                VAR2->VAR28[VAR5][VAR6][1] = VAR26[VAR27];
            }
        }
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        if (VAR2->VAR32[VAR5] > 0)
            VAR2->VAR33[VAR5] = FUN3(&VAR2->VAR7, 3);
    }
    if (FUN2(&VAR2->VAR7) < 0)
        return VAR8;
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        int VAR34;
        if (VAR2->VAR32[VAR5] > 0)
        {
            int VAR35 = 0;
            VAR34 = VAR2->VAR32[VAR5] - 1;
            for (VAR6 = VAR2->VAR13[VAR5]; VAR6 < VAR2->VAR13[VAR34]; VAR6++)
            {
                VAR35 = FUN6(&VAR2->VAR7, VAR2->VAR33[VAR5], 0);
                VAR35 += 64;
                VAR2->VAR36[VAR5][VAR6] = VAR35;
            }
            if (!(VAR2->VAR37 & 0x02))
            {
                FUN4(VAR2->VAR19, VAR38, "");
                VAR2->VAR37 |= 0x02;
            }
        }
    }
    if (!VAR3 && VAR2->VAR12 > 2)
    {
        if (VAR2->VAR39)
        {
            for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
            {
                VAR2->VAR40[VAR5][0] = FUN3(&VAR2->VAR7, 7);
                VAR2->VAR40[VAR5][1] = FUN3(&VAR2->VAR7, 7);
            }
        }
        else
        {
            int VAR41 = VAR2->VAR42 & VAR43;
            for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
            {
                VAR2->VAR40[VAR5][0] = VAR44[VAR41][VAR5][0];
                VAR2->VAR40[VAR5][1] = VAR44[VAR41][VAR5][1];
            }
        }
    }
    if (!VAR3 && VAR2->VAR45)
        VAR2->VAR46 = FUN3(&VAR2->VAR7, 8);
    if (VAR2->VAR47)
    {
        FUN3(&VAR2->VAR7, 16);
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
        for (VAR6 = VAR2->VAR16[VAR5]; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            VAR2->VAR48[VAR5][VAR6] = FUN3(&VAR2->VAR7, 10);
    if (!VAR3 && VAR2->VAR49)
    {
        int VAR50;
        int VAR51 = 2 * VAR2->VAR49 * (4 + VAR4);
        int VAR52 = 2 * VAR2->VAR49 * (4 + VAR4 + VAR2->VAR9[VAR2->VAR10]);
        float VAR53;
        for (VAR5 = VAR51; VAR5 < VAR52; VAR5++)
        {
            VAR2->VAR54[VAR5] = FUN7(&VAR2->VAR7, 8);
        }
        VAR50 = FUN3(&VAR2->VAR7, 8);
        if (VAR50 > 127)
        {
            FUN8(VAR2->VAR19, "");
            return VAR8;
        }
        VAR2->VAR55 = VAR30[VAR50];
        VAR53 = 0.035 * VAR2->VAR55;
        for (VAR5 = VAR51; VAR5 < VAR52; VAR5++)
            VAR2->VAR54[VAR5] *= VAR53;
    }
    FUN4(VAR2->VAR19, VAR38, "", VAR2->VAR9[VAR2->VAR10]);
    FUN4(VAR2->VAR19, VAR38, "", VAR2->VAR11[VAR2->VAR10]);
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        FUN4(VAR2->VAR19, VAR38, "");
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            FUN4(VAR2->VAR19, VAR38, "", VAR2->VAR14[VAR5][VAR6]);
        FUN4(VAR2->VAR19, VAR38, "");
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            FUN4(VAR2->VAR19, VAR38, "", (float)VAR56[VAR2->VAR15[VAR5][VAR6]][0] / 8192, (float)VAR56[VAR2->VAR15[VAR5][VAR6]][1] / 8192, (float)VAR56[VAR2->VAR15[VAR5][VAR6]][2] / 8192, (float)VAR56[VAR2->VAR15[VAR5][VAR6]][3] / 8192);
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        FUN4(VAR2->VAR19, VAR38, "");
        for (VAR6 = 0; VAR6 < VAR2->VAR16[VAR5]; VAR6++)
            FUN4(VAR2->VAR19, VAR38, "", VAR2->VAR18[VAR5][VAR6]);
        FUN4(VAR2->VAR19, VAR38, "");
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        FUN4(VAR2->VAR19, VAR38, "");
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            FUN4(VAR2->VAR19, VAR38, "", VAR2->VAR22[VAR5][VAR6]);
        FUN4(VAR2->VAR19, VAR38, "");
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        FUN4(VAR2->VAR19, VAR38, "");
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
        {
            if (VAR6 >= VAR2->VAR16[VAR5] || VAR2->VAR18[VAR5][VAR6] > 0)
                FUN4(VAR2->VAR19, VAR38, "", VAR2->VAR28[VAR5][VAR6][0]);
            if (VAR6 < VAR2->VAR16[VAR5] && VAR2->VAR22[VAR5][VAR6])
                FUN4(VAR2->VAR19, VAR38, "", VAR2->VAR28[VAR5][VAR6][1]);
        }
        FUN4(VAR2->VAR19, VAR38, "");
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
    {
        if (VAR2->VAR32[VAR5] > 0)
        {
            int VAR34 = VAR2->VAR32[VAR5] - 1;
            FUN4(VAR2->VAR19, VAR38, "");
            for (VAR6 = VAR2->VAR13[VAR5]; VAR6 < VAR2->VAR13[VAR34]; VAR6++)
                FUN4(VAR2->VAR19, VAR38, "", VAR2->VAR36[VAR5][VAR6]);
            FUN4(VAR2->VAR19, VAR38, "");
        }
    }
    if (!VAR3 && VAR2->VAR12 > 2 && VAR2->VAR39)
    {
        FUN4(VAR2->VAR19, VAR38, "");
        for (VAR5 = 0; VAR5 < VAR2->VAR12; VAR5++)
        {
            FUN4(VAR2->VAR19, VAR38, "", VAR5, VAR57[VAR2->VAR40[VAR5][0]]);
            FUN4(VAR2->VAR19, VAR38, "", VAR5, VAR57[VAR2->VAR40[VAR5][1]]);
        }
        FUN4(VAR2->VAR19, VAR38, "");
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR12; VAR5++)
        for (VAR6 = VAR2->VAR16[VAR5]; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
            FUN4(VAR2->VAR19, VAR38, "", VAR2->VAR48[VAR5][VAR6]);
    if (!VAR3 && VAR2->VAR49)
    {
        int VAR51 = 2 * VAR2->VAR49 * (4 + VAR4);
        int VAR52 = 2 * VAR2->VAR49 * (4 + VAR4 + VAR2->VAR9[VAR2->VAR10]);
        FUN4(VAR2->VAR19, VAR38, "");
        for (VAR5 = VAR51; VAR5 < VAR52; VAR5++)
            FUN4(VAR2->VAR19, VAR38, "", VAR2->VAR54[VAR5]);
        FUN4(VAR2->VAR19, VAR38, "");
    }
    return 0;
}