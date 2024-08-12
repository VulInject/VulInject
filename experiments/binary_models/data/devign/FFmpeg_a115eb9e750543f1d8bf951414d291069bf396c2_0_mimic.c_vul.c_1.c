static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    int VAR11 = VAR9 - VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    GetByteContext VAR16;
    int VAR17;
    int VAR18, VAR19;
    int VAR20, VAR21;
    int VAR22;
    if (VAR9 <= VAR12)
    {
        FUN2(VAR2, VAR23, "");
        return VAR24;
    }
    FUN3(&VAR16, VAR8, VAR12);
    FUN4(&VAR16, 2);
    VAR20 = FUN5(&VAR16);
    VAR18 = FUN5(&VAR16);
    VAR19 = FUN5(&VAR16);
    FUN4(&VAR16, 4);
    VAR17 = FUN6(&VAR16);
    VAR21 = FUN7(&VAR16);
    FUN4(&VAR16, 3);
    if (!VAR14->VAR2)
    {
        int VAR25;
        if (!(VAR18 == 160 && VAR19 == 120) && !(VAR18 == 320 && VAR19 == 240))
        {
            FUN2(VAR2, VAR23, "");
            return VAR24;
        }
        VAR14->VAR2 = VAR2;
        VAR2->VAR18 = VAR18;
        VAR2->VAR19 = VAR19;
        VAR2->VAR26 = VAR27;
        for (VAR25 = 0; VAR25 < 3; VAR25++)
        {
            VAR14->VAR28[VAR25] = FUN8(VAR19, 3 + !!VAR25);
            VAR14->VAR29[VAR25] = VAR18 >> (3 + !!VAR25);
        }
    }
    else if (VAR18 != VAR14->VAR2->VAR18 || VAR19 != VAR14->VAR2->VAR19)
    {
        FUN9(VAR2, "");
        return VAR30;
    }
    if (VAR17 && !VAR14->VAR31[VAR14->VAR32].VAR33->VAR3[0])
    {
        FUN2(VAR2, VAR23, "");
        return VAR24;
    }
    FUN10(VAR2, &VAR14->VAR31[VAR14->VAR34]);
    VAR14->VAR31[VAR14->VAR34].VAR33->VAR35 = VAR17 ? VAR36 : VAR37;
    if ((VAR22 = FUN11(VAR2, &VAR14->VAR31[VAR14->VAR34], VAR38)) < 0)
    {
        FUN2(VAR2, VAR23, "");
        return VAR22;
    }
    VAR14->VAR39 = VAR14->VAR34;
    VAR14->VAR40 = (VAR14->VAR34 - 1) & 15;
    FUN12(VAR2);
    FUN13(&VAR14->VAR41, &VAR14->VAR11, VAR11);
    if (!VAR14->VAR41)
        return FUN14(VAR42);
    VAR14->VAR43.FUN15(VAR14->VAR41, (const VAR44 *)(VAR8 + VAR12), VAR11 >> 2);
    FUN16(&VAR14->VAR16, VAR14->VAR41, VAR11 << 3);
    VAR22 = FUN17(VAR14, VAR20, VAR21, !VAR17);
    FUN18(&VAR14->VAR31[VAR14->VAR34], VAR45, 0);
    if (VAR22 < 0)
    {
        if (!(VAR2->VAR46 & VAR47))
            FUN10(VAR2, &VAR14->VAR31[VAR14->VAR34]);
        return VAR22;
    }
    if ((VAR22 = FUN19(VAR3, VAR14->VAR31[VAR14->VAR34].VAR33)) < 0)
        return VAR22;
    *VAR4 = 1;
    FUN20(VAR3);
    VAR14->VAR32 = VAR14->VAR39;
    VAR14->VAR34 = VAR14->VAR40;
    FUN10(VAR2, &VAR14->VAR31[VAR14->VAR34]);
    return VAR9;
}