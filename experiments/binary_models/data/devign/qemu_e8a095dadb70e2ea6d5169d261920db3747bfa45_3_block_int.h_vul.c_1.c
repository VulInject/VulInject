void FUN1(VAR1 *VAR2, void (*VAR3)(VAR4 *, void *), void (*VAR5)(void *), void *VAR6)
{
    VAR7 *VAR8, *VAR9;
    FUN2(VAR8, &VAR2->VAR10, VAR11, VAR9)
    {
        if (VAR8->VAR3 == VAR3 && VAR8->VAR5 == VAR5 && VAR8->VAR6 == VAR6)
        {
            FUN3(VAR8, VAR11);
            FUN4(VAR8);
            return;
        }
    }
    FUN5();
}