static int FUN1(int64_t VAR1, VAR2 *VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    uint32_t VAR7;
    if (VAR1 > 65535LL * 255 * 255)
    {
        return -VAR8;
    }
    if (VAR1 > 65535 * 16 * 63)
    {
        *VAR6 = 255;
        if (VAR1 > 65535 * 16 * 255)
        {
            *VAR5 = 255;
        }
        else
        {
            *VAR5 = 16;
        }
        VAR7 = VAR1 / *VAR6;
    }
    else
    {
        *VAR6 = 17;
        VAR7 = VAR1 / *VAR6;
        *VAR5 = (VAR7 + 1023) / 1024;
        if (*VAR5 < 4)
            *VAR5 = 4;
        if (VAR7 >= (*VAR5 * 1024) || *VAR5 > 16)
        {
            *VAR6 = 31;
            *VAR5 = 16;
            VAR7 = VAR1 / *VAR6;
        }
        if (VAR7 >= (*VAR5 * 1024))
        {
            *VAR6 = 63;
            *VAR5 = 16;
            VAR7 = VAR1 / *VAR6;
        }
    }
    *VAR3 = VAR7 / *VAR5;
    return 0;
}