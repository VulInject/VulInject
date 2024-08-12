void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    assert(VAR2->VAR5);
    if (--VAR2->VAR5 == 0 && VAR2->VAR6 == 0)
    {
        VAR7 *VAR8 = VAR2->VAR8;
        if (VAR8 && VAR8->VAR9)
        {
            VAR8->FUN1(VAR2);
        }
    }
    FUN2(VAR4, &VAR2->VAR10, VAR11) { FUN1(VAR4->VAR2); }
}