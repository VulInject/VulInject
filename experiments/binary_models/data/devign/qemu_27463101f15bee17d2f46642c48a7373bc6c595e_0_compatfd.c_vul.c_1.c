int FUN1(int *VAR1)
{
    int VAR2;
    VAR2 = FUN2(VAR3, 0);
    if (VAR2 >= 0)
    {
        VAR1[0] = VAR1[1] = VAR2;
        return 0;
    }
    else if (!(VAR2 == -1 && VAR4 == VAR5))
        return VAR2;
    return FUN3(VAR1);
}