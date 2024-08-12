static unsigned int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR2);
    FUN3(fprintf(VAR4, "", FUN4(VAR3), VAR2->VAR5, VAR2->VAR6));
    FUN5(VAR2, VAR7);
    if (VAR3 == 4)
    {
        FUN6(VAR2, VAR2->VAR5, VAR2->VAR6, VAR3, 0, VAR8[VAR2->VAR6]);
        FUN5(VAR2, VAR7);
        FUN7(VAR2, VAR9, 4);
        FUN8(VAR2);
        FUN9(VAR2, VAR8[VAR2->VAR6]);
    }
    else
    {
        TCGv VAR10;
        VAR10 = FUN10();
        FUN6(VAR2, VAR2->VAR5, VAR2->VAR6, VAR3, 0, VAR10);
        FUN11(VAR2, VAR9, VAR8[VAR2->VAR6], VAR8[VAR2->VAR6], VAR10, VAR3);
        FUN12(VAR10);
    }
    return 2;
}