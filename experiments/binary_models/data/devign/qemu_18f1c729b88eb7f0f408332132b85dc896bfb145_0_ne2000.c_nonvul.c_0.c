static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5, VAR2);
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR9 = VAR4->VAR5.VAR10;
    VAR9[VAR11] = 1;
    FUN3(&VAR4->VAR5, 0, 0x100, VAR12, VAR13);
    VAR7 = &VAR4->VAR14;
    VAR7->VAR15 = VAR4->VAR5.VAR15[0];
    FUN4(&VAR7->VAR16.VAR17);
    FUN5(VAR7);
    VAR7->VAR18 = FUN6(&VAR19, &VAR7->VAR16, VAR2->VAR20.VAR21->VAR22, VAR2->VAR20.VAR23, VAR7);
    FUN7(&VAR7->VAR18->VAR24, VAR7->VAR16.VAR17.VAR25);
    if (!VAR2->VAR20.VAR26)
    {
        static int VAR27 = 0;
        if (!VAR27)
        {
            FUN8("", -1);
            VAR27 = 1;
        }
    }
    FUN9(VAR7->VAR16.VAR28, &VAR2->VAR20, "");
    return 0;
}