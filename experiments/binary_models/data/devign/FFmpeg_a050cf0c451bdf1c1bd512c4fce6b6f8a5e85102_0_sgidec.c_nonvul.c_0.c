static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    unsigned short VAR7;
    unsigned char VAR8;
    unsigned short *VAR9 = VAR4;
    VAR3 *VAR10 = VAR4 + VAR5;
    while (VAR4 < VAR10)
    {
        if (FUN2(&VAR2->VAR11) < 2)
            return VAR12;
        VAR7 = FUN3(&VAR2->VAR11);
        if (!(VAR8 = (VAR7 & 0x7f)))
            break;
        if (VAR10 - VAR4 <= VAR6 * (VAR8 - 1))
        {
            FUN4(VAR2->VAR13, VAR14, "");
            return VAR12;
        }
        if (VAR7 & 0x80)
        {
            while (VAR8--)
            {
                VAR7 = FUN5(&VAR2->VAR11);
                FUN6(VAR4, VAR7);
                VAR4 += VAR6;
            }
        }
        else
        {
            VAR7 = FUN5(&VAR2->VAR11);
            while (VAR8--)
            {
                FUN6(VAR4, VAR7);
                VAR4 += VAR6;
            }
        }
    }
    return (VAR4 - VAR9) / VAR6;
}