static unsigned int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR2);
    int VAR4;
    FUN3(fprintf(VAR5, "", FUN4(VAR3), VAR2->VAR6, VAR2->VAR7 ? "" : "", VAR2->VAR8));
    if (VAR3 == 4)
    {
        VAR4 = FUN5(VAR2, 0, 4, VAR9[VAR2->VAR8]);
        FUN6(VAR2, VAR10);
        FUN7(VAR2, VAR11, 4);
        FUN8(VAR2);
        FUN9(VAR2, VAR9[VAR2->VAR8]);
    }
    else
    {
        TCGv VAR12;
        VAR12 = FUN10();
        VAR4 = FUN5(VAR2, 0, VAR3, VAR12);
        FUN6(VAR2, VAR10);
        FUN11(VAR2, VAR11, VAR9[VAR2->VAR8], VAR9[VAR2->VAR8], VAR12, VAR3);
        FUN12(VAR12);
    }
    FUN13(VAR2, VAR3);
    return VAR4;
}