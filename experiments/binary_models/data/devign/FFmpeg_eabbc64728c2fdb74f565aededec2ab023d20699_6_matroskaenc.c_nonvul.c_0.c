static int FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, VAR5 *VAR6, VAR5 *VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    ebml_master VAR13;
    int VAR14;
    if (!VAR6->VAR15)
    {
        VAR14 = FUN2(VAR11->VAR16, VAR17, FUN3(VAR2->VAR9));
        if (VAR14 < 0)
            return VAR14;
        FUN4(VAR2->VAR9, &VAR11->VAR18, VAR11, VAR6, VAR17, 0);
    }
    VAR9 = VAR11->VAR18;
    *VAR7 = FUN5(VAR9, VAR19, 0);
    VAR13 = FUN5(VAR9, VAR20, 0);
    if (VAR3)
        FUN6(VAR9, VAR3, VAR4);
    FUN7(VAR9, VAR13);
    return 0;
}