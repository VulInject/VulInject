static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    VAR8 *VAR9;
    VAR7 = FUN2(VAR2, VAR4->VAR10);
    if (VAR7 == -1)
    {
        return -1;
    }
    VAR9 = FUN3(VAR7);
    if (!VAR9)
    {
        return -1;
    }
    VAR6->VAR11.VAR9 = VAR9;
    return 0;