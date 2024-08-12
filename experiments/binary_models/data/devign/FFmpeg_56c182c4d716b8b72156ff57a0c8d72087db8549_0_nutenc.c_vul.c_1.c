static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8, *VAR9;
    int VAR10, VAR11;
    while (VAR4->VAR12 < 3)
        FUN2(VAR2, VAR7);
    VAR11 = FUN3(&VAR9);
    if (VAR11 >= 0 && VAR4->VAR13)
    {
        FUN4(VAR4->VAR14);
        FUN5(VAR4, VAR9);
        FUN6(VAR4, VAR7, VAR9, 1, VAR15);
    }
    FUN7(VAR4);
    for (VAR10 = 0; VAR10 < VAR2->VAR16; VAR10++)
        FUN8(&VAR4->VAR17[VAR10].VAR18);
    FUN8(&VAR4->VAR17);
    FUN8(&VAR4->VAR19);
    FUN8(&VAR4->VAR20);
    return 0;
}