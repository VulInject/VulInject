static unsigned int FUN1(unsigned char *VAR1, int VAR2, unsigned char *VAR3, unsigned int VAR4)
{
    unsigned char *VAR5 = VAR3;
    unsigned char *VAR6 = VAR3 + VAR4;
    unsigned char VAR7 = 0;
    unsigned char VAR8 = 0;
    unsigned int VAR9, VAR10;
    while (VAR2 > 0 && VAR3 < VAR6)
    {
        if (VAR8 == 0)
        {
            VAR7 = *VAR1++;
            VAR8 = 8;
            VAR2--;
            continue;
        }
        if ((VAR7 & (1 << (--VAR8))) == 0)
        {
            if (VAR3 + 4 > VAR6)
                break;
            memcpy(VAR3, VAR1, 4);
            VAR2 -= 4;
            VAR3 += 4;
            VAR1 += 4;
        }
        else
        {
            VAR9 = *VAR1++;
            VAR10 = *VAR1++;
            VAR9 += VAR10 * 256;
            VAR10 = ((VAR10 >> 3) & 0x1f) + 1;
            VAR9 &= 0x7ff;
            VAR2 -= 2;
            VAR10 *= 4;
            if (VAR3 + VAR10 > VAR6)
            {
                VAR10 = VAR6 - VAR3;
            }
            for (; VAR10 > 0; VAR10--)
            {
                *VAR3 = *(VAR3 - VAR9);
                VAR3++;
            }
        }
    }
    return VAR3 - VAR5;
}