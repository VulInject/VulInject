static void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR4->VAR10.VAR9.VAR11;
    VAR12 *VAR13 = FUN2(VAR9->VAR14);
    VAR12 *VAR15 = FUN2(VAR9->VAR16);
    VAR17 *VAR18 = FUN3();
    char *VAR19;
    VAR20 *VAR21 = FUN4(VAR2);
    int VAR22;
    VAR22 = FUN5(VAR18, VAR13, VAR15, VAR7);
    FUN6(VAR13);
    FUN6(VAR15);
    if (VAR22 < 0)
    {
        FUN7(FUN8(VAR18));
        return;
    }
    VAR19 = FUN9("", VAR2->VAR23);
    FUN10(FUN11(VAR18), VAR19);
    FUN12(VAR19);
    VAR21->VAR24 = FUN11(VAR18);
    *VAR5 = false;
}