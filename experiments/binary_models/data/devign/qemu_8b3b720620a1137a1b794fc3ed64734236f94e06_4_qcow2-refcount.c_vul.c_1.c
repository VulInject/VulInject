static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    size_t VAR6 = VAR4->VAR7;
    if (VAR4->VAR8 == 0)
    {
        return 0;
    }
    FUN2(VAR2->VAR9, VAR10);
    if (FUN3(VAR2->VAR9, VAR4->VAR8, VAR4->VAR11, VAR6) != VAR6)
    {
        return -VAR12;
    }
    return 0;
}