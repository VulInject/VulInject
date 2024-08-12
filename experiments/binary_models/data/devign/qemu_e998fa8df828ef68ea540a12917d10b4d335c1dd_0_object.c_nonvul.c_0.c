void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2);
    if (VAR2->class->VAR3)
    {
        (VAR2->class->VAR3)(VAR2);
    }
    if (VAR2->VAR4)
    {
        FUN3(VAR2->VAR4, VAR2, NULL);
    }
    FUN4(VAR2);
}