VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, int VAR5)
{
    hwaddr VAR6;
    int VAR7;
    int VAR8;
    int VAR9 = 0;
    VAR8 = VAR10;
    VAR9 = FUN2(VAR3, &VAR6, &VAR7, VAR4, VAR5, VAR8);
    if (VAR9 != VAR11)
    {
        FUN3(VAR3, VAR4, VAR5, VAR9);
        return -1LL;
    }
    else
    {
        return VAR6;
    }
}