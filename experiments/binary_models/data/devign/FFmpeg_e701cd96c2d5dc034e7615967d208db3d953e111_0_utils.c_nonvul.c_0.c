unsigned FUN1(void)
{
    static int VAR1;
    if (VAR1)
        return VAR2;
    FUN2(VAR3 == 81);
    FUN2(VAR4 == 9);
    FUN2(VAR5 == 4);
    FUN2(VAR6 == 7);
    FUN2(VAR7 >= 100);
    FUN2(VAR8 == VAR9);
    if (FUN3(1, 2) != 5)
    {
        FUN4(NULL, VAR10, "");
        FUN5();
    }
    FUN6();
    VAR1 = 1;
    return VAR2;
}