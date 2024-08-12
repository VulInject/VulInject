int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    if (!VAR11)
    {
        VAR10 = FUN2(VAR4);
        if (VAR10 < 0)
            return VAR10;
    }
    FUN3(&VAR4->VAR12);
    VAR4->VAR12 = FUN4(VAR11);
    if (!VAR4->VAR12)
        return FUN5(VAR13);
    VAR7 = (VAR6 *)VAR4->VAR12->VAR14;
    VAR9 = VAR7->VAR15;
    VAR7->VAR16 = FUN6(VAR2->VAR17, 32);
    VAR7->VAR18 = FUN6(VAR2->VAR19, 32);
    VAR7->VAR20 = VAR21;
    VAR7->VAR22 = VAR2->VAR23;
    VAR7->VAR24 = 64;
    VAR9->VAR25 = VAR26;
    VAR10 = FUN7(VAR4->VAR12);
    if (VAR10 < 0)
    {
        FUN8(NULL, VAR27, "");
        return VAR10;
    }
    VAR4->VAR28 = VAR29;
    VAR4->VAR30 = VAR31;
    return 0;
}