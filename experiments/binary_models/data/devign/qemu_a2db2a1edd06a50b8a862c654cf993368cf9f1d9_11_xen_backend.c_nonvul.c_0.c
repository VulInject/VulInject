static struct VAR1 *FUN1(int VAR2, int VAR3)
{
    struct VAR1 *VAR4, *VAR5;
    VAR5 = VAR6.VAR7;
    while (VAR5)
    {
        VAR4 = VAR5;
        VAR5 = VAR4->VAR8.VAR9;
        if (VAR4->VAR2 != VAR2)
        {
            continue;
        }
        if (VAR4->VAR3 != VAR3 && VAR3 != -1)
        {
            continue;
        }
        if (VAR4->VAR10->free)
        {
            VAR4->VAR10->free(VAR4);
        }
        if (VAR4->VAR11)
        {
            char VAR12[VAR13];
            snprintf(VAR12, sizeof(VAR12), "", VAR4);
            FUN2(VAR14, VAR4->VAR11, VAR12);
            FUN3(VAR4->VAR11);
        }
        if (VAR4->VAR15 != NULL)
        {
            FUN4(VAR4->VAR15);
        }
        if (VAR4->VAR16 != VAR17)
        {
            FUN5(VAR4->VAR16);
        }
        FUN6(&VAR6, VAR4, VAR8);
        FUN3(VAR4);
    }
    return NULL;
}