int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8;
    VAR8 = VAR7;
    VAR2->VAR4 = VAR4;
    VAR2->VAR9 = 0;
    for (;;)
    {
        if (VAR2->VAR9 > 0)
            break;
        if (VAR7 < VAR10)
            return -1;
        if (VAR6[0] != 0x47)
        {
            VAR6++;
            VAR7--;
        }
        else
        {
            FUN2(VAR2, VAR6);
            VAR6 += VAR10;
            VAR7 -= VAR10;
        }
    }
    return VAR8 - VAR7;
}