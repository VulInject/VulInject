static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10;
    VAR9 = VAR11;
    if ((VAR4 & VAR12) == VAR13)
    {
        VAR9 |= VAR13;
    }
    else
    {
        VAR9 |= VAR14;
        VAR2->VAR15 = 1;
    }
    if (VAR4 & VAR16)
        VAR9 |= VAR17 | VAR18;
    VAR6->VAR19 = VAR20;
    VAR8 = open(VAR3, VAR9, 0644);
    if (VAR8 < 0)
    {
        VAR10 = -VAR21;
        if (VAR10 == -VAR22)
            VAR10 = -VAR23;
        return VAR10;
    }
    VAR6->VAR8 = VAR8;
    return 0;
}