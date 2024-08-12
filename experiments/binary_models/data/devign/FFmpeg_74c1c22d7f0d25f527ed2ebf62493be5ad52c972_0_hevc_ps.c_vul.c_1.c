int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = NULL;
    int VAR9, VAR10 = 0;
    unsigned int VAR11 = 0;
    ptrdiff_t VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16 = FUN2(sizeof(*VAR16));
    if (!VAR16)
        return FUN3(VAR17);
    VAR14 = FUN4((VAR18 *)VAR16, sizeof(*VAR16), VAR19, NULL, 0);
    if (!VAR14)
    {
        FUN5(&VAR16);
        return FUN3(VAR17);
    }
    FUN6(VAR4, VAR20, "");
    VAR12 = VAR2->VAR21 - VAR2->VAR22;
    if (VAR12 > sizeof(VAR16->VAR23))
    {
        FUN6(VAR4, VAR24, ""
                                      "" VAR25 "" VAR26 "",
               VAR12, sizeof(VAR16->VAR23));
        VAR16->VAR27 = sizeof(VAR16->VAR23);
    }
    else
    {
        VAR16->VAR27 = VAR12;
    }
    memcpy(VAR16->VAR23, VAR2->VAR22, VAR16->VAR27);
    VAR16->VAR28 = 1;
    VAR16->VAR29 = 1;
    VAR16->VAR30 = 1;
    VAR16->VAR31 = 1;
    VAR16->VAR32 = 0;
    VAR16->VAR33 = 0;
    VAR16->VAR34 = 0;
    VAR16->VAR35 = 2;
    VAR11 = FUN7(VAR2);
    if (VAR11 >= VAR36)
    {
        FUN6(VAR4, VAR37, "", VAR11);
        VAR10 = VAR38;
        goto VAR39;
    }
    VAR16->VAR40 = FUN7(VAR2);
    if (VAR16->VAR40 >= VAR41)
    {
        FUN6(VAR4, VAR37, "", VAR16->VAR40);
        VAR10 = VAR38;
        goto VAR39;
    }
    if (!VAR6->VAR42[VAR16->VAR40])
    {
        FUN6(VAR4, VAR37, "", VAR16->VAR40);
        VAR10 = VAR38;
        goto VAR39;
    }
    VAR8 = (VAR7 *)VAR6->VAR42[VAR16->VAR40]->VAR23;
    VAR16->VAR43 = FUN8(VAR2);
    VAR16->VAR44 = FUN8(VAR2);
    VAR16->VAR45 = FUN9(VAR2, 3);
    VAR16->VAR46 = FUN8(VAR2);
    VAR16->VAR47 = FUN8(VAR2);
    VAR16->VAR48 = FUN7(VAR2) + 1;
    VAR16->VAR49 = FUN7(VAR2) + 1;
    VAR16->VAR50 = FUN10(VAR2);
    VAR16->VAR51 = FUN8(VAR2);
    VAR16->VAR52 = FUN8(VAR2);
    VAR16->VAR53 = FUN8(VAR2);
    VAR16->VAR54 = 0;
    if (VAR16->VAR53)
        VAR16->VAR54 = FUN7(VAR2);
    if (VAR16->VAR54 < 0 || VAR16->VAR54 > VAR8->VAR55)
    {
        FUN6(VAR4, VAR37, "", VAR16->VAR54);
        VAR10 = VAR38;
        goto VAR39;
    }
    VAR16->VAR56 = FUN10(VAR2);
    if (VAR16->VAR56 < -12 || VAR16->VAR56 > 12)
    {
        FUN6(VAR4, VAR37, "", VAR16->VAR56);
        VAR10 = VAR38;
        goto VAR39;
    }
    VAR16->VAR57 = FUN10(VAR2);
    if (VAR16->VAR57 < -12 || VAR16->VAR57 > 12)
    {
        FUN6(VAR4, VAR37, "", VAR16->VAR57);
        VAR10 = VAR38;
        goto VAR39;
    }
    VAR16->VAR58 = FUN8(VAR2);
    VAR16->VAR59 = FUN8(VAR2);
    VAR16->VAR60 = FUN8(VAR2);
    VAR16->VAR61 = FUN8(VAR2);
    VAR16->VAR62 = FUN8(VAR2);
    VAR16->VAR63 = FUN8(VAR2);
    if (VAR16->VAR62)
    {
        VAR16->VAR29 = FUN7(VAR2) + 1;
        VAR16->VAR30 = FUN7(VAR2) + 1;
        if (VAR16->VAR29 <= 0 || VAR16->VAR29 >= VAR8->VAR64)
        {
            FUN6(VAR4, VAR37, "", VAR16->VAR29 - 1);
            VAR10 = VAR38;
            goto VAR39;
        }
        if (VAR16->VAR30 <= 0 || VAR16->VAR30 >= VAR8->VAR65)
        {
            FUN6(VAR4, VAR37, "", VAR16->VAR30 - 1);
            VAR10 = VAR38;
            goto VAR39;
        }
        VAR16->VAR66 = FUN11(VAR16->VAR29, sizeof(*VAR16->VAR66));
        VAR16->VAR67 = FUN11(VAR16->VAR30, sizeof(*VAR16->VAR67));
        if (!VAR16->VAR66 || !VAR16->VAR67)
        {
            VAR10 = FUN3(VAR17);
            goto VAR39;
        }
        VAR16->VAR31 = FUN8(VAR2);
        if (!VAR16->VAR31)
        {
            uint64_t VAR68 = 0;
            for (VAR9 = 0; VAR9 < VAR16->VAR29 - 1; VAR9++)
            {
                VAR16->VAR66[VAR9] = FUN7(VAR2) + 1;
                VAR68 += VAR16->VAR66[VAR9];
            }
            if (VAR68 >= VAR8->VAR69)
            {
                FUN6(VAR4, VAR37, "");
                VAR10 = VAR38;
                goto VAR39;
            }
            VAR16->VAR66[VAR16->VAR29 - 1] = VAR8->VAR69 - VAR68;
            VAR68 = 0;
            for (VAR9 = 0; VAR9 < VAR16->VAR30 - 1; VAR9++)
            {
                VAR16->VAR67[VAR9] = FUN7(VAR2) + 1;
                VAR68 += VAR16->VAR67[VAR9];
            }
            if (VAR68 >= VAR8->VAR70)
            {
                FUN6(VAR4, VAR37, "");
                VAR10 = VAR38;
                goto VAR39;
            }
            VAR16->VAR67[VAR16->VAR30 - 1] = VAR8->VAR70 - VAR68;
        }
        VAR16->VAR28 = FUN8(VAR2);
    }
    VAR16->VAR71 = FUN8(VAR2);
    VAR16->VAR72 = FUN8(VAR2);
    if (VAR16->VAR72)
    {
        VAR16->VAR73 = FUN8(VAR2);
        VAR16->VAR32 = FUN8(VAR2);
        if (!VAR16->VAR32)
        {
            int VAR74 = FUN10(VAR2);
            int VAR75 = FUN10(VAR2);
            if (VAR74 < -6 || VAR74 > 6)
            {
                FUN6(VAR4, VAR37, "", VAR74);
                VAR10 = VAR38;
                goto VAR39;
            }
            if (VAR75 < -6 || VAR75 > 6)
            {
                FUN6(VAR4, VAR37, "", VAR75);
                VAR10 = VAR38;
                goto VAR39;
            }
            VAR16->VAR33 = 2 * VAR74;
            VAR16->VAR34 = 2 * VAR75;
        }
    }
    VAR16->VAR76 = FUN8(VAR2);
    if (VAR16->VAR76)
    {
        FUN12(&VAR16->VAR77);
        VAR10 = FUN13(VAR2, VAR4, &VAR16->VAR77, VAR8);
        if (VAR10 < 0)
            goto VAR39;
    }
    VAR16->VAR78 = FUN8(VAR2);
    VAR16->VAR79 = FUN7(VAR2) + 2;
    if (VAR16->VAR79 > VAR8->VAR80)
    {
        FUN6(VAR4, VAR37, "", VAR16->VAR79 - 2);
        VAR10 = VAR38;
        goto VAR39;
    }
    VAR16->VAR81 = FUN8(VAR2);
    if (FUN8(VAR2))
    {
        int VAR82 = FUN8(VAR2);
        FUN9(VAR2, 7);
        if (VAR8->VAR83.VAR84.VAR85 == VAR86 && VAR82)
        {
            if ((VAR10 = FUN14(VAR2, VAR4, VAR16, VAR8)) < 0)
                goto VAR39;
        }
    }
    VAR10 = FUN15(VAR4, VAR2, VAR16, VAR8);
    if (VAR10 < 0)
        goto VAR39;
    if (FUN16(VAR2) < 0)
    {
        FUN6(VAR4, VAR37, "", -FUN16(VAR2));
        goto VAR39;
    }
    FUN17(VAR6, VAR11);
    VAR6->VAR87[VAR11] = VAR14;
    return 0;
VAR39:
    FUN18(&VAR14);
    return VAR10;
}