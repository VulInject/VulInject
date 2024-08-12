void FUN1(void)
{
    VAR1 *VAR2;
    assert(VAR3);
    --VAR3;
    if (!VAR3)
    {
        if (VAR4)
        {
            FUN2(VAR5, VAR6);
            FUN3(VAR2, &VAR7, VAR8) { FUN4(VAR2); }
            FUN2(VAR9, VAR6);
        }
        else if (VAR10)
        {
            FUN3(VAR2, &VAR7, VAR8) { FUN5(VAR2); }
        }
        FUN6();
    }