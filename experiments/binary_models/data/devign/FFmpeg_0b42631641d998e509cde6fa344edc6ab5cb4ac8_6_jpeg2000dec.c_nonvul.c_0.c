static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = 0;
    while (--VAR3 >= 0)
    {
        VAR4 <<= 1;
        if (VAR2->VAR5 == 0)
        {
            VAR2->VAR5 = 7 + (FUN2(&VAR2->VAR6) != 0xFFu);
        }
        VAR2->VAR5--;
        VAR4 |= (FUN3(&VAR2->VAR6) >> VAR2->VAR5) & 1;
    }
    return VAR4;
}