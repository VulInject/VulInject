static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    TestStruct VAR4 = {.VAR5 = 42, .VAR6 = false, .VAR7 = (char *)""};
    VAR8 *VAR9 = &VAR4;
    VAR10 *VAR11;
    FUN2(VAR2->VAR12, NULL, &VAR9, &VAR13);
    VAR11 = FUN3(FUN4(VAR2));
    FUN5(VAR11);
    FUN6(FUN7(VAR11), ==, 3);
    FUN6(FUN8(VAR11, ""), ==, 42);
    FUN6(FUN9(VAR11, ""), ==, false);
    FUN10(FUN11(VAR11, ""), ==, "");
}