static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR9 *VAR10;
    VAR11 *VAR8;
    int VAR12 = VAR13;
    int VAR14 = ~0;
    int VAR15;
    int VAR16, VAR17, VAR18;
    for (VAR16 = 0; VAR16 < VAR4->VAR19; VAR16++)
    {
        VAR1 *VAR20 = VAR4->VAR21[VAR16];
        if (!VAR7->VAR22[VAR16] && (VAR18 = FUN2(VAR20)) < 0)
            return VAR18;
        if (VAR16 == 0)
        {
            VAR15 = VAR7->VAR22[0]->VAR23->VAR15;
            for (VAR17 = 1; !VAR16 && VAR17 < VAR4->VAR19; VAR17++)
                VAR4->VAR21[VAR17]->VAR24 = VAR15;
        }
    }
    for (VAR16 = 0; VAR16 < VAR7->VAR25; VAR16++)
    {
        VAR26 *VAR27 = &VAR7->VAR28[VAR16];
        VAR9 *VAR29 = VAR7->VAR22[VAR27->VAR30];
        VAR7->VAR31[VAR16] = VAR29->VAR32[VAR27->VAR33];
        VAR12 = FUN3(VAR12, VAR29->VAR12[0]);
        VAR14 &= VAR29->VAR14;
    }
    VAR10 = FUN4(VAR7->VAR31, VAR12, VAR14, VAR15, VAR2->VAR34, VAR2->VAR35);
    if (!VAR10)
        return FUN5(VAR36);
    VAR10->VAR10->free = VAR37;
    VAR10->VAR38 = VAR7->VAR22[0]->VAR38;
    if (!(VAR8 = FUN6(sizeof(*VAR8))))
        goto VAR39;
    if (!(VAR8->VAR40 = FUN6(sizeof(*VAR8->VAR40) * VAR4->VAR19)))
        goto VAR39;
    for (VAR16 = 0; VAR16 < VAR4->VAR19; VAR16++)
        VAR8->VAR40[VAR16] = VAR7->VAR22[VAR16];
    VAR8->VAR41 = VAR4->VAR19;
    VAR10->VAR10->VAR8 = VAR8;
    FUN7(VAR2, VAR10);
    memset(VAR7->VAR22, 0, sizeof(*VAR7->VAR22) * VAR4->VAR19);
    return 0;
VAR39:
    FUN8(VAR10);
    if (VAR8)
        FUN9(&VAR8->VAR40);
    FUN9(&VAR8);
    return FUN5(VAR36);
}