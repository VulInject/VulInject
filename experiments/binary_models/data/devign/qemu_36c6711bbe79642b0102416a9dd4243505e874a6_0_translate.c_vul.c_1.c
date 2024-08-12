static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int16_t VAR6)
{
    const char *VAR7 = "";
    TCGv VAR8, VAR9;
    if (VAR2->VAR10 & VAR11 || VAR4 == 31 || VAR4 == VAR5)
    {
        FUN2(VAR2, VAR12);
        return;
    }
    VAR8 = FUN3();
    VAR9 = FUN3();
    FUN4(VAR2, VAR8, VAR5, VAR6);
    switch (VAR3)
    {
    case VAR13:
        FUN5(VAR2, 0);
        FUN6(VAR9, VAR8, VAR2);
        FUN7(VAR9, VAR4);
        FUN8(VAR9, 4);
        FUN9(VAR2, VAR8, VAR8, VAR9);
        FUN6(VAR9, VAR8, VAR2);
        FUN7(VAR9, VAR4 + 1);
        VAR7 = "";
        break;
    case VAR14:
        FUN5(VAR2, 0);
        FUN10(VAR9, VAR4);
        FUN11(VAR9, VAR8, VAR2);
        FUN8(VAR9, 4);
        FUN9(VAR2, VAR8, VAR8, VAR9);
        FUN10(VAR9, VAR4 + 1);
        FUN11(VAR9, VAR8, VAR2);
        VAR7 = "";
        break;
    case VAR15:
        FUN5(VAR2, 0);
        FUN12(VAR9, VAR8, VAR2);
        FUN7(VAR9, VAR4);
        FUN8(VAR9, 8);
        FUN9(VAR2, VAR8, VAR8, VAR9);
        FUN12(VAR9, VAR8, VAR2);
        FUN7(VAR9, VAR4 + 1);
        VAR7 = "";
        break;
    case VAR16:
        FUN5(VAR2, 0);
        FUN10(VAR9, VAR4);
        FUN13(VAR9, VAR8, VAR2);
        FUN8(VAR9, 8);
        FUN9(VAR2, VAR8, VAR8, VAR9);
        FUN10(VAR9, VAR4 + 1);
        FUN13(VAR9, VAR8, VAR2);
        VAR7 = "";
        break;
    }
    (void)VAR7;
    FUN14("", VAR7, VAR17[VAR4], VAR6, VAR17[VAR5]);
    FUN15(VAR8);
    FUN15(VAR9);
}