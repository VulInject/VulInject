int FUN1(VAR1 *VAR2)
{
    int VAR3;
    assert(VAR2->VAR4 == VAR5);
    VAR3 = VAR2->VAR6->FUN2(VAR2, VAR2->VAR6);
    if (VAR3 < 0)
    {
        FUN3(VAR2);
        return VAR3;
    }
    if (VAR2->VAR6->VAR7)
    {
        FUN4(VAR2, -1, VAR2->VAR6->VAR7, VAR2, VAR2->VAR8, VAR2->VAR9);
    }
    VAR2->VAR4 = VAR10;
    return 0;
}