static void FUN1(int VAR1)
{
    if (!VAR2)
    {
        signal(VAR1, VAR3);
        FUN2(VAR1);
    }
    VAR2 = 0;
    FUN3(VAR4, 1);
}