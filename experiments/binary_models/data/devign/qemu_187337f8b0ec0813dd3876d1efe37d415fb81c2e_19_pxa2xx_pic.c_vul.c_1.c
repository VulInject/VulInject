VAR1 *FUN1(target_phys_addr_t VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    int VAR7;
    VAR1 *VAR8;
    VAR6 = (struct VAR5 *)FUN2(sizeof(struct VAR5));
    if (!VAR6)
        return NULL;
    VAR6->VAR9 = VAR4;
    VAR6->VAR2 = VAR2;
    VAR6->VAR10[0] = 0;
    VAR6->VAR10[1] = 0;
    VAR6->VAR11[0] = 0;
    VAR6->VAR11[1] = 0;
    VAR6->VAR12[0] = 0;
    VAR6->VAR12[1] = 0;
    VAR8 = FUN3(VAR13, VAR6, VAR14);
    VAR7 = FUN4(0, VAR15, VAR16, VAR6);
    FUN5(VAR2, 0x000fffff, VAR7);
    FUN6(VAR4, 6, VAR17, VAR18, VAR6);
    FUN7("", 0, 0, VAR19, VAR20, VAR6);
    return VAR8;
}