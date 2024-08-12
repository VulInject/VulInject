static int FUN1(VAR1 *VAR2, char *VAR3, int VAR4)
{
    int VAR5;
    char *VAR6 = VAR3;
    for (;;)
    {
        VAR5 = FUN2(VAR2);
        if (VAR5 < 0)
        {
            return VAR5;
        }
        if (VAR5 == '')
        {
            if (VAR6 > VAR3 && VAR6[-1] == '')
                VAR6--;
            *VAR6 = '';
            return 0;
        }
        else
        {
            if ((VAR6 - VAR3) < VAR4 - 1)
                *VAR6++ = VAR5;
        }
    }
}