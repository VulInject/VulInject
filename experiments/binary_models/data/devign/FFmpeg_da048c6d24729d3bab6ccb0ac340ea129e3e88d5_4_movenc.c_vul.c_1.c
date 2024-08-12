static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    if ((VAR3 = FUN2(&VAR5)) < 0)
        return VAR3;
    FUN3(VAR5, VAR7, VAR2);
    return FUN4(VAR5);
}