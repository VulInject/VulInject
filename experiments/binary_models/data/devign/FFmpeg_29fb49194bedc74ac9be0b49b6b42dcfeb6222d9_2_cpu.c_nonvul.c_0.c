int FUN1(void)
{
    int VAR1 = VAR2;
    if (VAR1 == -1)
    {
        VAR1 = FUN2();
        VAR2 = VAR1;
    }
    return VAR1;
}