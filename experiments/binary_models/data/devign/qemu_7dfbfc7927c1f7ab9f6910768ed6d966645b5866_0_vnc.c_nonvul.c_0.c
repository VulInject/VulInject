int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2 ? (VAR3 *)VAR2->VAR5 : VAR6;
    if (!VAR4)
    {
        return -1;
    }
    if (VAR4->VAR7)
    {
        FUN2(VAR4->VAR7);
    }
    VAR4->VAR7 = NULL;
    if (VAR4->VAR8 == VAR9)
    {
        VAR4->VAR8 = VAR10;
    }
    return 0;
}