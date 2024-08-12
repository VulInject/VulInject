static int FUN1(const unsigned char *VAR1, int VAR2, int VAR3, unsigned char *VAR4, int VAR5)
{
    const unsigned char *VAR6;
    const unsigned char *VAR7;
    unsigned char *VAR8;
    int VAR9, VAR10;
    unsigned char *VAR11 = VAR4 + VAR5;
    VAR6 = VAR1;
    VAR7 = VAR1 + VAR2;
    VAR8 = VAR4;
    if (VAR3 & 1)
    {
        if (VAR7 - VAR6 < 1)
            return 0;
        *VAR8++ = *VAR6++;
    }
    VAR3 >>= 1;
    VAR9 = 0;
    do
    {
        if (VAR7 - VAR6 < 1)
            break;
        VAR10 = *VAR6++;
        if (VAR10 & 0x80)
        {
            VAR10 = (VAR10 & 0x7F) * 2;
            if (VAR8 + VAR10 > VAR11 || VAR7 - VAR6 < VAR10)
                return VAR6 - VAR1;
            memcpy(VAR8, VAR6, VAR10);
            VAR6 += VAR10;
            VAR8 += VAR10;
        }
        else
        {
            if (VAR8 + VAR9 > VAR11 || VAR7 - VAR6 < 2)
                return VAR6 - VAR1;
            for (VAR9 = 0; VAR9 < VAR10; VAR9++)
            {
                *VAR8++ = VAR6[0];
                *VAR8++ = VAR6[1];
            }
            VAR6 += 2;
        }
        VAR9 += VAR10;
    } while (VAR9 < VAR3);
    return VAR6 - VAR1;
}