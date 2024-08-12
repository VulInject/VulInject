static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    if (VAR7->VAR9)
    {
        return FUN2(VAR7->VAR10, VAR4, VAR5);
    }
    else if (VAR7->VAR11 == -1)
    {
        FUN3(VAR2);
        return 0;
    }
    else
    {
        return VAR5;
    }
}