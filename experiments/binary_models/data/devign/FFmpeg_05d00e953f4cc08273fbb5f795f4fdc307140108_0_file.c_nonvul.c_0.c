static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    int VAR5;
    int VAR6;
    FUN2(VAR3, "", &VAR3);
    if (VAR4 & VAR7)
    {
        VAR5 = VAR8 | VAR9 | VAR10;
    }
    else if (VAR4 & VAR11)
    {
        VAR5 = VAR8 | VAR9 | VAR12;
    }
    else
    {
        VAR5 = VAR13;
    }
    VAR5 |= VAR14;
    VAR6 = open(VAR3, VAR5, 0666);
    if (VAR6 < 0)
        return FUN3(VAR15);
    VAR2->VAR16 = (void *)(VAR17)VAR6;
    return 0;
}