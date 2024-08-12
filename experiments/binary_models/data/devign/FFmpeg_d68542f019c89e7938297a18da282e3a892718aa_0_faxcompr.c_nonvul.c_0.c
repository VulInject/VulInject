static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int *VAR6)
{
    int VAR7 = 0, VAR8 = 0;
    unsigned int VAR9;
    for (;;)
    {
        VAR9 = FUN2(VAR4, VAR10[VAR7].VAR11, 9, 2);
        VAR8 += VAR9;
        if (VAR9 < 64)
        {
            VAR5 -= VAR8;
            *VAR6++ = VAR8;
            if (VAR5 <= 0)
            {
                if (!VAR5)
                    break;
                VAR6[-1] += VAR5;
                FUN3(VAR2, VAR12, "");
                return -1;
            }
            VAR8 = 0;
            VAR7 = !VAR7;
        }
        else if ((int)VAR9 == -1)
        {
            FUN3(VAR2, VAR12, "");
            return -1;
        }
    }
    *VAR6++ = 0;
    return 0;
}