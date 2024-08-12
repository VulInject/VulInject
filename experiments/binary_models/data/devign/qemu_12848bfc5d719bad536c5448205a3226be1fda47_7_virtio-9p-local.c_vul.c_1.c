static VAR1 FUN1(VAR2 *VAR3, const char *VAR4, char *VAR5, size_t VAR6)
{
    ssize_t VAR7 = -1;
    if (VAR3->VAR8 == VAR9)
    {
        int VAR10;
        VAR10 = open(FUN2(VAR3, VAR4), VAR11);
        if (VAR10 == -1)
        {
            return -1;
        }
        do
        {
            VAR7 = read(VAR10, (void *)VAR5, VAR6);
        } while (VAR7 == -1 && VAR12 == VAR13);
        close(VAR10);
        return VAR7;
    }
    else if (VAR3->VAR8 == VAR14)
    {
        VAR7 = readlink(FUN2(VAR3, VAR4), VAR5, VAR6);
    }
    return VAR7;
}