int FUN1(void)
{
    int VAR1;
    if ((VAR1 = FUN2()) < 0)
        return VAR1;
    if ((VAR1 = FUN3()) < 0)
        return VAR1;
    return 0;
}