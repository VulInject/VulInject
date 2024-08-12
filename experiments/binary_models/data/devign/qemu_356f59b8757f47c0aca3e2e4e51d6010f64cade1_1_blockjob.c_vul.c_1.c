void FUN1(VAR1 *VAR2)
{
    assert(VAR2->VAR3);
    if (FUN2(VAR2))
    {
        return;
    }
    VAR2->VAR3 = false;
    if (!FUN3(VAR2))
    {
        FUN4();
    }
    VAR2->VAR3 = true;
    FUN5(VAR2);
}