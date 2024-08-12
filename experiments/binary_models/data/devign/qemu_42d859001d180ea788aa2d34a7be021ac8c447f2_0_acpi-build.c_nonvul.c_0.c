static void FUN1(void *VAR1, uint32_t VAR2)
{
    VAR3 *VAR4 = VAR1;
    AcpiBuildTables VAR5;
    if (!VAR4 || VAR4->VAR6)
    {
        return;
    }
    VAR4->VAR6 = 1;
    FUN2(&VAR5);
    FUN3(VAR4->VAR7, &VAR5);
    FUN4(VAR4->VAR8, VAR5.VAR9);
    if (VAR4->VAR10)
    {
        memcpy(VAR4->VAR10, VAR5.VAR10->VAR11, FUN5(VAR5.VAR10));
    }
    else
    {
        FUN4(VAR4->VAR12, VAR5.VAR10);
    }
    FUN4(VAR4->VAR13, VAR5.VAR14);
    FUN6(&VAR5, true);
}