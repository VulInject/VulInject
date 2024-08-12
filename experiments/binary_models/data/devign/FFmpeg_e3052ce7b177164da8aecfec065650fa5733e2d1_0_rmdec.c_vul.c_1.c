static int FUN1(VAR1 *VAR2, int *VAR3)
{
    int VAR4, VAR5;
    VAR4 = FUN2(VAR2);
    (*VAR3) -= 2;
    if (VAR4 >= 0x4000)
    {
        return VAR4 - 0x4000;
    }
    else
    {
        VAR5 = FUN2(VAR2);
        (*VAR3) -= 2;
        return (VAR4 << 16) | VAR5;
    }
}