int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6 = &VAR2->VAR7->VAR6;
    int VAR8 = 0;
    VAR9 *VAR10;
    VAR11 *VAR12 = FUN2(sizeof(*VAR10));
    if (!VAR12)
        return FUN3(VAR13);
    VAR10 = (VAR9 *)VAR12->VAR14;
    FUN4(VAR2->VAR15, VAR16, "");
    VAR8 = FUN5(VAR6, 4);
    if (VAR8 >= VAR17)
    {
        FUN4(VAR2->VAR15, VAR18, "", VAR8);
        goto VAR19;
    }
    if (FUN5(VAR6, 2) != 3)
    {
        FUN4(VAR2->VAR15, VAR18, "");
        goto VAR19;
    }
    VAR10->VAR20 = FUN5(VAR6, 6) + 1;
    VAR10->VAR21 = FUN5(VAR6, 3) + 1;
    VAR10->VAR22 = FUN6(VAR6);
    if (FUN5(VAR6, 16) != 0xffff)
    {
        FUN4(VAR2->VAR15, VAR18, "");
        goto VAR19;
    }
    if (VAR10->VAR21 > VAR23)
    {
        FUN4(VAR2->VAR15, VAR18, "", VAR10->VAR21);
        goto VAR19;
    }
    if (FUN7(VAR2, &VAR10->VAR24, VAR10->VAR21) < 0)
        goto VAR19;
    VAR10->VAR25 = FUN6(VAR6);
    VAR3 = VAR10->VAR25 ? 0 : VAR10->VAR21 - 1;
    for (; VAR3 < VAR10->VAR21; VAR3++)
    {
        VAR10->VAR26[VAR3] = FUN8(VAR6) + 1;
        VAR10->VAR27[VAR3] = FUN8(VAR6);
        VAR10->VAR28[VAR3] = FUN8(VAR6) - 1;
        if (VAR10->VAR26[VAR3] > VAR29 || !VAR10->VAR26[VAR3])
        {
            FUN4(VAR2->VAR15, VAR18, "", VAR10->VAR26[VAR3] - 1);
            goto VAR19;
        }
        if (VAR10->VAR27[VAR3] > VAR10->VAR26[VAR3] - 1)
        {
            FUN4(VAR2->VAR15, VAR30, "", VAR10->VAR27[VAR3]);
            if (VAR2->VAR15->VAR31 & VAR32)
                goto VAR19;
        }
    }
    VAR10->VAR33 = FUN5(VAR6, 6);
    VAR10->VAR34 = FUN8(VAR6) + 1;
    if (VAR10->VAR34 < 1 || VAR10->VAR34 > 1024 || (VAR10->VAR34 - 1LL) * (VAR10->VAR33 + 1LL) > FUN9(VAR6))
    {
        FUN4(VAR2->VAR15, VAR18, "");
        goto VAR19;
    }
    for (VAR3 = 1; VAR3 < VAR10->VAR34; VAR3++)
        for (VAR4 = 0; VAR4 <= VAR10->VAR33; VAR4++)
            FUN10(VAR6, 1);
    VAR10->VAR35 = FUN6(VAR6);
    if (VAR10->VAR35)
    {
        VAR10->VAR36 = FUN11(VAR6, 32);
        VAR10->VAR37 = FUN11(VAR6, 32);
        VAR10->VAR38 = FUN6(VAR6);
        if (VAR10->VAR38)
            VAR10->VAR39 = FUN8(VAR6) + 1;
        VAR10->VAR40 = FUN8(VAR6);
        if (VAR10->VAR40 > (unsigned)VAR10->VAR34)
        {
            FUN4(VAR2->VAR15, VAR18, "", VAR10->VAR40);
            goto VAR19;
        }
        for (VAR3 = 0; VAR3 < VAR10->VAR40; VAR3++)
        {
            int VAR41 = 1;
            FUN8(VAR6);
            if (VAR3)
                VAR41 = FUN6(VAR6);
            FUN12(VAR2, VAR41, VAR10->VAR21);
        }
    }
    FUN6(VAR6);
    if (FUN9(VAR6) < 0)
    {
        FUN4(VAR2->VAR15, VAR18, "", -FUN9(VAR6));
        goto VAR19;
    }
    if (VAR2->VAR42[VAR8] && !memcmp(VAR2->VAR42[VAR8]->VAR14, VAR12->VAR14, VAR12->VAR43))
    {
        FUN13(&VAR12);
    }
    else
    {
        FUN14(VAR2, VAR8);
        VAR2->VAR42[VAR8] = VAR12;
    }
    return 0;
VAR19:
    FUN13(&VAR12);
    return VAR44;
}