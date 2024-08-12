static int FUN1(int *VAR1)
{
    int VAR2;
    if (*VAR1 == 0)
    {
        return 31;
    }
    VAR2 = 30 - FUN2(FUN3(*VAR1));
    *VAR1 <<= VAR2;
    return VAR2;
}