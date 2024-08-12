static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    ThreadFrame VAR10 = {.VAR11 = VAR3};
    VAR12 *VAR13 = VAR3;
    int VAR14, VAR15;
    VAR8->VAR2 = VAR2;
    VAR8->VAR16 = VAR8->VAR17 = VAR6->VAR3;
    VAR8->VAR18 = VAR8->VAR17 + VAR6->VAR19;
    VAR8->VAR20 = 0;
    VAR8->VAR21 = VAR8->VAR22;
    if (VAR8->VAR18 - VAR8->VAR16 < 2)
        return FUN2(VAR23);
    if ((FUN3(VAR8->VAR16) == 12) && (FUN3(VAR8->VAR16 + 4) == VAR24) && (FUN3(VAR8->VAR16 + 8) == VAR25))
    {
        if (!FUN4(VAR8))
        {
            FUN5(VAR2, VAR26, "");
            return -1;
        }
    }
    if (FUN6(&VAR8->VAR16) != VAR27)
    {
        FUN5(VAR2, VAR26, "");
        return -1;
    }
    if (VAR15 = FUN7(VAR8))
        goto VAR28;
    if ((VAR15 = FUN8(VAR2, &VAR10, 0)) < 0)
    {
        FUN5(VAR2, VAR26, "");
        goto VAR28;
    }
    VAR13->VAR29 = VAR30;
    VAR13->VAR31 = 1;
    if (VAR15 = FUN9(VAR8))
        goto VAR28;
    for (VAR14 = 0; VAR14 < VAR8->VAR32 * VAR8->VAR33; VAR14++)
        if (VAR15 = FUN10(VAR8, VAR8->VAR34 + VAR14, VAR13))
            goto VAR28;
    *VAR4 = 1;
VAR28:
    FUN11(VAR8);
    return VAR15 ? VAR15 : VAR8->VAR16 - VAR8->VAR17;
}