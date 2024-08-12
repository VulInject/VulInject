static unsigned int FUN1(VAR1 *VAR2)
{
    TCGv_i64 VAR3[16];
    TCGv VAR4;
    TCGv VAR5;
    int VAR6;
    int VAR7 = VAR2->VAR8 + 1;
    FUN2(fprintf(VAR9, "", VAR2->VAR10, VAR2->VAR11 ? "" : "", VAR2->VAR8));
    VAR5 = FUN3();
    FUN4(VAR2);
    for (VAR6 = 0; VAR6 < (VAR7 >> 1); VAR6++)
    {
        VAR3[VAR6] = FUN5();
        FUN6(VAR5, VAR12[VAR2->VAR10], VAR6 * 8);
        FUN7(VAR2, VAR3[VAR6], VAR5);
    }
    if (VAR7 & 1)
    {
        VAR4 = FUN8();
        FUN6(VAR5, VAR12[VAR2->VAR10], VAR6 * 8);
        FUN9(VAR2, VAR4, VAR5, 4, 0);
    }
    FUN10(VAR5);
    for (VAR6 = 0; VAR6 < (VAR7 >> 1); VAR6++)
    {
        FUN11(VAR12[VAR6 * 2], VAR3[VAR6]);
        FUN12(VAR3[VAR6], VAR3[VAR6], 32);
        FUN11(VAR12[VAR6 * 2 + 1], VAR3[VAR6]);
        FUN13(VAR3[VAR6]);
    }
    if (VAR7 & 1)
    {
        FUN14(VAR12[VAR2->VAR8], VAR4);
        FUN10(VAR4);
    }
    if (VAR2->VAR11)
        FUN6(VAR12[VAR2->VAR10], VAR12[VAR2->VAR10], VAR7 * 4);
    FUN15(VAR2, 0);
    return 2;
}