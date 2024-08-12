static int FUN1(VAR1 *VAR2, const char *VAR3, unsigned int *VAR4, int VAR5)
{
    char VAR6[VAR7];
    char VAR8[VAR9];
    int VAR10, VAR11;
    unsigned long VAR12;
    char *VAR13;
    VAR11 = FUN2(VAR2, VAR3, VAR6, sizeof(VAR6));
    if (VAR11)
    {
        return VAR11;
    }
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
    VAR12 = FUN4(VAR8, &VAR13, VAR5);
    if (VAR13 == VAR8 || *VAR13 != '')
    {
        VAR11 = -1;
    }
    else if ((VAR12 == VAR18 || VAR12 == VAR19) && VAR15 == VAR20)
    {
        VAR11 = -VAR15;
    }
    else
    {
        VAR11 = 0;
        *VAR4 = VAR12;
    }
VAR17:
    close(VAR10);
    return VAR11;
}