static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    ThreadFrame VAR14 = {.VAR15 = VAR3};
    VAR16 *VAR17 = VAR3;
    int VAR18 = 1;
    int VAR19, VAR20;
    FUN2(VAR2, "", VAR9);
VAR21:
    if ((VAR19 = FUN3(VAR12, VAR17, VAR8, VAR9, VAR18)) < 0)
        return VAR19;
    if ((VAR2->VAR22 || VAR2->VAR23) && (VAR12->VAR22 != VAR2->VAR22 || VAR12->VAR23 != VAR2->VAR23))
    {
        FUN4(VAR2, VAR24, "", VAR2->VAR22, VAR2->VAR23, VAR12->VAR22, VAR12->VAR23);
        VAR18 = 1;
    }
    if (VAR2->VAR25 != VAR26 && VAR2->VAR25 != VAR12->VAR25)
    {
        FUN4(VAR2, VAR24, "", FUN5(VAR2->VAR25), FUN5(VAR12->VAR25));
        VAR18 = 1;
    }
    VAR2->VAR25 = VAR12->VAR25;
    VAR19 = FUN6(VAR2, VAR12->VAR22, VAR12->VAR23);
    if (VAR19 < 0)
        return VAR19;
    if (VAR18)
    {
        if ((VAR19 = FUN7(VAR2, &VAR14, 0)) < 0)
            return VAR19;
        VAR17->VAR27 = VAR28;
        VAR17->VAR29 = 1;
    }
    VAR12->VAR9 = VAR9 - VAR12->VAR30;
    VAR12->VAR8 = VAR8 + VAR12->VAR30;
    VAR2->FUN8(VAR2, VAR31, VAR17, NULL, VAR12->VAR32);
    if (VAR18 && VAR17->VAR33)
    {
        VAR8 += VAR12->VAR34->VAR35;
        VAR9 -= VAR12->VAR34->VAR35;
        VAR18 = 0;
        goto VAR21;
    }
    VAR19 = 0;
    for (VAR20 = 0; VAR20 < VAR2->VAR36; VAR20++)
    {
        VAR19 += VAR12->VAR37[VAR20].VAR38;
        VAR12->VAR37[VAR20].VAR38 = 0;
    }
    if (VAR19)
    {
        FUN4(VAR12->VAR2, VAR39, "", VAR19);
        return VAR40;
    }
    *VAR4 = 1;
    return VAR6->VAR10;
}