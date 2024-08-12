static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    if (VAR6->VAR8 != NULL)
    {
        return -1;
    }
    VAR6->VAR8 = FUN2(VAR4);
    FUN3(FUN4(VAR4));
    if (VAR6->VAR9)
    {
        FUN5(VAR6->VAR8, false);
    }
    if (VAR6->VAR10)
    {
        FUN6(VAR6->VAR10);
        VAR6->VAR10 = 0;
    }
    if (VAR6->VAR11)
    {
        FUN7(VAR2);
    }
    else
    {
        FUN8(VAR2);
    }
    return 0;
}