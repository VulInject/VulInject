static void *FUN1(void *VAR1)
{
    int VAR2;
    int VAR3 = 0;
    struct VAR4 *VAR5;
    int VAR6;
    long long VAR7 = 0;
    long long VAR8[VAR9 + 1] = {0};
    volatile int VAR10 = 0;
    FUN2();
    *(struct VAR11 **)VAR1 = &VAR12;
    while (VAR13 == VAR14)
    {
        FUN3(1000);
    }
    while (VAR13 == VAR15)
    {
        FUN4();
        VAR5 = FUN5(&VAR16);
        if (VAR5->VAR17 == 0)
        {
            VAR18++;
        }
        FUN4();
        for (VAR2 = 0; VAR2 < 100; VAR2++)
        {
            VAR10++;
        }
        FUN6();
        VAR6 = VAR5->VAR19;
        FUN6();
        if ((VAR6 > VAR9) || (VAR6 < 0))
        {
            VAR6 = VAR9;
        }
        VAR8[VAR6]++;
        VAR7++;
        if ((++VAR3 % 0x1000) == 0)
        {
            FUN7();
        }
    }
    FUN8(&VAR20);
    VAR21 += VAR7;
    for (VAR2 = 0; VAR2 <= VAR9; VAR2++)
    {
        VAR22[VAR2] += VAR8[VAR2];
    }
    FUN9(&VAR20);
    FUN10();
    return NULL;
}