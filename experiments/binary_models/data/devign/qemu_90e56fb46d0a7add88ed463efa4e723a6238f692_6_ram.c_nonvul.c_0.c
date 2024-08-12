static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    unsigned long VAR4;
    while (!VAR3->VAR5)
    {
        FUN2(&VAR3->mutex);
        while (!VAR3->VAR6 && !VAR3->VAR5)
        {
            FUN3(&VAR3->VAR7, &VAR3->mutex);
        }
        if (!VAR3->VAR5)
        {
            VAR4 = VAR8;
            FUN4((VAR9 *)VAR3->VAR10, &VAR4, (const VAR9 *)VAR3->VAR11, VAR3->VAR12);
        }
        VAR3->VAR6 = false;
        FUN5(&VAR3->mutex);
        FUN2(&VAR13);
        VAR3->VAR14 = true;
        FUN6(&VAR15);
        FUN5(&VAR13);
    }
    return NULL;
}