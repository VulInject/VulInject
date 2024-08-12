int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    if (FUN2(VAR2, VAR4->VAR5, (VAR6 *)&VAR4->VAR7, sizeof(VAR8), 0) || FUN2(VAR2, VAR4->VAR5, (VAR6 *)VAR8, sizeof(VAR8), 1))
    {
        return -VAR9;
    }
    return 0;
}