static int FUN1(int VAR1, int VAR2)
{
    if (!VAR1)
        return 0;
    if (VAR1 == -1)
        return VAR2;
    if (VAR1 < 0)
        VAR1 = ~VAR1;
    return VAR2 - FUN2(VAR1);
}