void FUN1(VAR1 *VAR2, int VAR3, unsigned int VAR4, unsigned int VAR5)
{
    AVRational VAR6;
    if (FUN2(&VAR6.VAR7, &VAR6.VAR8, VAR4, VAR5, VAR9))
    {
        if (VAR6.VAR7 != VAR4)
            FUN3(NULL, VAR10, "", VAR2->VAR11, VAR4 / VAR6.VAR7);
    }
    else
        FUN3(NULL, VAR12, "", VAR2->VAR11);
    if (VAR6.VAR7 <= 0 || VAR6.VAR8 <= 0)
    {
        FUN3(NULL, VAR13, "", VAR6.VAR7, VAR6.VAR8, VAR2->VAR11);
        return;
    }
    VAR2->VAR14 = VAR6;
    VAR2->VAR3 = VAR3;
}