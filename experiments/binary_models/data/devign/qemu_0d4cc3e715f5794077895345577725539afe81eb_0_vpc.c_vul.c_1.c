static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = (VAR6 *)VAR4->VAR8;
    if (FUN2(VAR7->VAR9) == VAR10)
    {
        return FUN3(VAR2->VAR11);
    }
    else
    {
        return 1;
    }
}