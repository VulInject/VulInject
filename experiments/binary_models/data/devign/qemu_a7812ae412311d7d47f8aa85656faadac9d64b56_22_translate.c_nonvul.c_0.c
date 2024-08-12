static unsigned int FUN1(VAR1 *VAR2)
{
    TCGv VAR3;
    int VAR4;
    VAR4 = VAR5[VAR2->VAR6];
    FUN2(fprintf(VAR7, "", FUN3(VAR4), VAR2->VAR6, VAR2->VAR8, VAR2->VAR9 ? "" : ""));
    if (VAR2->VAR6 == VAR10)
        FUN4(VAR2);
    VAR3 = FUN5();
    FUN6(VAR3, VAR2->VAR6);
    FUN7(VAR2);
    FUN8(VAR2, VAR11[VAR2->VAR8], VAR3, VAR4);
    FUN9(VAR3);
    FUN10(VAR2, 0);
    if (VAR2->VAR9)
        FUN11(VAR11[VAR2->VAR8], VAR11[VAR2->VAR8], VAR4);
    return 2;
}