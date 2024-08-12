void FUN1(VAR1 *VAR2)
{
    if (!FUN2(VAR2))
    {
        return;
    }
    if (VAR2->VAR3)
    {
        return;
    }
    if (!VAR2->VAR4)
    {
        FUN3(FUN4(VAR2->VAR5), VAR2->VAR6);
    }
}