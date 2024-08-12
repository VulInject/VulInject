static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    FUN2(VAR2, VAR5->VAR6);
    if (VAR5->VAR7)
    {
        VAR5->VAR8 = 0;
        VAR5->VAR9 = true;
    }
    else
    {
        assert(FUN3());
    }
    return 0;
}