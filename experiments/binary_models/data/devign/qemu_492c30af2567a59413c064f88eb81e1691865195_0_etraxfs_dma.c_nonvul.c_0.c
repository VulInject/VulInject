void *FUN1(VAR1 *VAR2, target_phys_addr_t VAR3, int VAR4)
{
    struct VAR5 *VAR6 = NULL;
    int VAR7;
    VAR6 = FUN2(sizeof *VAR6);
    if (!VAR6)
        return NULL;
    VAR6->VAR8 = FUN3(VAR9, VAR6);
    FUN4(VAR6->VAR8);
    VAR6->VAR3 = VAR3;
    VAR6->VAR2 = VAR2;
    VAR6->VAR4 = VAR4;
    VAR6->VAR10 = FUN2(sizeof VAR6->VAR10[0] * VAR4);
    if (!VAR6->VAR10)
        goto VAR11;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        VAR6->VAR10[VAR7].VAR12 = FUN5(0, VAR13, VAR14, VAR6);
        FUN6(VAR3 + VAR7 * 0x2000, sizeof VAR6->VAR10[VAR7].VAR15, VAR6->VAR10[VAR7].VAR12);
    }
    return VAR6;
VAR11:
    FUN7(VAR6->VAR10);
    FUN7(VAR6);
    return NULL;
}