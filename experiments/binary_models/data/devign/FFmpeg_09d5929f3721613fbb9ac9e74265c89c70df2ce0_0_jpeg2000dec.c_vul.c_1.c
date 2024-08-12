static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR3 *VAR6[30];
    int VAR7 = -1, VAR8 = 0;
    while (VAR4 && !VAR4->VAR9)
    {
        VAR6[++VAR7] = VAR4;
        VAR4 = VAR4->VAR10;
    }
    if (VAR4)
        VAR8 = VAR4->VAR11;
    else
        VAR8 = VAR6[VAR7]->VAR11;
    while (VAR8 < VAR5 && VAR7 >= 0)
    {
        if (VAR8 < VAR6[VAR7]->VAR11)
            VAR8 = VAR6[VAR7]->VAR11;
        while (VAR8 < VAR5)
        {
            int VAR12;
            if ((VAR12 = FUN2(VAR2, 1)) > 0)
            {
                VAR6[VAR7]->VAR9++;
                break;
            }
            else if (!VAR12)
                VAR8++;
            else
                return VAR12;
        }
        VAR6[VAR7]->VAR11 = VAR8;
        VAR7--;
    }
    return VAR8;