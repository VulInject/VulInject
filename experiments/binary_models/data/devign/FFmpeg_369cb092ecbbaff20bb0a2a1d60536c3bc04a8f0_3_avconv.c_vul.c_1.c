static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR1 *VAR8;
    VAR9 *VAR10;
    VAR8 = FUN2(VAR3, VAR5, VAR11);
    VAR7 = VAR8->VAR7;
    VAR10 = VAR7->VAR12;
    VAR10->VAR13 = VAR11;
    if (!VAR8->VAR14)
    {
        char *VAR15 = NULL;
        FUN3(VAR16, VAR17, VAR10->VAR18, VAR5, VAR7);
        FUN3(VAR19, VAR20, VAR15, VAR5, VAR7);
        if (VAR15 && (VAR10->VAR15 = FUN4(VAR15)) == VAR21)
        {
            FUN5(NULL, VAR22, "", VAR15);
            FUN6(1);
        }
        FUN3(VAR23, VAR17, VAR10->VAR24, VAR5, VAR7);
    }
    return VAR8;
}