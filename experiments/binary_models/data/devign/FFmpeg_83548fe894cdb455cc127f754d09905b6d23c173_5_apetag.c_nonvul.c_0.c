int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    int64_t VAR5, VAR6;
    int VAR7, VAR8 = 0;
    if (!(VAR2->VAR9->VAR10 & VAR11))
        return 0;
    VAR5 = FUN2(VAR2->VAR9);
    FUN3(VAR2->VAR9, "", 8);
    FUN4(VAR2->VAR9, VAR12);
    FUN4(VAR2->VAR9, 0);
    FUN4(VAR2->VAR9, 0);
    FUN4(VAR2->VAR9, VAR13 | VAR14 | VAR15);
    FUN5(VAR2->VAR9, 0, 8);
    while ((VAR4 = FUN6(VAR2->VAR16, "", VAR4, VAR17)))
    {
        int VAR18 = strlen(VAR4->VAR19);
        FUN4(VAR2->VAR9, VAR18);
        FUN4(VAR2->VAR9, 0);
        FUN7(VAR2->VAR9, VAR4->VAR20);
        FUN3(VAR2->VAR9, VAR4->VAR19, VAR18);
        VAR8++;
    }
    VAR7 = FUN2(VAR2->VAR9) - VAR5;
    FUN3(VAR2->VAR9, "", 8);
    FUN4(VAR2->VAR9, VAR12);
    FUN4(VAR2->VAR9, VAR7);
    FUN4(VAR2->VAR9, VAR8);
    FUN4(VAR2->VAR9, VAR13 | VAR14);
    FUN5(VAR2->VAR9, 0, 8);
    VAR6 = FUN2(VAR2->VAR9);
    FUN8(VAR2->VAR9, VAR5 + 12, VAR21);
    FUN4(VAR2->VAR9, VAR7);
    FUN4(VAR2->VAR9, VAR8);
    FUN8(VAR2->VAR9, VAR6, VAR21);
    return 0;
}