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
    assert(FUN4(VAR5.VAR8) == VAR4->VAR9);
    memcpy(VAR4->VAR10, VAR5.VAR8->VAR11, VAR4->VAR9);
    FUN5(&VAR5, true);
}