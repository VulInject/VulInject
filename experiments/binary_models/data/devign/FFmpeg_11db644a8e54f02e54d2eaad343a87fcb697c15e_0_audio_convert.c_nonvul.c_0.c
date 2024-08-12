int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int VAR6 = 1;
    int VAR7 = VAR5->VAR8;
    int VAR9;
    if (VAR2->VAR10)
    {
        FUN2(VAR2->VAR11, "", VAR7, FUN3(VAR2->VAR12), FUN3(VAR2->VAR13));
        return FUN4(VAR2->VAR10, VAR4, VAR5);
    }
    if (VAR2->VAR14)
    {
        int VAR15 = FUN5(VAR5->VAR15, VAR4->VAR15);
        int VAR16 = FUN5(VAR5->VAR16, VAR4->VAR16);
        int VAR17 = FUN6(VAR7, VAR2->VAR16);
        if (!(VAR15 % VAR2->VAR15) && VAR16 >= VAR17)
        {
            VAR7 = VAR17;
            VAR6 = 0;
        }
    }
    FUN2(VAR2->VAR11, "", VAR7, FUN3(VAR2->VAR12), FUN3(VAR2->VAR13), VAR6 ? VAR2->VAR18 : VAR2->VAR19);
    if (VAR2->VAR20)
    {
        VAR21 *VAR22 = &VAR2->VAR11->VAR23;
        if (!FUN7(VAR2->VAR13, VAR2->VAR24))
        {
            FUN8(VAR2->VAR11, VAR25, "");
            return FUN9(VAR26);
        }
        if (VAR22->VAR27)
        {
            if (FUN7(VAR2->VAR12, VAR2->VAR24))
            {
                VAR28 *VAR29 = VAR6 ? VAR2->VAR30 : VAR2->VAR31;
                for (VAR9 = 0; VAR9 < VAR2->VAR32; VAR9++)
                    if (VAR22->VAR33[VAR9] >= 0)
                        FUN10(VAR4->VAR34[VAR9], VAR5->VAR34[VAR22->VAR33[VAR9]], VAR7);
            }
            else
            {
                VAR35 *VAR34[VAR36];
                VAR37 *VAR29 = VAR6 ? VAR2->VAR38 : VAR2->VAR39;
                for (VAR9 = 0; VAR9 < VAR2->VAR24; VAR9++)
                    VAR34[VAR22->VAR40[VAR9]] = VAR4->VAR34[VAR9];
                FUN10(VAR34, VAR5->VAR34[0], VAR7, VAR2->VAR24);
            }
        }
        if (VAR22->VAR41 || VAR22->VAR42)
        {
            for (VAR9 = 0; VAR9 < VAR2->VAR32; VAR9++)
            {
                if (VAR22->VAR43[VAR9])
                    memcpy(VAR4->VAR34[VAR9], VAR4->VAR34[VAR22->VAR43[VAR9]], VAR7 * VAR4->VAR44);
                else if (VAR22->VAR45[VAR9])
                    FUN11(&VAR4->VAR34[VAR9], 0, VAR7, 1, VAR2->VAR13);
            }
        }
    }
    else
    {
        switch (VAR2->VAR46)
        {
        case VAR47:
        {
            if (!VAR5->VAR48)
                VAR7 *= VAR5->VAR24;
            if (VAR6)
            {
                for (VAR9 = 0; VAR9 < VAR2->VAR32; VAR9++)
                    VAR2->FUN12(VAR4->VAR34[VAR9], VAR5->VAR34[VAR9], VAR7);
            }
            else
            {
                for (VAR9 = 0; VAR9 < VAR2->VAR32; VAR9++)
                    VAR2->FUN13(VAR4->VAR34[VAR9], VAR5->VAR34[VAR9], VAR7);
            }
            break;
        }
        case VAR49:
            if (VAR6)
                VAR2->FUN14(VAR4->VAR34[0], VAR5->VAR34, VAR7, VAR2->VAR24);
            else
                VAR2->FUN15(VAR4->VAR34[0], VAR5->VAR34, VAR7, VAR2->VAR24);
            break;
        case VAR50:
            if (VAR6)
                VAR2->FUN16(VAR4->VAR34, VAR5->VAR34[0], VAR7, VAR2->VAR24);
            else
                VAR2->FUN17(VAR4->VAR34, VAR5->VAR34[0], VAR7, VAR2->VAR24);
            break;
        }
    }
    VAR4->VAR8 = VAR5->VAR8;
    return 0;
}