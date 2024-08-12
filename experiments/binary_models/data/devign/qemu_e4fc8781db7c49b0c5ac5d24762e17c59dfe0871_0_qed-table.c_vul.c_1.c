static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR6;
    VAR7 *VAR8 = VAR4->VAR8;
    VAR9 *VAR10 = VAR6->VAR10;
    if (VAR2)
    {
        FUN2(VAR10);
        VAR6->VAR10 = NULL;
    }
    else
    {
        VAR10->VAR11 = VAR4->VAR12;
        FUN3(&VAR8->VAR13, VAR10);
        VAR6->VAR10 = FUN4(&VAR8->VAR13, VAR10->VAR11);
        assert(VAR6->VAR10 != NULL);
    }
    FUN5(&VAR4->VAR14, VAR2);
}