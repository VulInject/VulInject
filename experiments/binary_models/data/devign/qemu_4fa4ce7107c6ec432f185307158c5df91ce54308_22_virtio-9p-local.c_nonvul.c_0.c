static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, char *VAR6, size_t VAR7)
{
    ssize_t VAR8 = -1;
    char *VAR9;
    char *VAR10 = VAR5->VAR11;
    if ((VAR3->VAR12 & VAR13) || (VAR3->VAR12 & VAR14))
    {
        int VAR15;
        VAR9 = FUN2(VAR3, VAR10);
        VAR15 = open(VAR9, VAR16 | VAR17);
        FUN3(VAR9);
        if (VAR15 == -1)
        {
            return -1;
        }
        do
        {
            VAR8 = read(VAR15, (void *)VAR6, VAR7);
        } while (VAR8 == -1 && VAR18 == VAR19);
        close(VAR15);
        return VAR8;
    }
    else if ((VAR3->VAR12 & VAR20) || (VAR3->VAR12 & VAR21))
    {
        VAR9 = FUN2(VAR3, VAR10);
        VAR8 = readlink(VAR9, VAR6, VAR7);
        FUN3(VAR9);
    }
    return VAR8;
}