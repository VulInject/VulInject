static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    static spinlock_t VAR5 = VAR6;
    VAR4 = VAR2->VAR7;
    if (VAR4)
    {
        FUN2(&VAR5);
        VAR2->VAR7 = NULL;
        FUN3(VAR4);
        FUN4(&VAR5);
    }
}