static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, unsigned int VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    ebml_master VAR12, VAR13;
    VAR14 *VAR15 = NULL;
    int VAR16;
    if (!VAR8->VAR17)
    {
        VAR16 = FUN2(VAR10->VAR18, VAR19, FUN3(VAR2->VAR20));
        if (VAR16 < 0)
            return VAR16;
        *VAR8 = FUN4(VAR2->VAR20, VAR19, 0);
    }
    VAR12 = FUN4(VAR2->VAR20, VAR21, 0);
    VAR13 = FUN4(VAR2->VAR20, VAR22, 0);
    if (VAR5)
        FUN5(VAR2->VAR20, VAR5, VAR6);
    FUN6(VAR2->VAR20, VAR13);
    while ((VAR15 = FUN7(VAR4, "", VAR15, VAR23)))
    {
        if (FUN8(VAR15->VAR24, "") && FUN8(VAR15->VAR24, ""))
        {
            VAR16 = FUN9(VAR2->VAR20, VAR15);
            if (VAR16 < 0)
                return VAR16;
        }
    }
    FUN6(VAR2->VAR20, VAR12);
    return 0;
}