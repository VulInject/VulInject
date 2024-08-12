void FUN1(VAR1 *VAR2, int VAR3, unsigned int VAR4, unsigned int VAR5)
{
    VAR2->VAR3 = VAR3;
    if (FUN2(&VAR2->VAR6.VAR7, &VAR2->VAR6.VAR8, VAR4, VAR5, VAR9))
    {
        if (VAR2->VAR6.VAR7 != VAR4)
            FUN3(NULL, VAR10, "", VAR2->VAR11, VAR4 / VAR2->VAR6.VAR7);
    }
    else
        FUN3(NULL, VAR12, "", VAR2->VAR11);
}