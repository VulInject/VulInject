static int FUN1(void *VAR1, int VAR2)
{
    int VAR3 = -1;
    bool VAR4 = false;
    VAR3 = open("", VAR5);
    if (VAR3 < 0)
    {
        return VAR3;
    }
    while (true)
    {
        ssize_t VAR6;
        char VAR7[128];
        char *VAR8 = VAR7;
        VAR6 = read(VAR3, VAR7, sizeof(VAR7));
        if (VAR6 < 0)
        {
            VAR3 = close(VAR3);
            return -1;
        }
        else if (VAR6 == 0)
        {
            break;
        }
        if (!VAR4)
        {
            VAR8 = memchr(VAR7, 0, sizeof(VAR7));
            if (VAR8)
            {
                VAR8++;
                VAR6 -= VAR8 - VAR7;
                VAR4 = true;
            }
        }
        if (VAR4)
        {
            if (write(VAR2, VAR8, VAR6) != VAR6)
            {
                return -1;
            }
        }
    }
    return close(VAR3);