static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    if (VAR2->VAR5 < VAR2->VAR6)
    {
        VAR4 = VAR2->VAR6;
        VAR2->VAR6 += VAR3 + 15;
    }
    else
    {
        VAR4 = 0;
        VAR2->VAR6 = VAR3 + 15;
        VAR2->VAR5 = 0;
    }
    return VAR4;
}