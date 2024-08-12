static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    FUN2(&VAR10->VAR17, VAR4, VAR5);
    VAR12 = FUN3(&VAR10->VAR17, 12);
    VAR13 = FUN3(&VAR10->VAR17, 12);
    FUN4(&VAR10->VAR17, 4);
    VAR10->VAR18 = FUN3(&VAR10->VAR17, 4);
    if (VAR10->VAR18 == 0)
        return -1;
    VAR10->VAR19 = FUN3(&VAR10->VAR17, 18) * 400;
    if (FUN5(&VAR10->VAR17) == 0)
        return -1;
    if (VAR12 <= 0 || VAR13 <= 0 || (VAR12 % 2) != 0 || (VAR13 % 2) != 0)
        return -1;
    if (VAR12 != VAR10->VAR12 || VAR13 != VAR10->VAR13)
    {
        VAR10->VAR20 = VAR21;
        if (VAR7->VAR22)
        {
            FUN6(VAR10);
        }
        VAR10->VAR12 = VAR12;
        VAR10->VAR13 = VAR13;
        VAR10->VAR23 = 1;
        VAR10->VAR2 = VAR2;
        VAR2->VAR12 = VAR12;
        VAR2->VAR13 = VAR13;
        VAR2->VAR24 = VAR25[VAR10->VAR18];
        VAR10->VAR24 = VAR2->VAR24;
        VAR2->VAR19 = VAR10->VAR19;
        if (FUN7(VAR10) < 0)
            return -1;
        FUN8(VAR10);
        VAR7->VAR22 = 1;
    }
    FUN4(&VAR10->VAR17, 10);
    FUN4(&VAR10->VAR17, 1);
    if (FUN5(&VAR10->VAR17))
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            VAR15 = FUN3(&VAR10->VAR17, 8);
            VAR16 = VAR26[VAR14];
            VAR10->VAR27[VAR16] = VAR15;
            VAR10->VAR28[VAR16] = VAR15;
        }
        FUN9("");
        for (VAR14 = 0; VAR14 < 64; VAR14++)
            FUN9("", VAR10->VAR27[VAR26[VAR14]]);
        FUN10("");
    }
    else
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            VAR15 = VAR29[VAR14];
            VAR10->VAR27[VAR14] = VAR15;
            VAR10->VAR28[VAR14] = VAR15;
        }
    }
    if (FUN5(&VAR10->VAR17))
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            VAR15 = FUN3(&VAR10->VAR17, 8);
            VAR16 = VAR26[VAR14];
            VAR10->VAR30[VAR16] = VAR15;
            VAR10->VAR31[VAR16] = VAR15;
        }
        FUN9("");
        for (VAR14 = 0; VAR14 < 64; VAR14++)
            FUN9("", VAR10->VAR30[VAR26[VAR14]]);
        FUN10("");
    }
    else
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            VAR15 = VAR32[VAR14];
            VAR10->VAR30[VAR14] = VAR15;
            VAR10->VAR31[VAR14] = VAR15;
        }
    }
    VAR10->VAR33 = 1;
    VAR10->VAR34 = 1;
    VAR10->VAR35 = VAR36;
    VAR10->VAR37 = 1;
    VAR10->VAR38 = 0;
    return 0;
}