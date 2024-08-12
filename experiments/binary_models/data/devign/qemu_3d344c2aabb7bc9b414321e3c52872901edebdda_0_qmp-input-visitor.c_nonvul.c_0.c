static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(&VAR6->VAR9);
    assert(VAR8 && !VAR8->VAR10);
    if (VAR6->VAR11)
    {
        VAR12 *const VAR13 = VAR8->VAR14;
        if (VAR13)
        {
            GHashTableIter VAR15;
            const char *VAR16;
            FUN4(&VAR15, VAR13);
            if (FUN5(&VAR15, (void **)&VAR16, NULL))
            {
                FUN6(VAR4, VAR17, VAR16);
            }
        }
    }
}