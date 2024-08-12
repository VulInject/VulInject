static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
    unsigned char VAR7, VAR8;
    unsigned char *VAR9 = VAR4;
    while (1)
    {
        if (FUN2(&VAR2->VAR10) < 1)
            return VAR11;
        VAR7 = FUN3(&VAR2->VAR10);
        if (!(VAR8 = (VAR7 & 0x7f)))
        {
            return (VAR4 - VAR9) / VAR6;
        }
        if (VAR4 + VAR6 * VAR8 >= VAR5)
            return -1;
        if (VAR7 & 0x80)
        {
            while (VAR8--)
            {
                *VAR4 = FUN4(&VAR2->VAR10);
                VAR4 += VAR6;
            }
        }
        else
        {
            VAR7 = FUN4(&VAR2->VAR10);
            while (VAR8--)
            {
                *VAR4 = VAR7;
                VAR4 += VAR6;
            }
        }
    }
}