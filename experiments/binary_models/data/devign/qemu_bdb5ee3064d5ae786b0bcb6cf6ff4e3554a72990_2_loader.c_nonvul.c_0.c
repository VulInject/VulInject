static void FUN1(void *VAR1)
{
    VAR2 *VAR3;
    FUN2(VAR3, &VAR4, VAR5)
    {
        if (VAR3->VAR6)
        {
            continue;
        }
        if (VAR3->VAR7 == NULL)
        {
            continue;
        }
        FUN3(VAR3->VAR8, VAR3->VAR7, VAR3->VAR9);
        if (VAR3->VAR10)
        {
            FUN4(VAR3->VAR7);
            VAR3->VAR7 = NULL;
        }
    }
}