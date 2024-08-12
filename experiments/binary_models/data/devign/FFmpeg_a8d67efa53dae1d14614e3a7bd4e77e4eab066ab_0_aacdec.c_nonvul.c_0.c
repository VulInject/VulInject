static int FUN1(FUN2 (*VAR1)[3], int VAR2, int VAR3, int *VAR4)
{
    int VAR5 = 0;
    int VAR6 = 0;
    int VAR7 = 0;
    int VAR8;
    for (VAR8 = *VAR4; VAR8 < VAR2; VAR8++)
    {
        if (VAR1[VAR8][2] != VAR3)
            break;
        if (VAR1[VAR8][0] == VAR9)
        {
            if (VAR7)
            {
                if (VAR3 == VAR10 && !VAR6)
                {
                    VAR7 = 0;
                }
                else
                {
                    return -1;
                }
            }
            VAR5 += 2;
            VAR6 = 1;
        }
        else
        {
            VAR5++;
            VAR7 ^= 1;
        }
    }
    if (VAR7 && ((VAR3 == VAR10 && VAR6) || VAR3 == VAR11))
        return -1;
    *VAR4 = VAR8;
    return VAR5;
}