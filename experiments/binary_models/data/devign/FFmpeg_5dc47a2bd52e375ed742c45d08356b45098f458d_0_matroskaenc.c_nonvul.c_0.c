static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    ebml_master VAR8, VAR9;
    AVRational VAR10 = {1, 1E9};
    int VAR11, VAR12;
    if (!VAR2->VAR13 || VAR4->VAR14)
        return 0;
    VAR12 = FUN2(VAR4->VAR15, VAR16, FUN3(VAR7));
    if (VAR12 < 0)
        return VAR12;
    VAR8 = FUN4(VAR7, VAR16, 0);
    VAR9 = FUN4(VAR7, VAR17, 0);
    FUN5(VAR7, VAR18, 1);
    FUN5(VAR7, VAR19, 0);
    for (VAR11 = 0; VAR11 < VAR2->VAR13; VAR11++)
    {
        ebml_master VAR20, VAR21;
        VAR22 *VAR23 = VAR2->VAR8[VAR11];
        int VAR24 = FUN6(VAR23->VAR25, VAR23->VAR26, VAR10);
        int VAR27 = FUN6(VAR23->VAR28, VAR23->VAR26, VAR10);
        VAR29 *VAR30 = NULL;
        if (VAR24 < 0 || VAR24 > VAR27)
            return VAR31;
        VAR20 = FUN4(VAR7, VAR32, 0);
        FUN5(VAR7, VAR33, VAR23->VAR34);
        FUN5(VAR7, VAR35, VAR24);
        FUN5(VAR7, VAR36, VAR27);
        FUN5(VAR7, VAR37, 0);
        FUN5(VAR7, VAR38, 1);
        if ((VAR30 = FUN7(VAR23->VAR39, "", NULL, 0)))
        {
            VAR21 = FUN4(VAR7, VAR40, 0);
            FUN8(VAR7, VAR41, VAR30->VAR42);
            FUN8(VAR7, VAR43, "");
            FUN9(VAR7, VAR21);
        }
        FUN9(VAR7, VAR20);
    }
    FUN9(VAR7, VAR9);
    FUN9(VAR7, VAR8);
    VAR4->VAR14 = 1;
    return 0;
}