static unsigned int FUN1(VAR1 *VAR2)
{
    TCGv VAR3;
    TCGv VAR4;
    int VAR5;
    FUN2(fprintf(VAR6, "", VAR2->VAR7, VAR2->VAR8, VAR2->VAR9 ? "" : ""));
    FUN3(VAR2);
    VAR3 = FUN4();
    VAR4 = FUN4();
    FUN5(VAR3, 4);
    FUN6(VAR4, VAR10[VAR2->VAR8]);
    for (VAR5 = 0; VAR5 <= VAR2->VAR7; VAR5++)
    {
        FUN7(VAR2, VAR4, VAR10[VAR5], 4);
        FUN8(VAR4, VAR4, VAR3);
    }
    if (VAR2->VAR9)
        FUN6(VAR10[VAR2->VAR8], VAR4);
    FUN9(VAR2, 0);
    FUN10(VAR3);
    FUN10(VAR4);
    return 2;
}