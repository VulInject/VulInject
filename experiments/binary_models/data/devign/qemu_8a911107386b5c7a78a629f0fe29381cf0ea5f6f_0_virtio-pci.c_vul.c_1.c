static int FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR1;
    int VAR6;
    VAR6 = FUN2(&VAR5->VAR7, VAR3);
    if (VAR6)
    {
        return VAR6;
    }
    FUN3(&VAR5->VAR7, VAR3);
    if (FUN4(&VAR5->VAR7))
    {
        FUN5(VAR3, &VAR5->VAR8->VAR9);
    }
    else
    {
        VAR5->VAR8->VAR9 = VAR10;
    }
    if (VAR5->VAR8->VAR9 != VAR10)
    {
        return FUN6(&VAR5->VAR7, VAR5->VAR8->VAR9);
    }
    if (!(VAR5->VAR8->VAR11 & VAR12) && !(VAR5->VAR7.VAR13[VAR14] & VAR15))
    {
        VAR5->VAR16 |= VAR17;
    }
    return 0;
}