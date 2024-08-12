static void FUN1(void)
{
    WorkerTestData VAR1 = {.VAR2 = 0, .VAR3 = -VAR4};
    VAR1.VAR5 = FUN2(VAR6, &VAR1, VAR7, &VAR1);
    VAR8 = 1;
    FUN3(VAR1.VAR3, ==, -VAR4);
    FUN4();
    FUN3(VAR8, ==, 0);
    FUN3(VAR1.VAR2, ==, 1);
    FUN3(VAR1.VAR3, ==, 0);
}