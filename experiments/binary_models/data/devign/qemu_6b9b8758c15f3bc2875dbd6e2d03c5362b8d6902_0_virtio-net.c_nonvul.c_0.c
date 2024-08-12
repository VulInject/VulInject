static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    int VAR7;
    FUN4(VAR6, 0);
    FUN5(VAR2, "", VAR4);
    if (VAR4->VAR8)
    {
        FUN6(VAR4->VAR8);
        VAR4->VAR8 = NULL;
    }
    if (VAR4->VAR9)
    {
        FUN6(VAR4->VAR9);
        VAR4->VAR9 = NULL;
    }
    FUN6(VAR4->VAR10.VAR11);
    FUN6(VAR4->VAR12);
    for (VAR7 = 0; VAR7 < VAR4->VAR13; VAR7++)
    {
        VAR14 *VAR15 = &VAR4->VAR16[VAR7];
        VAR17 *VAR18 = FUN7(VAR4->VAR19, VAR7);
        FUN8(VAR18);
        if (VAR15->VAR20)
        {
            FUN9(VAR15->VAR20);
            FUN10(VAR15->VAR20);
        }
        else if (VAR15->VAR21)
        {
            FUN11(VAR15->VAR21);
        }
    }
    FUN6(VAR4->VAR16);
    FUN12(VAR4->VAR19);
    FUN13(VAR6);
    return 0;
}