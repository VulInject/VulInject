static void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = (struct VAR3 *)VAR2;
    int VAR5 = 0;
    FUN2(&VAR6);
    if (!VAR4->VAR5)
    {
        FUN3(&VAR7, VAR4, VAR8);
        VAR4->VAR9 = -VAR10;
    }
    else if (VAR4->VAR9 == -VAR11)
    {
        VAR5 = 1;
    }
    FUN4(&VAR6);
    if (VAR5)
    {
        while (FUN5(VAR4) == VAR11)
            ;
    }
    FUN6(VAR4);
}