static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR11;
    GetByteContext VAR12;
    VAR13 *VAR14 = VAR3;
    const VAR15 *VAR16, *VAR17;
    VAR15 *VAR18 = NULL;
    int VAR19, VAR20, VAR21 = 0;
    int VAR22, VAR23 = 0;
    FUN2(VAR11, VAR6->VAR3, VAR6->VAR24);
    if (FUN3(VAR11) < 12)
    {
        FUN4(VAR2, VAR25, "", VAR6->VAR24);
        return VAR26;
    }
    VAR19 = FUN5(VAR11);
    FUN6(&VAR8->VAR27, &VAR8->VAR28, VAR19 * sizeof(*VAR8->VAR27));
    if (!VAR8->VAR27)
    {
        VAR23 = FUN7(VAR29);
        goto VAR30;
    }
    FUN4(VAR2, VAR31, "", VAR19);
    if (VAR19 > 5)
    {
        uLongf VAR32;
        if (VAR19 < 32)
            VAR32 = FUN8(VAR11);
        else
            VAR32 = FUN5(VAR11);
        FUN9(VAR2, "", VAR32);
        if (VAR32 != VAR19 * VAR33)
        {
            uLongf VAR34 = VAR19 * VAR33;
            VAR18 = FUN10(VAR34);
            if (!VAR18)
            {
                VAR23 = FUN7(VAR29);
                goto VAR30;
            }
            VAR23 = FUN11(VAR18, &VAR34, VAR11->VAR35, VAR32);
            if (VAR23)
            {
                FUN4(VAR2, VAR25, "", VAR23);
                VAR23 = VAR36;
                goto VAR30;
            }
            FUN12(VAR11, VAR32);
            FUN2(&VAR12, VAR18, VAR34);
            VAR11 = &VAR12;
        }
    }
    for (VAR22 = 0; VAR22 < VAR19; VAR22++)
    {
        VAR8->VAR27[VAR22].VAR37 = FUN5(VAR11);
        VAR8->VAR27[VAR22].VAR38 = FUN5(VAR11);
        VAR8->VAR27[VAR22].VAR39 = FUN5(VAR11);
        VAR8->VAR27[VAR22].VAR40 = FUN5(VAR11);
        VAR21 += VAR8->VAR27[VAR22].VAR38 * VAR8->VAR27[VAR22].VAR40 * VAR8->VAR41;
        FUN9(VAR2, "", VAR22, VAR8->VAR27[VAR22].VAR37, VAR8->VAR27[VAR22].VAR39, VAR8->VAR27[VAR22].VAR38, VAR8->VAR27[VAR22].VAR40);
        if (VAR8->VAR27[VAR22].VAR38 == 0 || VAR8->VAR27[VAR22].VAR40 == 0)
        {
            FUN4(VAR2, VAR25, "", VAR22, VAR8->VAR27[VAR22].VAR37, VAR8->VAR27[VAR22].VAR39, VAR8->VAR27[VAR22].VAR38, VAR8->VAR27[VAR22].VAR40);
            VAR23 = VAR26;
            goto VAR30;
        }
        else if (VAR8->VAR27[VAR22].VAR37 + VAR8->VAR27[VAR22].VAR38 > VAR2->VAR42 || VAR8->VAR27[VAR22].VAR39 + VAR8->VAR27[VAR22].VAR40 > VAR2->VAR43)
        {
            FUN4(VAR2, VAR25, "", VAR22, VAR8->VAR27[VAR22].VAR37, VAR8->VAR27[VAR22].VAR39, VAR8->VAR27[VAR22].VAR38, VAR8->VAR27[VAR22].VAR40);
            VAR23 = VAR26;
            goto VAR30;
        }
    }
    VAR11 = &VAR8->VAR11;
    if (VAR21 < 0x100)
        VAR20 = FUN8(VAR11);
    else if (VAR21 < 0x10000)
        VAR20 = FUN5(VAR11);
    else if (VAR21 < 0x1000000)
        VAR20 = FUN13(VAR11);
    else
        VAR20 = FUN14(VAR11);
    FUN9(VAR2, "", VAR21, VAR20);
    if (VAR20 < 0)
    {
        FUN4(VAR2, VAR25, "", VAR20);
        VAR23 = VAR26;
        goto VAR30;
    }
    if (VAR21 == VAR20)
    {
        if (FUN3(VAR11) < VAR21)
        {
            FUN4(VAR2, VAR25, "", VAR21);
            VAR23 = VAR26;
            goto VAR30;
        }
        VAR16 = VAR11->VAR35;
    }
    else
    {
        uLongf VAR44 = VAR8->VAR45;
        if (FUN3(VAR11) < VAR20)
        {
            FUN4(VAR2, VAR25, "", VAR20);
            VAR23 = VAR26;
            goto VAR30;
        }
        VAR23 = FUN11(VAR8->VAR46, &VAR44, VAR11->VAR35, VAR20);
        if (VAR23)
        {
            FUN4(VAR2, VAR25, "", VAR23);
            VAR23 = VAR36;
            goto VAR30;
        }
        VAR16 = VAR8->VAR46;
    }
    VAR23 = FUN15(VAR2, VAR8->VAR47);
    if (VAR23 < 0)
        goto VAR30;
    VAR17 = VAR16;
    for (VAR22 = 0; VAR22 < VAR19; VAR22++)
    {
        VAR15 *VAR48 = VAR8->VAR47->VAR3[0] + VAR8->VAR47->VAR49[0] * (VAR2->VAR43 - VAR8->VAR27[VAR22].VAR39 - 1) + VAR8->VAR27[VAR22].VAR37 * VAR8->VAR41;
        FUN16(VAR48, -1 * VAR8->VAR47->VAR49[0], VAR17, VAR8->VAR27[VAR22].VAR38 * VAR8->VAR41, VAR8->VAR27[VAR22].VAR38 * VAR8->VAR41, VAR8->VAR27[VAR22].VAR40);
        VAR17 += VAR8->VAR27[VAR22].VAR38 * VAR8->VAR41 * VAR8->VAR27[VAR22].VAR40;
    }
    VAR23 = FUN17(VAR14, VAR8->VAR47);
    if (VAR23 < 0)
        goto VAR30;
    if (VAR21 == VAR8->VAR45)
    {
        VAR14->VAR50 = VAR51;
        VAR14->VAR52 = 1;
    }
    else
    {
        VAR14->VAR50 = VAR53;
    }
    if (VAR2->VAR54 == VAR55)
    {
        int VAR24;
        const VAR15 *VAR56 = FUN18(VAR6, VAR57, &VAR24);
        if (VAR56 && VAR24 == VAR57)
        {
            VAR14->VAR58 = 1;
            memcpy(VAR8->VAR56, VAR56, VAR59);
        }
        else if (VAR56)
        {
            FUN4(VAR2, VAR25, "", VAR24);
        }
        memcpy(VAR14->VAR3[1], VAR8->VAR56, VAR59);
    }
    *VAR4 = 1;
VAR30:
    FUN19(VAR18);
    return VAR23;
}