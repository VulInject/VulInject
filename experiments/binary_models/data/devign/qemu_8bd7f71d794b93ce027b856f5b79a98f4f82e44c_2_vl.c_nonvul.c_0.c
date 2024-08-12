static int FUN1(void)
{
    int VAR1 = VAR2;
    if (VAR1 && FUN2(VAR3))
    {
        VAR2 = 0;
        return VAR1;
    }
    return false;
}