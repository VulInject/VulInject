bool FUN1(ReplayCheckpoint VAR1)
{
    bool VAR2 = false;
    assert(VAR3 + VAR1 <= VAR4);
    FUN2();
    if (!VAR5)
    {
        return true;
    }
    FUN3();
    if (VAR6 == VAR7)
    {
        if (FUN4(VAR3 + VAR1))
        {
            FUN5();
        }
        else if (VAR8.VAR9 != VAR10)
        {
            VAR2 = false;
            goto VAR11;
        }
        FUN6(VAR1);
        VAR2 = VAR8.VAR9 != VAR10;
    }
    else if (VAR6 == VAR12)
    {
        FUN7(VAR3 + VAR1);
        FUN8(VAR1);
        VAR2 = true;
    }
VAR11:
    FUN9();
    return VAR2;
}