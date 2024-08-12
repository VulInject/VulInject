static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR5[VAR2->VAR6]->VAR7;
    int VAR8, VAR9, VAR10;
    VAR9 = VAR2->VAR11->VAR12;
    VAR10 = VAR2->VAR11->VAR13;
    if (!(VAR9 && VAR10))
    {
        for (VAR8 = 0; VAR8 < VAR4->VAR14; VAR8++)
        {
            if (VAR4->VAR15[VAR8]->VAR16->VAR17 == VAR18)
            {
                VAR9 = FUN2(VAR9, VAR4->VAR15[VAR8]->VAR16->VAR12);
                VAR10 = FUN2(VAR10, VAR4->VAR15[VAR8]->VAR16->VAR13);
            }
        }
        if (!(VAR9 && VAR10))
        {
            VAR9 = FUN2(VAR9, 720);
            VAR10 = FUN2(VAR10, 576);
        }
        FUN3(VAR4, VAR19, "", VAR9, VAR10);
    }
    VAR2->VAR20.VAR9 = VAR2->VAR21 = VAR9;
    VAR2->VAR20.VAR10 = VAR2->VAR22 = VAR10;
    VAR2->VAR23 = VAR2->VAR11->VAR24 = VAR25;
    VAR2->VAR20.VAR26 = FUN4();
    if (!VAR2->VAR20.VAR26)
        return FUN5(VAR27);
    VAR2->VAR20.VAR28 = VAR29;
    return 0;
}