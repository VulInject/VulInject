static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    while (!VAR3->VAR4)
    {
        FUN2(&VAR3->mutex);
        while (!VAR3->VAR5 && !VAR3->VAR4)
        {
            FUN3(&VAR3->VAR6, &VAR3->mutex);
        }
        if (!VAR3->VAR4)
        {
            FUN4(VAR3);
        }
        VAR3->VAR5 = false;
        FUN5(&VAR3->mutex);
        FUN2(VAR7);
        VAR3->VAR8 = true;
        FUN6(VAR9);
        FUN5(VAR7);
    }
    return NULL;
}