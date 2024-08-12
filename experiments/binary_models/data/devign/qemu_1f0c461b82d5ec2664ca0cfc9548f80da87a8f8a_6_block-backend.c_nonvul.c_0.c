void FUN1(VAR1 *VAR2)
{
    FUN2(&VAR2->VAR3, VAR2);
    if (VAR2->public.VAR4)
    {
        FUN3(&VAR2->public.VAR5);
    }
    FUN4(VAR2);
    FUN5(VAR2->VAR6);
    VAR2->VAR6 = NULL;
}