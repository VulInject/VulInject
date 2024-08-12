void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    if (VAR2->VAR7 && !VAR2->VAR7->VAR8)
    {
        FUN3(VAR4, VAR9, VAR2->VAR7->VAR10);
        return;
    }
    assert(VAR6->VAR11 != NULL);
    VAR12 = true;
    if (VAR6->FUN4(VAR2) < 0)
    {
        FUN3(VAR4, VAR13);
        return;
    }
}