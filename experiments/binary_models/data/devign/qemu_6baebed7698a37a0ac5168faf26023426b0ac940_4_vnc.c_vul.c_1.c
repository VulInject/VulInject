static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    int VAR5;
    VAR2->VAR6 = FUN2(VAR2->VAR6, FUN3(VAR4) * FUN4(VAR4));
    if (VAR2->VAR6 == NULL)
    {
        fprintf(VAR7, "");
        FUN5(1);
    }
    if (FUN6(VAR4) != VAR2->VAR8.VAR9.VAR10)
        FUN7(VAR4);
    FUN8(VAR2);
    VAR5 = FUN9(VAR4) != VAR2->VAR8.VAR11 || FUN4(VAR4) != VAR2->VAR8.VAR12;
    VAR2->VAR8 = *(VAR4->VAR13);
    if (VAR5)
    {
        if (VAR2->VAR14 != -1 && FUN10(VAR2, VAR15))
        {
            FUN11(VAR2, 0);
            FUN11(VAR2, 0);
            FUN12(VAR2, 1);
            FUN13(VAR2, 0, 0, FUN9(VAR4), FUN4(VAR4), VAR16);
            FUN14(VAR2);
        }
    }
    memset(VAR2->VAR17, 0xFF, sizeof(VAR2->VAR17));
    memset(VAR2->VAR6, 42, FUN3(VAR2->VAR4) * FUN4(VAR2->VAR4));
}