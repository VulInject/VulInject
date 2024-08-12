static void FUN1(void)
{
    WorkerTestData VAR1[100];
    int VAR2;
    for (VAR2 = 0; VAR2 < 100; VAR2++)
    {
        VAR1[VAR2].VAR3 = 0;
        VAR1[VAR2].VAR4 = -VAR5;
        FUN2(VAR6, VAR7, &VAR1[VAR2], VAR8, &VAR1[VAR2]);
    }
    VAR9 = 100;
    while (VAR9 > 0)
    {
        FUN3(VAR10, true);
    }
    for (VAR2 = 0; VAR2 < 100; VAR2++)
    {
        FUN4(VAR1[VAR2].VAR3, ==, 1);
        FUN4(VAR1[VAR2].VAR4, ==, 0);
    }
}