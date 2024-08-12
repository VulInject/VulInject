int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    int VAR5, VAR6;
    VAR1 *VAR7 = VAR2;
    VAR6 = 0;
    for (VAR5 = 0; VAR3[VAR5] && VAR3[VAR5] != ''; VAR5++)
    {
        unsigned int VAR8 = VAR3[VAR5] - 43;
        if (VAR8 >= FUN2(VAR9) || VAR9[VAR8] == 0xff)
            return -1;
        VAR6 = (VAR6 << 6) + VAR9[VAR8];
        if (VAR5 & 3)
        {
            if (VAR7 - VAR2 < VAR4)
            {
                *VAR7++ = VAR6 >> (6 - 2 * (VAR5 & 3));
            }
        }
    }
    return VAR7 - VAR2;
}