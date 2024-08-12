static unsigned int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 2;
    int VAR6;
    if (FUN2(FUN3(VAR7 | VAR8)))
    {
        FUN4(VAR4->VAR9);
    }
    VAR4->VAR10 = FUN5(VAR2, VAR4, VAR4->VAR9, 2, 0);
    VAR4->VAR11 = FUN6(VAR4->VAR10, 4, 11);
    VAR4->VAR12 = FUN6(VAR4->VAR10, 0, 3);
    VAR4->VAR13 = FUN6(VAR4->VAR10, 12, 15);
    VAR4->VAR14 = FUN6(VAR4->VAR10, 4, 4);
    VAR4->VAR15 = FUN6(VAR4->VAR10, 4, 5);
    VAR4->VAR16 = FUN6(VAR4->VAR10, 10, 10);
    for (VAR6 = 0; VAR6 < FUN7(VAR17); VAR6++)
    {
        if ((VAR4->VAR11 & VAR17[VAR6].VAR18) == VAR17[VAR6].VAR19)
        {
            VAR5 = VAR17[VAR6].FUN8(VAR2, VAR4);
            break;
        }
    }
    if (VAR4->VAR20 & VAR21)
    {
        VAR22 *VAR23 = FUN9();
        FUN10(VAR24, VAR25[VAR26], VAR4->VAR9, VAR23);
        FUN11(VAR4);
        FUN12(VAR27, FUN13(3));
        FUN14(VAR28, VAR4->VAR9 + VAR5);
        FUN14(VAR25[VAR26], VAR4->VAR9 + VAR5);
        FUN15(VAR29);
        FUN16(VAR23);
    }
    return VAR5;
}