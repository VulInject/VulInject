static struct VAR1 *FUN1(target_phys_addr_t VAR2, VAR3 *VAR4, omap_clk VAR5)
{
    int VAR6;
    struct VAR1 *VAR7 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR7->VAR4 = VAR4[0];
    VAR7->VAR8 = VAR4[1];
    VAR7->VAR5 = FUN3(VAR9, VAR10, VAR7);
    FUN4(VAR7);
    VAR6 = FUN5(VAR11, VAR12, VAR7, VAR13);
    FUN6(VAR2, 0x800, VAR6);
    return VAR7;
}