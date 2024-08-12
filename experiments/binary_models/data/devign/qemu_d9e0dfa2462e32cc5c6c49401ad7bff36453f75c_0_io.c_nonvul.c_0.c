void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR3 *VAR7 = NULL;
    memset(&VAR2->VAR8, 0, sizeof(VAR2->VAR8));
    if (!VAR6)
    {
        return;
    }
    VAR2->VAR9 = VAR6->VAR10 ? 1 : 512;
    if (VAR2->VAR11)
    {
        FUN1(VAR2->VAR11->VAR2, &VAR7);
        if (VAR7)
        {
            FUN2(VAR4, VAR7);
            return;
        }
        FUN3(&VAR2->VAR8, &VAR2->VAR11->VAR2->VAR8);
    }
    else
    {
        VAR2->VAR8.VAR12 = 512;
        VAR2->VAR8.VAR13 = FUN4();
        VAR2->VAR8.VAR14 = VAR15;
    }
    if (VAR2->VAR16)
    {
        FUN1(VAR2->VAR16->VAR2, &VAR7);
        if (VAR7)
        {
            FUN2(VAR4, VAR7);
            return;
        }
        FUN3(&VAR2->VAR8, &VAR2->VAR16->VAR2->VAR8);
    }
    if (VAR6->VAR17)
    {
        VAR6->FUN1(VAR2, VAR4);
    }
}