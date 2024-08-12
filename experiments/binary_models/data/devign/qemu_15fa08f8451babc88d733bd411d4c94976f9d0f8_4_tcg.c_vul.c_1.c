void FUN1(void *VAR1, VAR2 *VAR3, int VAR4, VAR2 **VAR5)
{
    VAR6 *VAR7 = VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    unsigned VAR13, VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    VAR16 = FUN2(VAR19, (VAR20)VAR1);
    VAR14 = VAR16->VAR14;
    VAR13 = VAR16->VAR13;
    &&!FUN3(VAR21) int VAR22 = VAR13;
    int VAR23 = VAR4;
    TCGv_i64 VAR24, VAR25;
    VAR2 *VAR26[VAR27];
    VAR24 = NULL;
    VAR25 = NULL;
    if (VAR13 != 0)
    {
        for (VAR9 = VAR10 = 0; VAR9 < VAR4; ++VAR9)
        {
            int VAR28 = VAR13 & (1 << (VAR9 + 1) * 2);
            if (VAR28)
            {
                TCGv_i64 VAR29 = FUN4(VAR5[VAR9]);
                TCGv_i32 VAR30 = FUN5();
                TCGv_i32 VAR31 = FUN5();
                FUN6(VAR31, VAR30, VAR29);
                VAR26[VAR10++] = FUN7(VAR30);
                VAR26[VAR10++] = FUN7(VAR31);
            }
            else
            {
                VAR26[VAR10++] = VAR5[VAR9];
            }
        }
        VAR4 = VAR10;
        VAR5 = VAR26;
        VAR13 = 0;
    }
    for (VAR9 = 0; VAR9 < VAR4; ++VAR9)
    {
        int VAR28 = VAR13 & (1 << (VAR9 + 1) * 2);
        int VAR32 = VAR13 & (2 << (VAR9 + 1) * 2);
        if (!VAR28)
        {
            TCGv_i64 VAR33 = FUN8();
            TCGv_i64 VAR29 = FUN4(VAR5[VAR9]);
            if (VAR32)
            {
                FUN9(VAR33, VAR29);
            }
            else
            {
                FUN10(VAR33, VAR29);
            }
            VAR5[VAR9] = FUN11(VAR33);
        }
    }
    VAR9 = VAR7->VAR34;
    FUN12(VAR9 < VAR35);
    VAR7->VAR36[0].VAR37 = VAR9;
    VAR7->VAR34 = VAR9 + 1;
    VAR18 = &VAR7->VAR36[VAR9];
    memset(VAR18, 0, FUN13(VAR17, VAR5));
    VAR18->VAR38 = VAR39;
    VAR18->VAR37 = VAR9 - 1;
    VAR18->VAR40 = VAR9 + 1;
    VAR12 = 0;
    if (VAR3 != NULL)
    {
        &&!FUN3(VAR21) if (VAR22 & 1)
        {
            VAR24 = FUN8();
            VAR25 = FUN8();
            VAR18->VAR5[VAR12++] = FUN14(VAR25);
            VAR18->VAR5[VAR12++] = FUN14(VAR24);
            VAR11 = 2;
        }
        else
        {
            VAR18->VAR5[VAR12++] = FUN15(VAR3);
            VAR11 = 1;
        }
        if (VAR41 < 64 && (VAR13 & 1))
        {
            VAR18->VAR5[VAR12++] = FUN15(VAR3 + 1);
            VAR18->VAR5[VAR12++] = FUN15(VAR3);
            VAR18->VAR5[VAR12++] = FUN15(VAR3);
            VAR18->VAR5[VAR12++] = FUN15(VAR3 + 1);
            VAR11 = 2;
        }
        else
        {
            VAR18->VAR5[VAR12++] = FUN15(VAR3);
            VAR11 = 1;
        }
    }
    else
    {
        VAR11 = 0;
    }
    VAR18->VAR42 = VAR11;
    VAR10 = 0;
    for (VAR9 = 0; VAR9 < VAR4; VAR9++)
    {
        int VAR28 = VAR13 & (1 << (VAR9 + 1) * 2);
        if (VAR41 < 64 && VAR28)
        {
            if (VAR10 & 1)
            {
                VAR18->VAR5[VAR12++] = VAR43;
                VAR10++;
            }
            VAR18->VAR5[VAR12++] = FUN15(VAR5[VAR9] + 1);
            VAR18->VAR5[VAR12++] = FUN15(VAR5[VAR9]);
            VAR18->VAR5[VAR12++] = FUN15(VAR5[VAR9]);
            VAR18->VAR5[VAR12++] = FUN15(VAR5[VAR9] + 1);
            VAR10 += 2;
            continue;
        }
        VAR18->VAR5[VAR12++] = FUN15(VAR5[VAR9]);
        VAR10++;
    }
    VAR18->VAR5[VAR12++] = (VAR44)VAR1;
    VAR18->VAR5[VAR12++] = VAR14;
    VAR18->VAR45 = VAR10;
    FUN12(VAR18->VAR45 == VAR10);
    FUN12(VAR12 <= FUN16(VAR18->VAR5));
    &&!FUN3(VAR21) for (VAR9 = VAR10 = 0; VAR9 < VAR23; ++VAR9)
    {
        int VAR28 = VAR22 & (1 << (VAR9 + 1) * 2);
        if (VAR28)
        {
            FUN17(VAR5[VAR10++]);
            FUN17(VAR5[VAR10++]);
        }
        else
        {
            VAR10++;
        }
    }
    if (VAR22 & 1)
    {
        FUN18(FUN4(VAR3), VAR24, VAR25);
        FUN19(VAR24);
        FUN19(VAR25);
    }
    for (VAR9 = 0; VAR9 < VAR4; ++VAR9)
    {
        int VAR28 = VAR13 & (1 << (VAR9 + 1) * 2);
        if (!VAR28)
        {
            FUN17(VAR5[VAR9]);
        }
    }
}