static void FUN1(VAR1 *VAR2)
{
    if (VAR2 == NULL)
        return;
    FUN2(&VAR2->VAR3);
    VAR2->VAR4 = NULL;
    FUN2(&VAR2->VAR5.VAR6);
    VAR2->VAR5.VAR7 = VAR2->VAR8 = VAR2->VAR9 = VAR2->VAR10 = NULL;
    FUN2(&VAR2->VAR11);
    FUN2(&VAR2->VAR5.VAR12);
    FUN2(&VAR2->VAR5.VAR13);
    FUN2(&VAR2->VAR14);
    FUN2(&VAR2->VAR15);
    VAR2->VAR16 = NULL;
}