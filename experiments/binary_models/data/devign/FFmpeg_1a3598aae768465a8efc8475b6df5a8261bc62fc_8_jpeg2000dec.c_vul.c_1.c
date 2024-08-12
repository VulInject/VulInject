static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = 0;
    if (VAR2->VAR5 - VAR2->VAR6 < ((VAR3 - VAR2->VAR7) >> 8))
        return VAR8;
    while (--VAR3 >= 0)
    {
        VAR4 <<= 1;
        if (VAR2->VAR7 == 0)
        {
            VAR2->VAR7 = 7 + (*VAR2->VAR6 != 0xff);
            VAR2->VAR6++;
        }
        VAR2->VAR7--;
        VAR4 |= (*VAR2->VAR6 >> VAR2->VAR7) & 1;
    }
    return VAR4;
}