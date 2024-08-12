int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR4 = FUN2(VAR2->VAR5);
    if (VAR4)
    {
        VAR2->VAR6->VAR7 = FUN3(VAR4->VAR8);
        if (!VAR2->VAR6->VAR7)
            return FUN4(VAR9);
        return 0;
    }
    else
    {
        return 0;
    }
}