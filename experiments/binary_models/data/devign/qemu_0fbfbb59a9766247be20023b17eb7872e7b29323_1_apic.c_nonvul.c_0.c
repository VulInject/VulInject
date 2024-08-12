int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5.VAR6, VAR2);
    int VAR7;
    if (!VAR4)
        return -1;
    if (!(VAR4->VAR8 & VAR9))
        return -1;
    VAR7 = FUN3(VAR4);
    if (VAR7 == 0)
    {
        return -1;
    }
    else if (VAR7 < 0)
    {
        return VAR4->VAR8 & 0xff;
    }
    FUN4(VAR4->VAR10, VAR7);
    FUN5(VAR4->VAR11, VAR7);
    FUN6(VAR4);
    return VAR7;
}