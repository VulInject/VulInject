static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = FUN2(VAR4);
    FUN3(&VAR4->VAR7, VAR4->VAR8, VAR4->VAR9);
    FUN4(&VAR4->VAR10, VAR4->VAR9);
    if (VAR4->VAR11)
    {
        if (!FUN5(VAR4, VAR12))
        {
            FUN6("");
            FUN7(VAR6, &VAR4->VAR13, &VAR4->VAR13);
            VAR4->VAR11 = false;
            return -1;
        }
    }
    return 0;