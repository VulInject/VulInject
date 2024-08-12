static void FUN1(void)
{
    int VAR1;
    struct
    {
        const char *VAR2;
        int64_t VAR3;
        int VAR4;
    } VAR5[] = {
        {"", 0},
        {"", 1234},
        {"", 1},
        {"", -32},
        {"", 0, .VAR4 = 1},
        {},
    };
    for (VAR1 = 0; VAR5[VAR1].VAR2; VAR1++)
    {
        VAR6 *VAR7;
        VAR7 = FUN2(FUN3(VAR5[VAR1].VAR2, NULL));
        FUN4(VAR7);
        FUN4(FUN5(VAR7) == VAR5[VAR1].VAR3);
        if (VAR5[VAR1].VAR4 == 0)
        {
            VAR8 *VAR9;
            VAR9 = FUN6(FUN7(VAR7));
            FUN4(strcmp(FUN8(VAR9), VAR5[VAR1].VAR2) == 0);
            FUN9(VAR9);
        }
        FUN9(VAR7);
    }
}