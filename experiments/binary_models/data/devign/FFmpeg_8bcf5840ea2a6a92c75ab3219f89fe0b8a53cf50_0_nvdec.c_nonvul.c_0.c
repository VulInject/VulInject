int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    VAR9 *VAR10 = (VAR9 *)VAR4->VAR11->VAR12;
    VAR13 *VAR14 = NULL;
    int VAR15;
    VAR6->VAR16 = 0;
    VAR6->VAR17 = 0;
    if (VAR10->VAR18)
        return 0;
    VAR14 = FUN2(sizeof(*VAR14));
    if (!VAR14)
        return FUN3(VAR19);
    VAR14->VAR20 = FUN4(VAR6->VAR20);
    if (!VAR14->VAR20)
    {
        VAR15 = FUN3(VAR19);
        goto VAR21;
    }
    VAR14->VAR22 = FUN5(VAR6->VAR23);
    if (!VAR14->VAR22)
    {
        FUN6(VAR2, VAR24, "");
        VAR15 = FUN3(VAR19);
        goto VAR21;
    }
    VAR14->VAR25 = *(unsigned int *)VAR14->VAR22->VAR12;
    VAR10->VAR18 = VAR14;
    VAR10->VAR26 = VAR27;
    VAR10->VAR28 = VAR29;
    return 0;
VAR21:
    FUN7(VAR14);
    return VAR15;
}