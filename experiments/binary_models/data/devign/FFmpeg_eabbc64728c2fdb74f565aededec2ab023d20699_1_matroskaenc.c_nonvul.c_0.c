static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR13[VAR4->VAR14]->VAR15;
    int VAR16 = !!(VAR4->VAR17 & VAR18);
    int VAR19 = VAR4->VAR19;
    int VAR20;
    int64_t VAR21 = VAR7->VAR22[VAR4->VAR14].VAR23 ? VAR4->VAR24 : VAR4->VAR25;
    int64_t VAR26;
    int VAR27 = VAR7->VAR28 ? VAR7->VAR29 : VAR4->VAR14 + 1;
    if (VAR21 == VAR30)
    {
        FUN2(VAR2, VAR31, "");
        return FUN3(VAR32);
    }
    VAR21 += VAR7->VAR22[VAR4->VAR14].VAR33;
    if (VAR7->VAR34 != -1)
    {
        int64_t VAR35 = VAR21 - VAR7->VAR36 + VAR7->VAR22[VAR4->VAR14].VAR33;
        if ((VAR37)VAR35 != VAR35)
        {
            FUN2(VAR2, VAR38, "");
            FUN4(VAR2, VAR4);
        }
    }
    if (VAR7->VAR34 == -1)
    {
        VAR7->VAR34 = FUN5(VAR2->VAR10);
        VAR20 = FUN6(VAR2->VAR10, &VAR7->VAR39, VAR7, &VAR7->VAR40, VAR41, 0);
        if (VAR20 < 0)
            return VAR20;
        FUN7(VAR7->VAR39, VAR42, FUN8(0, VAR21));
        VAR7->VAR36 = FUN8(0, VAR21);
    }
    VAR10 = VAR7->VAR39;
    VAR26 = FUN5(VAR10);
    if (VAR12->VAR43 != VAR44)
    {
        FUN9(VAR2, VAR10, VAR45, VAR4, VAR16);
        if (VAR2->VAR10->VAR46 && (VAR12->VAR43 == VAR47 && VAR16 || VAR5))
        {
            VAR20 = FUN10(VAR7->VAR48, VAR4->VAR14, VAR27, VAR21, VAR7->VAR34, VAR26, -1);
            if (VAR20 < 0)
                return VAR20;
        }
    }
    else
    {
        if (VAR12->VAR49 == VAR50)
        {
            VAR19 = FUN11(VAR2, VAR10, VAR4);
        }
        else
        {
            ebml_master VAR51 = FUN12(VAR10, VAR52, FUN13(VAR4->VAR53));
            FF_DISABLE_DEPRECATION_WARNINGS if (VAR4->VAR54 > 0) { VAR19 = VAR4->VAR54; }
            VAR55 FUN9(VAR2, VAR10, VAR56, VAR4, 1);
            FUN7(VAR10, VAR57, VAR19);
            FUN14(VAR10, VAR51);
        }
        if (VAR2->VAR10->VAR46)
        {
            VAR20 = FUN10(VAR7->VAR48, VAR4->VAR14, VAR27, VAR21, VAR7->VAR34, VAR26, VAR19);
            if (VAR20 < 0)
                return VAR20;
        }
    }
    VAR7->VAR19 = FUN8(VAR7->VAR19, VAR21 + VAR19);
    if (VAR7->VAR58)
        VAR7->VAR58[VAR4->VAR14] = FUN8(VAR7->VAR58[VAR4->VAR14], VAR21 + VAR19);
    return 0;
}