int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4)
{
    int VAR5;
    VAR5 = VAR2->VAR6 - VAR2->VAR7;
    if (VAR5 == 0)
    {
        FUN2(VAR2);
        VAR5 = VAR2->VAR6 - VAR2->VAR7;
    }
    if (VAR5 > VAR4)
        VAR5 = VAR4;
    memcpy(VAR3, VAR2->VAR7, VAR5);
    VAR2->VAR7 += VAR5;
    return VAR5;