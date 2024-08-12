VAR1 FUN1(VAR2 *VAR3, vaddr VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    VAR7 *VAR8 = &VAR6->VAR8;
    mmu_ctx_t VAR9;
    switch (VAR8->VAR10)
    {
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
        return FUN3(VAR8, VAR4);
    case VAR15:
    case VAR16:
        return FUN4(VAR8, VAR4);
    default:;
    }
    if (FUN5(FUN6(VAR8, &VAR9, VAR4, 0, VAR17) != 0))
    {
        if (FUN5(FUN6(VAR8, &VAR9, VAR4, 0, VAR18) != 0))
        {
            return -1;
        }
    }
    return VAR9.VAR19 & VAR20;