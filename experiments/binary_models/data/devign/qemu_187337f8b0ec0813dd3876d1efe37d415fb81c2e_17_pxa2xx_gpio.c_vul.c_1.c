struct VAR1 *FUN1(target_phys_addr_t VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8;
    struct VAR1 *VAR9;
    VAR9 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    memset(VAR9, 0, sizeof(struct VAR1));
    VAR9->VAR2 = VAR2;
    VAR9->VAR6 = VAR6;
    VAR9->VAR7 = VAR7;
    VAR9->VAR10 = VAR4;
    VAR8 = FUN3(0, VAR11, VAR12, VAR9);
    FUN4(VAR2, 0x00000fff, VAR8);
    FUN5("", 0, 0, VAR13, VAR14, VAR9);
    return VAR9;
}