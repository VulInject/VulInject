void FUN1(WakeupReason VAR1)
{
    if (!FUN2(VAR2))
    {
        return;
    }
    if (!(VAR3 & (1 << VAR1)))
    {
        return;
    }
    FUN3(VAR4);
    FUN4(VAR5, NULL);
    FUN5(&VAR6, &VAR1);
    VAR7 = 1;
    FUN6();
}