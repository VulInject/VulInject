static void FUN1(const unsigned char *VAR1, int VAR2, unsigned char *VAR3, int VAR4)
{
    int VAR5, VAR6;
    unsigned char *VAR7 = VAR3 + VAR4;
    const unsigned char *VAR8 = VAR1 + VAR2;
    while (VAR1 < VAR8 && VAR3 < VAR7)
    {
        VAR6 = *VAR1++;
        if (VAR6 & 0x80)
        {
            if (VAR1 >= VAR8)
                break;
            VAR5 = VAR6 - 0x7F;
            memset(VAR3, *VAR1++, FUN2(VAR5, VAR7 - VAR3));
        }
        else
        {
            VAR5 = VAR6 + 1;
            memcpy(VAR3, VAR1, FUN3(VAR5, VAR7 - VAR3, VAR8 - VAR1));
            VAR1 += VAR5;
        }
        VAR3 += VAR5;
    }
}