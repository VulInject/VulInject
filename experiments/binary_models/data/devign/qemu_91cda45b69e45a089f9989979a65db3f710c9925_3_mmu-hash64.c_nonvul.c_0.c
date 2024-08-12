static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, target_ulong VAR5, int VAR6)
{
    bool VAR7 = (VAR6 == 2 && VAR8 == 0) || (VAR6 != 2 && VAR9 == 0);
    if (VAR7)
    {
        VAR4->VAR10 = VAR5 & 0x0FFFFFFFFFFFFFFFULL;
        VAR4->VAR11 = VAR12 | VAR13 | VAR14;
        return 0;
    }
    else
    {
        return FUN2(VAR2, VAR4, VAR5, VAR6);
    }
}