static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR3 *VAR7;
    int VAR8, VAR9;
    VAR7 = VAR4 + 2;
    *VAR7++ = 1;
    *VAR7++ = 1;
    *VAR7++ = 1;
    *VAR7++ = 0x14;
    *VAR7++ = 0;
    *VAR7++ = 0xa0;
    *VAR7++ = 0;
    *VAR7++ = 0;
    *VAR7++ = 0;
    *VAR7++ = 0;
    *VAR7++ = 1;
    *VAR7++ = 0x00;
    *VAR7++ = 0x00;
    *VAR7++ = 1;
    *VAR7++ = 0x14;
    *VAR7++ = 0;
    *VAR7++ = 0xa1;
    *VAR7++ = 0;
    *VAR7++ = 0;
    *VAR7++ = 0;
    *VAR7++ = 0;
    *VAR7++ = 1;
    *VAR7++ = 0x00;
    *VAR7++ = 0x00;
    *VAR7++ = 1;
    *VAR7++ = 0x14;
    *VAR7++ = 0;
    *VAR7++ = 0xa2;
    *VAR7++ = 0;
    *VAR7++ = 0;
    *VAR7++ = 0;
    VAR8 = VAR2->VAR8 >> 2;
    if (VAR5)
    {
        *VAR7++ = 0;
        FUN2(VAR7, VAR8);
        VAR7 += 3;
    }
    else
    {
        FUN3(VAR7, VAR8);
        VAR7 += 4;
    }
    *VAR7++ = 1;
    *VAR7++ = 0x14;
    *VAR7++ = 0;
    *VAR7++ = 1;
    *VAR7++ = 0;
    *VAR7++ = 0;
    *VAR7++ = 0;
    if (VAR5)
    {
        *VAR7++ = 0;
        FUN2(VAR7, 0);
        VAR7 += 3;
    }
    else
    {
        *VAR7++ = 0;
        *VAR7++ = 0;
        *VAR7++ = 0;
        *VAR7++ = 0;
    }
    VAR9 = VAR7 - VAR4;
    FUN4(VAR4, VAR9 - 2);
    return VAR9;
}