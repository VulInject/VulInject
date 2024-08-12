FUN1(void)
{
    VAR1 *VAR2 = NULL;
    VAR1 *VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR5 = FUN2(FUN3(""), "", false, &VAR8);
    VAR7 = FUN4(VAR5);
    FUN5(VAR7, NULL, NULL, 0, &VAR8);
    FUN6(VAR7, "", (VAR9 **)&VAR2, sizeof(*VAR2), &VAR8);
    VAR3 = VAR2;
    FUN7(VAR7, NULL, &VAR3->VAR10, &VAR8);
    FUN8(VAR3->VAR10, ==, 0);
    VAR3 = (VAR1 *)FUN9(VAR7, (VAR9 *)VAR3, sizeof(*VAR2));
    FUN10(VAR3);
    FUN7(VAR7, NULL, &VAR3->VAR10, &VAR8);
    FUN8(VAR3->VAR10, ==, 1);
    VAR3 = (VAR1 *)FUN9(VAR7, (VAR9 *)VAR3, sizeof(*VAR2));
    FUN10(VAR3);
    FUN11(VAR7, &VAR8);
    FUN12(VAR7, (void **)&VAR2);
    FUN13(VAR7, &VAR8);
    FUN14(VAR7, NULL);
    FUN15(VAR2);
    FUN16(VAR7);
    FUN17(VAR5);
}