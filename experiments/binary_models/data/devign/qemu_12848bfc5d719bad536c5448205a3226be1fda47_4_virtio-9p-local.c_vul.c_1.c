static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    if (VAR2->VAR6 == VAR7)
    {
        return FUN2(FUN3(VAR2, VAR3), VAR5);
    }
    else if (VAR2->VAR6 == VAR8)
    {
        return chmod(FUN3(VAR2, VAR3), VAR5->VAR9);
    }
    return -1;
}