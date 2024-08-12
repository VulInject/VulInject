FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7 = &VAR4->VAR8.VAR7;
    VAR2->VAR9 = VAR7->VAR9;
    FUN2("", VAR7->VAR9);
    for (VAR5 = 0; VAR5 < VAR2->VAR9; VAR5++)
    {
        void *VAR10;
        VAR11 *VAR12 = &VAR7->VAR13[VAR5];
        VAR14 *VAR15 = &VAR2->VAR13[VAR5];
        FUN2("", VAR5);
        FUN2("" VAR16 "", VAR12->VAR17);
        FUN2("" VAR16 "", VAR12->VAR18);
        FUN2("" VAR16 "", VAR12->VAR19);
        FUN2("" VAR16 "", VAR12->VAR20);
        VAR15->VAR21 = VAR12->VAR17;
        VAR15->VAR22 = VAR12->VAR18;
        VAR15->VAR23 = VAR12->VAR19;
        VAR15->VAR20 = VAR12->VAR20;
        VAR10 = FUN3(0, VAR15->VAR22 + VAR15->VAR20, VAR24 | VAR25, VAR26, VAR4->VAR27[VAR5], 0);
        if (VAR10 == VAR28)
        {
            FUN4("");
        }
        VAR15->VAR10 = (VAR29)VAR10;
        FUN2("" VAR16 "", VAR15->VAR10);
    }
    return 0;
}