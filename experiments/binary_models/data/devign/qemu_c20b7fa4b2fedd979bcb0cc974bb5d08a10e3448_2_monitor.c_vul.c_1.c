static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int64_t VAR4 = FUN2(VAR5);
    FUN3(&VAR6);
    FUN4(VAR3->VAR7, VAR3->VAR8, VAR3->VAR9, VAR4);
    if (VAR3->VAR8)
    {
        FUN5(VAR3->VAR7, VAR3->VAR8);
        FUN6(VAR3->VAR8);
        VAR3->VAR8 = NULL;
    }
    VAR3->VAR9 = VAR4;
    FUN7(&VAR6);
}