static VAR1 *FUN1(hwaddr VAR2, hwaddr VAR3, uint8_t VAR4, bool VAR5)
{
    VAR6 *VAR7, *VAR8 = NULL;
    hwaddr VAR9;
    hwaddr VAR10;
    hwaddr VAR11 = VAR3;
    hwaddr VAR12;
    bool translated VAR13 = false;
    bool VAR14 = false;
VAR15:
    VAR9 = VAR2 >> VAR16;
    VAR10 = VAR2 & (VAR17 - 1);
    FUN2(VAR2);
    if (VAR3)
    {
        VAR12 = VAR3 + (VAR2 & (VAR18 - 1));
        if (VAR12 % VAR18)
        {
            VAR12 += VAR18 - (VAR12 % VAR18);
        }
    }
    else
    {
        VAR12 = VAR18;
    }
    if (VAR19->VAR20 != NULL && VAR19->VAR20->VAR21 == VAR9 && !VAR4 && !VAR3 && FUN3(VAR10 >> VAR22, VAR12 >> VAR22, VAR19->VAR20->VAR23))
    {
        FUN4(VAR19->VAR20->VAR24 + VAR10);
        return VAR19->VAR20->VAR24 + VAR10;
    }
    if (VAR3)
    {
        VAR11 = VAR3 + VAR10;
        if (VAR11 % VAR17)
        {
            VAR11 += VAR17 - (VAR11 % VAR17);
        }
    }
    else
    {
        VAR11 = VAR17;
    }
    VAR7 = &VAR19->VAR7[VAR9 % VAR19->VAR25];
    while (VAR7 && VAR7->VAR4 && VAR7->VAR24 && (VAR7->VAR21 != VAR9 || VAR7->VAR3 != VAR11 || !FUN3(VAR10 >> VAR22, VAR12 >> VAR22, VAR7->VAR23)))
    {
        VAR8 = VAR7;
        VAR7 = VAR7->VAR26;
    }
    if (!VAR7)
    {
        VAR7 = FUN5(sizeof(VAR6));
        VAR8->VAR26 = VAR7;
        FUN6(VAR7, NULL, VAR11, VAR9, VAR14);
    }
    else if (!VAR7->VAR4)
    {
        if (!VAR7->VAR24 || VAR7->VAR21 != VAR9 || VAR7->VAR3 != VAR11 || !FUN3(VAR10 >> VAR22, VAR12 >> VAR22, VAR7->VAR23))
        {
            FUN6(VAR7, NULL, VAR11, VAR9, VAR14);
        }
    }
    if (!FUN3(VAR10 >> VAR22, VAR12 >> VAR22, VAR7->VAR23))
    {
        VAR19->VAR20 = NULL;
        if (!VAR27 && VAR19->VAR28)
        {
            VAR2 = VAR19->FUN7(VAR2, VAR3, VAR19->VAR29);
            VAR27 = true;
            goto VAR15;
        }
        if (!VAR14 && FUN8(VAR30))
        {
            VAR14 = true;
            goto VAR15;
        }
        FUN4(NULL);
        return NULL;
    }
    VAR19->VAR20 = VAR7;
    if (VAR4)
    {
        VAR31 *VAR32 = FUN5(sizeof(VAR31));
        VAR7->VAR4++;
        VAR32->VAR5 = VAR5;
        VAR32->VAR33 = VAR19->VAR20->VAR24 + VAR10;
        VAR32->VAR21 = VAR19->VAR20->VAR21;
        VAR32->VAR3 = VAR7->VAR3;
        FUN9(&VAR19->VAR34, VAR32, VAR26);
    }
    FUN4(VAR19->VAR20->VAR24 + VAR10);
    return VAR19->VAR20->VAR24 + VAR10;
}