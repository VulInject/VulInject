void FUN1(VAR1 *VAR2, int VAR3, const char *VAR4, int VAR5)
{
    int VAR6;
    VAR7 *VAR8 = VAR2->VAR9 ? FUN2(VAR2->VAR9) : NULL;
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
            int64_t VAR15 = VAR2->VAR15 + (VAR2->VAR15 <= VAR21 - 5000 ? 5000 : 0);
            VAR19 = VAR15 / VAR22;
            VAR20 = VAR15 % VAR22;
            VAR18 = VAR19 / 60;
            VAR19 %= 60;
            VAR17 = VAR18 / 60;
            VAR18 %= 60;
            FUN3(NULL, VAR10, "", VAR17, VAR18, VAR19, (100 * VAR20) / VAR22);
        }
        else
        {
            FUN3(NULL, VAR10, "");
        }
        if (VAR2->VAR23 != VAR16)
        {
            int VAR19, VAR20;
            FUN3(NULL, VAR10, "");
            VAR19 = VAR2->VAR23 / VAR22;
            VAR20 = FUN5(VAR2->VAR23 % VAR22);
            FUN3(NULL, VAR10, "", VAR19, (int)FUN6(VAR20, 1000000, VAR22));
        }
        FUN3(NULL, VAR10, "");
        if (VAR2->VAR24)
            FUN3(NULL, VAR10, "" VAR25 "", (VAR26)VAR2->VAR24 / 1000);
        else
            FUN3(NULL, VAR10, "");
        FUN3(NULL, VAR10, "");
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR27; VAR6++)
    {
        VAR28 *VAR29 = VAR2->VAR30[VAR6];
        FUN3(NULL, VAR10, "", VAR3, VAR6);
        FUN3(NULL, VAR10, "", VAR29->VAR31 * FUN7(VAR29->VAR32));
        FUN3(NULL, VAR10, "", VAR29->VAR33 * FUN7(VAR29->VAR32));
        FUN4(NULL, VAR29->VAR14, "");
    }
    if (VAR2->VAR34)
    {
        int VAR35, VAR36, VAR37 = 0;
        for (VAR35 = 0; VAR35 < VAR2->VAR34; VAR35++)
        {
            VAR38 *VAR12 = FUN8(VAR2->VAR39[VAR35]->VAR14, "", NULL, 0);
            FUN3(NULL, VAR10, "", VAR2->VAR39[VAR35]->VAR40, VAR12 ? VAR12->VAR41 : "");
            FUN4(NULL, VAR2->VAR39[VAR35]->VAR14, "");
            for (VAR36 = 0; VAR36 < VAR2->VAR39[VAR35]->VAR42; VAR36++)
            {
                FUN9(VAR2, VAR2->VAR39[VAR35]->VAR43[VAR36], VAR3, VAR5);
                VAR8[VAR2->VAR39[VAR35]->VAR43[VAR36]] = 1;
            }
            VAR37 += VAR2->VAR39[VAR35]->VAR42;
        }
        if (VAR37 < VAR2->VAR9)
            FUN3(NULL, VAR10, "");
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++)
        if (!VAR8[VAR6])
            FUN9(VAR2, VAR6, VAR3, VAR5);
    FUN10(VAR8);
}