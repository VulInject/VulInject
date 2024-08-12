static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6 = 0;
    FUN2(!VAR4->VAR7.VAR8[0]);
    if (VAR2->VAR9->VAR10)
    {
        const VAR11 *VAR10 = VAR2->VAR9->VAR10;
        FUN2(!VAR4->VAR12);
        if (VAR10->VAR13)
        {
            VAR4->VAR14 = FUN3(VAR10->VAR13);
            if (!VAR4->VAR14)
                return FUN4(VAR15);
            VAR4->VAR12 = VAR4->VAR14->VAR8;
        }
    }
    VAR4->VAR16.VAR7 = &VAR4->VAR7;
    VAR6 = FUN5(VAR2->VAR9, &VAR4->VAR16, VAR4->VAR17 ? VAR18 : 0);
    if (VAR6 < 0)
        goto VAR19;
    VAR2->VAR20 = VAR4->VAR7.VAR20[0];
    VAR2->VAR21 = VAR4->VAR7.VAR20[1];
    if (!VAR2->VAR22)
    {
        VAR6 = FUN6(VAR2);
        if (VAR6 < 0)
            goto VAR19;
    }
    VAR4->VAR23 = FUN7(VAR2->VAR22);
    VAR4->VAR24 = FUN7(VAR2->VAR25);
    if (!VAR4->VAR23 || !VAR4->VAR24)
        goto VAR19;
    VAR4->VAR26 = (VAR27 *)VAR4->VAR24->VAR8 + 2 * VAR2->VAR28 + 1;
    VAR4->VAR29 = VAR4->VAR23->VAR8 + 2 * VAR2->VAR28 + 1;
    for (VAR5 = 0; VAR5 < 2; VAR5++)
    {
        VAR4->VAR30[VAR5] = FUN7(VAR2->VAR31);
        VAR4->VAR32[VAR5] = FUN7(VAR2->VAR33);
        if (!VAR4->VAR30[VAR5] || !VAR4->VAR32[VAR5])
            goto VAR19;
        VAR4->VAR34[VAR5] = (FUN8(*)[2])VAR4->VAR30[VAR5]->VAR8 + 4;
        VAR4->VAR35[VAR5] = VAR4->VAR32[VAR5]->VAR8;
    }
    return 0;
VAR19:
    FUN9(VAR2, VAR4);
    return (VAR6 < 0) ? VAR6 : FUN4(VAR15);
}