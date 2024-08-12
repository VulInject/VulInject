static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    AcpiBuildTables VAR4;
    if (!VAR3 || VAR3->VAR5)
    {
        return;
    }
    VAR3->VAR5 = 1;
    FUN2(&VAR4);
    FUN3(&VAR4, FUN4(FUN5()));
    FUN6(VAR3->VAR6, VAR4.VAR7);
    if (VAR3->VAR8)
    {
        memcpy(VAR3->VAR8, VAR4.VAR8->VAR9, FUN7(VAR4.VAR8));
    }
    else
    {
        FUN6(VAR3->VAR10, VAR4.VAR8);
    }
    FUN6(VAR3->VAR11, VAR4.VAR12->VAR13);
    FUN8(&VAR4, true);
}