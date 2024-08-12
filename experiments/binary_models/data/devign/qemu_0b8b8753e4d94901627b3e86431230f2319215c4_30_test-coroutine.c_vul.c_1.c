static void FUN1(void)
{
    VAR1 *VAR2;
    bool VAR3 = false;
    int VAR4 = -1;
    VAR2 = FUN2(VAR5);
    while (!VAR3)
    {
        FUN3(VAR2, &VAR3);
        VAR4++;
    }
    FUN4(VAR4, ==, 5);
}