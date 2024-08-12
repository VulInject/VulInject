static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (FUN2())
    {
        if (!FUN3(VAR3))
        {
            FUN4();
        }
    }
    else
    {
        if (!FUN5(VAR3))
        {
            FUN4();
        }
    }
    VAR3->VAR4 = VAR3->VAR5;
    memcpy(VAR3->VAR6, VAR3->VAR7, VAR3->VAR5 * sizeof(VAR8));
    memcpy(VAR3->VAR9, VAR3->VAR10, VAR3->VAR5 * sizeof(VAR8));
}