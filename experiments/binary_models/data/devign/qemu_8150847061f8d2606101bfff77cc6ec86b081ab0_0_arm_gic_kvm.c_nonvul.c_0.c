static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, bool VAR7)
{
    if (VAR7)
    {
        *VAR6 = FUN2(VAR3, VAR4) & 0xff;
    }
    else
    {
        FUN3(VAR2, VAR4, VAR3, *VAR6 & 0xff, VAR8);
    }
}