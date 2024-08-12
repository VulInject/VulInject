static void FUN1(void)
{
    WorkerTestData VAR1 = {.VAR2 = 0};
    FUN2(VAR3, VAR4, &VAR1);
    FUN3();
    FUN4(VAR1.VAR2, ==, 1);
}