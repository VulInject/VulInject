FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    VAR5 *VAR6;
    FUN2(&VAR4->VAR7, ~1);
    FUN3(VAR4);
    for (VAR6 = VAR4->VAR8; VAR6; VAR6 = VAR6->VAR9)
    {
        if (VAR6->VAR10)
        {
            return true;
        }
    }
    return FUN4(VAR4) || (FUN5(&VAR4->VAR11) == 0);
}