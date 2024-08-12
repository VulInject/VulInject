void FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3 || VAR2->VAR4)
    {
        return;
    }
    VAR2->VAR4 = true;
    FUN2(VAR2->VAR3);
    if (FUN3(&VAR2->VAR5))
    {
        FUN4(VAR2->VAR5);
    }
    FUN5(&VAR2->VAR6);
}