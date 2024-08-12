static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    char VAR7[VAR8];
    char *VAR9 = VAR4->VAR10;
    if (VAR2->VAR11 & VAR12)
    {
        return FUN2(FUN3(VAR2, VAR9, VAR7), VAR6);
    }
    else if ((VAR2->VAR11 & VAR13) || (VAR2->VAR11 & VAR14))
    {
        return chmod(FUN3(VAR2, VAR9, VAR7), VAR6->VAR15);
    }
    return -1;
}