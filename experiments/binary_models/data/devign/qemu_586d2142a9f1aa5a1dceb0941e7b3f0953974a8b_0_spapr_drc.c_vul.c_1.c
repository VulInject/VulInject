static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR9 *VAR10;
    char VAR11[256];
    VAR12 *VAR13;
    VAR3 *VAR14 = NULL;
    FUN4("", VAR8->FUN5(VAR6));
    VAR10 = FUN6(FUN7(), VAR15);
    snprintf(VAR11, sizeof(VAR11), "", VAR8->FUN5(VAR6));
    VAR13 = FUN8(FUN9(VAR6));
    FUN4("", VAR13);
    FUN10(VAR10, VAR11, VAR6->VAR16, VAR13, &VAR14);
    if (VAR14)
    {
        FUN11("", FUN12(VAR14));
        FUN13(VAR14);
        FUN14(FUN9(VAR6));
    }
    FUN4("");