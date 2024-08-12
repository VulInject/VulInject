void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    if (!VAR2)
    {
        return;
    }
    VAR4 = FUN2(VAR2->VAR5);
    assert(!VAR4->VAR6);
    FUN3(VAR2->VAR7);
    FUN4(VAR2->VAR8);
    if (VAR2->VAR9)
    {
        FUN5(FUN6(VAR2->VAR9));
    }
    FUN3(VAR2);
}