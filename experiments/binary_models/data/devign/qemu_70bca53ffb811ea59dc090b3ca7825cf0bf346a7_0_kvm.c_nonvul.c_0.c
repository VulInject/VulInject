const VAR1 *FUN1(void)
{
    uint32_t VAR2 = FUN2();
    const VAR1 *VAR3;
    VAR1 *VAR4;
    uint32_t VAR5 = FUN3();
    uint32_t VAR6 = FUN4();
    VAR3 = FUN5(VAR2);
    VAR4 = FUN6(sizeof(*VAR4));
    memcpy(VAR4, VAR3, sizeof(*VAR4));
    if (VAR5 != -1)
    {
        FUN7(&VAR4->VAR7, VAR8, VAR5 > 0);
        FUN7(&VAR4->VAR9, VAR10, VAR5 > 1);
    }
    if (VAR6 != -1)
    {
        FUN7(&VAR4->VAR9, VAR11, VAR6);
    }
    return VAR4;
}