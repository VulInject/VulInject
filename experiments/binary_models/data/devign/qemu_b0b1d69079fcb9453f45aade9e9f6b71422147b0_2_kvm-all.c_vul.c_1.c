static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    if (VAR5->VAR6)
    {
        FUN2(VAR5);
        VAR5->VAR6 = 0;
    }
    VAR3->VAR7 = FUN3(VAR5, VAR8, &VAR3->VAR9);
}