static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    if (!(VAR6->VAR9++ % VAR6->VAR10))
    {
        return FUN2(VAR2->VAR7->VAR11[0], VAR4);
    }
    else
    {
        FUN3(&VAR4);
        return 0;
    }
}