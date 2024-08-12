int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if ((VAR5 = FUN2(VAR2, VAR4)) < 0)
        return VAR5;
    FUN3(VAR2);
    FUN4(VAR2);
    return 0;
}