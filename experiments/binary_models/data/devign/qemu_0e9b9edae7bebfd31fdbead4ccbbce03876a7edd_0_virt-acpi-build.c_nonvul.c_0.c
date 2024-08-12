static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    AcpiBuildTables VAR4;
    if (!VAR3 || VAR3->VAR5)
    {
        return;
    }
    VAR3->VAR5 = true;
    FUN2(&VAR4);
    FUN3(VAR3->VAR6, &VAR4);
    FUN4(VAR3->VAR7, VAR4.VAR8);
    FUN4(VAR3->VAR9, VAR4.VAR10);
    FUN4(VAR3->VAR11, VAR4.VAR12->VAR13);
    FUN5(&VAR4, true);
}