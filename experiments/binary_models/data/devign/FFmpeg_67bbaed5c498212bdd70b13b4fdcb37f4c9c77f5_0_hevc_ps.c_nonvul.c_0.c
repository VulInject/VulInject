int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6 = &VAR2->VAR7.VAR6;
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
    FUN7(&VAR2->VAR7, &VAR10->VAR24, VAR10->VAR21);
    VAR10->VAR25 = FUN6(VAR6);
    VAR3 = VAR10->VAR25 ? 0 : VAR10->VAR21 - 1;
    for (; VAR3 < VAR10->VAR21; VAR3++)
    {
        VAR10->VAR26[VAR3] = FUN8(VAR6) + 1;
        VAR10->VAR27[VAR3] = FUN8(VAR6);
        VAR10->VAR28[VAR3] = FUN8(VAR6) - 1;
        if (VAR10->VAR26[VAR3] > VAR29)
        {
            FUN4(VAR2->VAR15, VAR18, "", VAR10->VAR26[VAR3] - 1);
            goto VAR19;
        }
        if (VAR10->VAR27[VAR3] > VAR10->VAR26[VAR3] - 1)
        {
            FUN4(VAR2->VAR15, VAR18, "", VAR10->VAR27[VAR3]);
            goto VAR19;
        }
    }
    VAR10->VAR30 = FUN5(VAR6, 6);
    VAR10->VAR31 = FUN8(VAR6) + 1;
    for (VAR3 = 1; VAR3 < VAR10->VAR31; VAR3++)
        for (VAR4 = 0; VAR4 <= VAR10->VAR30; VAR4++)
            FUN9(VAR6, 1);
    VAR10->VAR32 = FUN6(VAR6);
    if (VAR10->VAR32)
    {
        VAR10->VAR33 = FUN10(VAR6, 32);
        VAR10->VAR34 = FUN10(VAR6, 32);
        VAR10->VAR35 = FUN6(VAR6);
        if (VAR10->VAR35)
            VAR10->VAR36 = FUN8(VAR6) + 1;
        VAR10->VAR37 = FUN8(VAR6);
        for (VAR3 = 0; VAR3 < VAR10->VAR37; VAR3++)
        {
            int VAR38 = 1;
            FUN8(VAR6);
            if (VAR3)
                VAR38 = FUN6(VAR6);
            FUN11(VAR2, VAR38, VAR10->VAR21);
        }
    }
    FUN6(VAR6);
    FUN12(&VAR2->VAR39[VAR8]);
    VAR2->VAR39[VAR8] = VAR12;
    return 0;
VAR19:
    FUN12(&VAR12);
    return VAR40;
}