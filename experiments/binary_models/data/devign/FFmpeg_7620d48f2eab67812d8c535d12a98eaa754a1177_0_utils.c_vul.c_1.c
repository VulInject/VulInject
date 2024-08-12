int FUN1(void)
{
    int VAR1;
    VAR2 = 1;
    if ((VAR1 = FUN2()) < 0)
        return VAR1;
    FUN3();
    return 0;
}