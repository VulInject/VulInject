static void FUN1(void)
{
    WorkerTestData VAR1[100];
    int VAR2;
    int VAR3;
    FUN2();
    for (VAR3 = 0; VAR3 < 100; VAR3++)
    {
        VAR1[VAR3].VAR4 = 0;
        VAR1[VAR3].VAR5 = -VAR6;
        VAR1[VAR3].VAR7 = FUN3(VAR8, VAR9, &VAR1[VAR3], VAR10, &VAR1[VAR3]);
    }
    VAR11 = 100;
    FUN4(VAR12);
    FUN5(VAR12, false);
    FUN6(VAR11, ==, 100);
    FUN7(1000000);
    FUN6(VAR11, >, 50);
    VAR2 = 0;
    for (VAR3 = 0; VAR3 < 100; VAR3++)
    {
        if (FUN8(&VAR1[VAR3].VAR4, 0, 3) == 0)
        {
            VAR1[VAR3].VAR5 = -VAR13;
            FUN9(VAR1[VAR3].VAR7);
            VAR11--;
            VAR2++;
        }
    }
    FUN6(VAR11, >, 0);
    FUN6(VAR2, <, 100);
    for (VAR3 = 0; VAR3 < 100; VAR3++)
    {
        if (VAR1[VAR3].VAR4 != 3)
        {
            FUN9(VAR1[VAR3].VAR7);
        }
    }
    FUN10();
    FUN6(VAR11, ==, 0);
    for (VAR3 = 0; VAR3 < 100; VAR3++)
    {
        if (VAR1[VAR3].VAR4 == 3)
        {
            FUN6(VAR1[VAR3].VAR5, ==, -VAR13);
            FUN11(VAR1[VAR3].VAR7 != NULL);
        }
        else
        {
            FUN6(VAR1[VAR3].VAR4, ==, 2);
            FUN6(VAR1[VAR3].VAR5, ==, 0);
            FUN11(VAR1[VAR3].VAR7 == NULL);
        }
    }
}