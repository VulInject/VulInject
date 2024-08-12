int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR4->VAR8;
    const VAR9 *VAR10;
    int VAR11, VAR12;
    VAR10 = FUN2(VAR2->VAR13);
    if (!VAR10)
        return VAR14;
    VAR11 = FUN3(VAR2->VAR15);
    if (VAR11 < 0)
    {
        FUN4(VAR2, VAR16, "");
        return VAR14;
    }
    VAR12 = FUN5(VAR2->VAR13);
    if (VAR12 < 0)
    {
        FUN4(VAR2, VAR17, "");
        return FUN6(VAR18);
    }
    VAR7->VAR19 = VAR20;
    VAR7->VAR21 = VAR2->VAR22;
    VAR7->VAR23 = VAR2->VAR24;
    VAR7->VAR25 = VAR10->VAR26[0].VAR27 > 8 ? VAR28 : VAR29;
    VAR7->VAR30 = VAR5;
    return 0;
}