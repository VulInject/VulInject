int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0;
    int VAR6;
    VAR4->VAR7.VAR8 = VAR9;
    VAR4->VAR7.VAR10 = VAR4->VAR11;
    VAR4->VAR12 = FUN2((1 + VAR4->VAR11) * (sizeof(VAR13) + sizeof(VAR14 *) + sizeof(VAR15 *)));
    if (!VAR4->VAR12)
        return FUN3(VAR16);
    if (VAR2->VAR17)
    {
        VAR18 *VAR19 = VAR2->VAR17;
        VAR4->VAR20 = VAR19->VAR20;
        VAR4->VAR7.VAR8 = VAR19->VAR21;
        VAR5 = VAR19->VAR5;
    }
    if (!VAR4->VAR20)
    {
        VAR6 = FUN4(VAR2, &VAR4->VAR22, VAR4->VAR23);
        if (VAR6 < 0)
            return VAR6;
        VAR4->VAR20 = VAR4->VAR22;
    }
    VAR6 = FUN5(VAR2, VAR4);
    if (VAR6 < 0)
        return VAR6;
    VAR6 = FUN6(VAR4->VAR20, &VAR4->VAR7, &VAR4->VAR24);
    if (VAR6 < 0)
    {
        FUN7(VAR2, VAR25, "");
        return FUN8(VAR6);
    }
    if (VAR5)
    {
        VAR6 = FUN9(VAR2, VAR4);
        if (VAR6 < 0)
            return VAR6;
    }
    if (VAR2->VAR17)
    {
        VAR18 *VAR19 = VAR2->VAR17;
        int VAR26, VAR27;
        VAR4->VAR28 = FUN10(VAR19->VAR29 + VAR4->VAR30, sizeof(*VAR4->VAR28));
        if (!VAR4->VAR28)
            return FUN3(VAR16);
        VAR4->VAR7.VAR31 = VAR4->VAR28;
        for (VAR26 = 0; VAR26 < VAR19->VAR29; VAR26++)
            VAR4->VAR7.VAR31[VAR26] = VAR19->VAR32[VAR26];
        VAR4->VAR7.VAR33 = VAR19->VAR29;
        for (VAR26 = 0; VAR26 < VAR4->VAR30; VAR26++)
        {
            for (VAR27 = 0; VAR27 < VAR19->VAR29; VAR27++)
            {
                if (VAR19->VAR32[VAR27]->VAR34 == VAR4->VAR35[VAR26]->VAR34)
                    break;
            }
            if (VAR27 < VAR19->VAR29)
                continue;
            VAR4->VAR7.VAR31[VAR4->VAR7.VAR33++] = VAR4->VAR35[VAR26];
        }
    }
    else
    {
        VAR4->VAR7.VAR31 = VAR4->VAR35;
        VAR4->VAR7.VAR33 = VAR4->VAR30;
    }
    VAR6 = FUN11(VAR4->VAR20, &VAR4->VAR7);
    if (VAR6 < 0)
    {
        FUN7(VAR2, VAR25, "");
        return FUN8(VAR6);
    }
    VAR6 = FUN12(VAR2, VAR4);
    if (VAR6 < 0)
    {
        FUN7(VAR2, VAR25, "");
        return VAR6;
    }
    VAR4->VAR2 = VAR2;
    return 0;
}