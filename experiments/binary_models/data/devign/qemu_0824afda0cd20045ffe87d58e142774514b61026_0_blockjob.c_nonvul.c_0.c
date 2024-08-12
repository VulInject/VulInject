void FUN1(VAR1 *VAR2, QEMUClockType VAR3, int64_t VAR4)
{
    assert(VAR2->VAR5);
    if (FUN2(VAR2))
    {
        return;
    }
    VAR2->VAR5 = false;
    if (!FUN3(VAR2))
    {
        FUN4(FUN5(VAR2->VAR6), VAR3, VAR4);
    }
    if (FUN3(VAR2))
    {
        FUN6();
    }
    VAR2->VAR5 = true;
}