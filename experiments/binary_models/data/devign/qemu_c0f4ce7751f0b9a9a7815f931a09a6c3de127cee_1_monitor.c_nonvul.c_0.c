static void FUN1(void)
{
    int VAR1 = 0;
    FUN2(VAR2, &VAR1);
    if (!VAR1)
        FUN3();
}