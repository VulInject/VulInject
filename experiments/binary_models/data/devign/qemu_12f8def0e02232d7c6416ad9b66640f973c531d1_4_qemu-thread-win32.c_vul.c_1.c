void FUN1(VAR1 *VAR2, VAR3 *mutex)
{
    VAR2->VAR4++;
    FUN2(mutex);
    FUN3(VAR2->VAR5, VAR6);
    if (FUN4(&VAR2->VAR4) == VAR2->VAR7)
    {
        FUN5(VAR2->VAR8);
    }
    FUN6(mutex);
}