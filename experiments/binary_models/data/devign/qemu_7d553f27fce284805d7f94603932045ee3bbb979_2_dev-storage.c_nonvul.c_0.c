static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = NULL;
    if (!VAR2)
    {
        FUN2(&VAR4->VAR7, &VAR6);
    }
    if (VAR6)
    {
        FUN3(VAR6);
        FUN4(VAR6);
        FUN5(&VAR4->VAR7.VAR8, NULL);
    }
}