static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR4->VAR6)
    {
        return 0;
    }
    if (!FUN2(VAR4))
    {
        return -VAR7;
    }
    VAR4->VAR6 = true;
    if (VAR4->VAR8)
    {
        FUN3(VAR4->VAR8, 0, VAR9, &VAR10);
    }
    return 0;
}