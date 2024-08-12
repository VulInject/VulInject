static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9, *VAR10;
    int VAR11, VAR12, VAR13;
    VAR4->VAR14 = 0;
    VAR4->VAR15 = 0;
    VAR10 = NULL;
    for (VAR11 = 0; VAR11 < VAR2->VAR16; VAR11++)
    {
        VAR9 = VAR2->VAR17[VAR11]->VAR18;
        if (VAR9->VAR19 != VAR20)
            VAR10 = VAR9;
    }
    if (!VAR10)
    {
        FUN2(VAR4);
        return -1;
    }
    else
    {
        VAR12 = VAR10->VAR12;
        VAR13 = VAR10->VAR13;
    }
    if (VAR10->VAR21 != VAR22)
    {
        FUN3(VAR2, VAR23, "");
        return FUN4(VAR24);
    }
    if (VAR2->VAR25)
        VAR4->VAR26 = VAR2->VAR25;
    FUN5(VAR7, VAR12, VAR13, VAR4->VAR26, NULL);
    FUN6(VAR2->VAR7);
    return 0;
}