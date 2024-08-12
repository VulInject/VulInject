void FUN1(VAR1 *VAR2, int VAR3, const char *VAR4, int VAR5)
{
    int VAR6;
    VAR7 *VAR8 = FUN2(VAR2->VAR9);
    if (VAR2->VAR9 && !VAR8)
        return;
    FUN3(NULL, VAR10, "", VAR5 ? "" : "", VAR3, VAR5 ? VAR2->VAR11->VAR12 : VAR2->VAR13->VAR12, VAR5 ? "" : "", VAR4);
    FUN4(NULL, VAR2->VAR14, "");
    if (!VAR5)
    {
        FUN3(NULL, VAR10, "");
        if (VAR2->VAR15 != VAR16)
        {
            int VAR17, VAR18, VAR19, VAR20;
            VAR19 = VAR2->VAR15 / VAR21;
            VAR20 = VAR2->VAR15 % VAR21;
            VAR18 = VAR19 / 60;
            VAR19 %= 60;
            VAR17 = VAR18 / 60;
            VAR18 %= 60;
            FUN3(NULL, VAR10, "", VAR17, VAR18, VAR19, (100 * VAR20) / VAR21);
        }
        else
        {
            FUN3(NULL, VAR10, "");
        }
        if (VAR2->VAR22 != VAR16)
        {
            int VAR19, VAR20;
            FUN3(NULL, VAR10, "");
            VAR19 = VAR2->VAR22 / VAR21;
            VAR20 = FUN5(VAR2->VAR22 % VAR21);
            FUN3(NULL, VAR10, "", VAR19, (int)FUN6(VAR20, 1000000, VAR21));
        }
        FUN3(NULL, VAR10, "");
        if (VAR2->VAR23)
        {
            FUN3(NULL, VAR10, "", VAR2->VAR23 / 1000);
        }
        else
        {
            FUN3(NULL, VAR10, "");
        }
        FUN3(NULL, VAR10, "");
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR24; VAR6++)
    {
        VAR25 *VAR26 = VAR2->VAR27[VAR6];
        FUN3(NULL, VAR10, "", VAR3, VAR6);
        FUN3(NULL, VAR10, "", VAR26->VAR28 * FUN7(VAR26->VAR29));
        FUN3(NULL, VAR10, "", VAR26->VAR30 * FUN7(VAR26->VAR29));
        FUN4(NULL, VAR26->VAR14, "");
    }
    if (VAR2->VAR31)
    {
        int VAR32, VAR33, VAR34 = 0;
        for (VAR32 = 0; VAR32 < VAR2->VAR31; VAR32++)
        {
            VAR35 *VAR12 = FUN8(VAR2->VAR36[VAR32]->VAR14, "", NULL, 0);
            FUN3(NULL, VAR10, "", VAR2->VAR36[VAR32]->VAR37, VAR12 ? VAR12->VAR38 : "");
            FUN4(NULL, VAR2->VAR36[VAR32]->VAR14, "");
            for (VAR33 = 0; VAR33 < VAR2->VAR36[VAR32]->VAR39; VAR33++)
            {
                FUN9(VAR2, VAR2->VAR36[VAR32]->VAR40[VAR33], VAR3, VAR5);
                VAR8[VAR2->VAR36[VAR32]->VAR40[VAR33]] = 1;
            }
            VAR34 += VAR2->VAR36[VAR32]->VAR39;
        }
        if (VAR34 < VAR2->VAR9)
            FUN3(NULL, VAR10, "");
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++)
        if (!VAR8[VAR6])
            FUN9(VAR2, VAR6, VAR3, VAR5);
    FUN10(VAR8);
}