void FUN1(void)
{
    if (!VAR1)
    {
        FUN2();
        VAR1 = 1;
        FUN3(1, 0);
        FUN4();
    }
}