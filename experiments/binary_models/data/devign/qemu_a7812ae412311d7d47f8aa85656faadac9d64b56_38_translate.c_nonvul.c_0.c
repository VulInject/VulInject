static unsigned int FUN1(VAR1 *VAR2)
{
    TCGv VAR3[2];
    int VAR4 = FUN2(VAR2);
    int VAR5;
    FUN3(fprintf(VAR6, "", FUN4(VAR4), VAR2->VAR7, VAR2->VAR8 ? "" : "", VAR2->VAR9));
    VAR3[0] = FUN5();
    VAR3[1] = FUN5();
    VAR5 = FUN6(VAR2, 0, VAR4, VAR3[0], VAR3[1]);
    FUN7(VAR2, VAR10);
    FUN8(VAR2, VAR11, VAR12[VAR2->VAR9], VAR3[0], VAR3[1], 4);
    FUN9(VAR2, VAR4);
    FUN10(VAR3[0]);
    FUN10(VAR3[1]);
    return VAR5;
}