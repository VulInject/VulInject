void FUN1(VAR1 *VAR2)
{
    int VAR3;
    pid_t VAR4 = FUN2(VAR2);
    if (VAR4 != -1)
    {
        FUN3(VAR4, VAR5);
        FUN4(VAR4, &VAR3, 0);
    }
    unlink(VAR2->VAR6);
    unlink(VAR2->VAR7);
    unlink(VAR2->VAR8);
    FUN5(VAR2->VAR6);
    FUN5(VAR2->VAR7);
    FUN5(VAR2->VAR8);