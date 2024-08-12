static char *FUN1(char *VAR1, int VAR2, int64_t VAR3)
{
    static const char VAR4[VAR5] = {'', '', '', ''};
    int64_t VAR6;
    int VAR7;
    if (VAR3 <= 999)
    {
        snprintf(VAR1, VAR2, "" VAR8, VAR3);
    }
    else
    {
        VAR6 = 1024;
        for (VAR7 = 0; VAR7 < VAR5; VAR7++)
        {
            if (VAR3 < (10 * VAR6))
            {
                snprintf(VAR1, VAR2, "", (double)VAR3 / VAR6, VAR4[VAR7]);
                break;
            }
            else if (VAR3 < (1000 * VAR6) || VAR7 == (VAR5 - 1))
            {
                snprintf(VAR1, VAR2, "" VAR8 "", ((VAR3 + (VAR6 >> 1)) / VAR6), VAR4[VAR7]);
                break;
            }
            VAR6 = VAR6 * 1024;
        }
    }
    return VAR1;
}