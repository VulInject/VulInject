static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5 = 0;
    if (VAR3 & 1)
    {
        VAR5 |= VAR6;
    }
    if (VAR3 & 2)
    {
        VAR5 |= VAR7;
    }
    if (!VAR4)
    {
        VAR5 |= VAR8;
    }
    return VAR5;
}