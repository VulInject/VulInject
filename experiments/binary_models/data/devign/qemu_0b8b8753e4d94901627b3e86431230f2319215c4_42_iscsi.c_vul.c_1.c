static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    VAR3->VAR4 = 1;
    if (VAR3->VAR5)
    {
        FUN2(VAR3->VAR5, NULL);
    }
}