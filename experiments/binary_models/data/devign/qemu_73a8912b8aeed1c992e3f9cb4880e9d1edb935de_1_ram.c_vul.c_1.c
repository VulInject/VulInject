static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    unsigned long VAR4;
    while (!VAR5)
    {
        FUN2(&VAR3->mutex);
        while (!VAR3->VAR6 && !VAR5)
        {
            FUN3(&VAR3->VAR7, &VAR3->mutex);
            VAR4 = VAR8;
            if (!VAR5)
            {
                FUN4((VAR9 *)VAR3->VAR10, &VAR4, (const VAR9 *)VAR3->VAR11, VAR3->VAR12);
            }
            VAR3->VAR6 = false;
        }
        FUN5(&VAR3->mutex);
    }
    return NULL;
}