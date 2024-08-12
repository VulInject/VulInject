static void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4 = FUN2(VAR5);
    VAR3 *VAR6;
    struct TestTaskData VAR7 = {NULL, NULL, false};
    VAR2 = FUN3(VAR4, VAR8, &VAR7, NULL);
    VAR6 = FUN4(VAR2);
    FUN5(VAR2);
    FUN6(VAR4 == VAR6);
    FUN7(VAR4);
    FUN7(VAR6);
    FUN6(VAR7.VAR9 == VAR4);
    FUN6(VAR7.VAR10 == NULL);
    FUN6(VAR7.VAR11 == false);
}