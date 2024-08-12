static void FUN1(void)
{
    int VAR1;
    struct
    {
        const char *VAR2;
        double VAR3;
        int VAR4;
    } VAR5[] = {
        {"", 32.43},
        {"", 0.222},
        {"", -32.12313},
        {"", -32.20e-10, .VAR4 = 1},
        {},
    };
    for (VAR1 = 0; VAR5[VAR1].VAR2; VAR1++)
    {
        VAR6 *VAR7;
        VAR8 *VAR9;
        VAR7 = FUN2(VAR5[VAR1].VAR2);
        VAR9 = FUN3(VAR7);
        FUN4(VAR9);
        FUN4(FUN5(VAR9) == VAR5[VAR1].VAR3);
        if (VAR5[VAR1].VAR4 == 0)
        {
            VAR10 *VAR11;
            VAR11 = FUN6(VAR7);
            FUN4(strcmp(FUN7(VAR11), VAR5[VAR1].VAR2) == 0);
            FUN8(VAR11);
        }
        FUN8(VAR9);
    }
}