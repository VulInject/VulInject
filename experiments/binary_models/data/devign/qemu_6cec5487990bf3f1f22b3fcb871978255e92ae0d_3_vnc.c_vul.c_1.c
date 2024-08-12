static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = VAR2->VAR6;
    VAR5->VAR7 = FUN2(VAR5->VAR7, FUN3(VAR2) * FUN4(VAR2));
    if (VAR5->VAR7 == NULL)
    {
        fprintf(VAR8, "");
        FUN5(1);
    }
    if (FUN6(VAR2) != VAR5->VAR9)
        FUN7(VAR2);
    FUN8(VAR2);
    VAR3 = FUN9(VAR2) != VAR5->VAR10 || FUN4(VAR2) != VAR5->VAR11;
    if (VAR3)
    {
        VAR5->VAR10 = FUN9(VAR2);
        VAR5->VAR11 = FUN4(VAR2);
        if (VAR5->VAR12 != -1 && VAR5->VAR13)
        {
            FUN10(VAR5, 0);
            FUN10(VAR5, 0);
            FUN11(VAR5, 1);
            FUN12(VAR5, 0, 0, FUN9(VAR2), FUN4(VAR2), -223);
            FUN13(VAR5);
        }
    }
    memset(VAR5->VAR14, 0xFF, sizeof(VAR5->VAR14));
    memset(VAR5->VAR7, 42, FUN3(VAR5->VAR2) * FUN4(VAR5->VAR2));
}