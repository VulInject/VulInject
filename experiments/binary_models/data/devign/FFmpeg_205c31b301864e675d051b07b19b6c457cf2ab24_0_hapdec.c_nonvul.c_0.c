static int FUN1(VAR1 *VAR2, int *VAR3, enum VAR4 *VAR5)
{
    if (FUN2(VAR2) < 4)
        return VAR6;
    *VAR3 = FUN3(VAR2);
    *VAR5 = FUN4(VAR2);
    if (*VAR3 == 0)
    {
        if (FUN2(VAR2) < 4)
            return VAR6;
        *VAR3 = FUN5(VAR2);
    }
    if (*VAR3 > FUN2(VAR2) || *VAR3 < 0)
        return VAR6;
    else
        return 0;
}