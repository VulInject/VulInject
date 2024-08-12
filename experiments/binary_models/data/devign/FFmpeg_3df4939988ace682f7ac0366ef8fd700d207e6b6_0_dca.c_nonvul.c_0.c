int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    GetBitContext VAR6;
    int VAR7;
    VAR7 = FUN2(&VAR6, VAR4, VAR5);
    if (VAR7 < 0)
        return VAR7;
    if (FUN3(VAR2, &VAR6) < 0)
        return VAR8;
    return 0;
}