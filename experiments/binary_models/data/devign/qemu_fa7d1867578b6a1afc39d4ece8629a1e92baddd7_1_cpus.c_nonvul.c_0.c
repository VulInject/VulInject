int FUN1(void)
{
    int VAR1;
    VAR1 = FUN2();
    if (VAR1)
    {
        return VAR1;
    }
    FUN3();
    return FUN4();
}