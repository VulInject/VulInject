void FUN1(void)
{
    static int VAR1 = 0;
    if (VAR1 != 0)
        return;
    VAR1 = 1;
    FUN2();
}