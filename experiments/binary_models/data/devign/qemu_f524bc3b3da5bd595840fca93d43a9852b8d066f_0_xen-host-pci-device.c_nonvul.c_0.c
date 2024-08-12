static int FUN1(VAR1 *VAR2, const char *VAR3, unsigned int *VAR4, int VAR5)
{
    char VAR6[VAR7];
    char VAR8[VAR9];
    int VAR10, VAR11;
    unsigned long VAR12;
    const char *VAR13;
    FUN2(VAR2, VAR3, VAR6, sizeof(VAR6));
    VAR10 = open(VAR6, VAR14);
    if (VAR10 == -1)
    {
        FUN3("", VAR6, strerror(VAR15));
        return -VAR15;
    }
    do
    {
        VAR11 = read(VAR10, &VAR8, sizeof(VAR8) - 1);
        if (VAR11 < 0 && VAR15 != VAR16)
        {
            VAR11 = -VAR15;
            goto VAR17;
        }
    } while (VAR11 < 0);
    VAR8[VAR11] = 0;
    VAR11 = FUN4(VAR8, &VAR13, VAR5, &VAR12);
    if (!VAR11)
    {
        assert(VAR12 <= VAR18);
        *VAR4 = VAR12;
    }
VAR17:
    close(VAR10);
    return VAR11;
}