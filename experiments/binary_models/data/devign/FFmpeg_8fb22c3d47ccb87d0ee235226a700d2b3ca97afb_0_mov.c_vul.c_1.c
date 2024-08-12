static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    int64_t VAR10;
    int VAR11;
    for (VAR11 = 0; VAR11 < VAR2->VAR12; VAR11++)
        if (VAR2->VAR13[VAR11]->VAR14 == VAR4->VAR15)
        {
            VAR7 = VAR2->VAR13[VAR11];
            break;
        }
    if (!VAR7)
    {
        FUN2(VAR2, VAR16, "");
        return;
    }
    VAR7->VAR17 = VAR18;
    VAR9 = VAR7->VAR5;
    VAR10 = FUN3(VAR9->VAR19);
    for (VAR11 = 0; VAR11 < VAR7->VAR20; VAR11++)
    {
        VAR21 *VAR22 = &VAR7->VAR23[VAR11];
        int64_t VAR24 = VAR11 + 1 < VAR7->VAR20 ? VAR7->VAR23[VAR11 + 1].VAR25 : VAR7->VAR26;
        VAR27 *VAR28;
        uint16_t VAR29;
        int VAR30, VAR31;
        if (FUN4(VAR9->VAR19, VAR22->VAR32, VAR33) != VAR22->VAR32)
        {
            FUN2(VAR2, VAR16, "", VAR11);
            goto VAR34;
        }
        VAR30 = FUN5(VAR9->VAR19);
        if (VAR30 > VAR22->VAR35 - 2)
            continue;
        VAR31 = 2 * VAR30 + 1;
        if (!(VAR28 = FUN6(VAR31)))
            goto VAR34;
        VAR29 = FUN5(VAR9->VAR19);
        if (VAR29 == 0xfeff)
            FUN7(VAR9->VAR19, VAR30, VAR28, VAR31);
        else if (VAR29 == 0xfffe)
            FUN8(VAR9->VAR19, VAR30, VAR28, VAR31);
        else
        {
            FUN9(VAR28, VAR29);
            FUN10(VAR9->VAR19, VAR30 - 2, VAR28 + 2, VAR31 - 2);
        }
        FUN11(VAR2, VAR11, VAR7->VAR36, VAR22->VAR25, VAR24, VAR28);
        FUN12(&VAR28);
    }
VAR34:
    FUN4(VAR9->VAR19, VAR10, VAR33);
}