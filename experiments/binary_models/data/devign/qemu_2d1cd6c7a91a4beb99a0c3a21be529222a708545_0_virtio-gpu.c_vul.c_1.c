static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4, uint32_t VAR5)
{
    uint32_t VAR6, VAR7;
    uint32_t VAR8, *VAR9;
    VAR9 = FUN2(VAR5, &VAR6, &VAR7);
    if (!VAR9)
    {
        return;
    }
    if (VAR6 != VAR4->VAR10->VAR6 || VAR7 != VAR4->VAR10->VAR7)
    {
        return;
    }
    VAR8 = VAR4->VAR10->VAR6 * VAR4->VAR10->VAR7;
    memcpy(VAR4->VAR10->VAR9, VAR9, VAR8 * sizeof(VAR11));