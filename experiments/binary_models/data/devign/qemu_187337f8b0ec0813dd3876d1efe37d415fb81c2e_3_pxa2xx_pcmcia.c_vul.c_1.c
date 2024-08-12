struct VAR1 *FUN1(target_phys_addr_t VAR2)
{
    int VAR3;
    struct VAR1 *VAR4;
    VAR4 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR4->VAR5 = VAR2 | 0x00000000;
    VAR3 = FUN3(0, VAR6, VAR7, VAR4);
    FUN4(VAR4->VAR5, 0x03ffffff, VAR3);
    VAR4->VAR8 = VAR2 | 0x08000000;
    VAR3 = FUN3(0, VAR9, VAR10, VAR4);
    FUN4(VAR4->VAR8, 0x03ffffff, VAR3);
    VAR4->VAR11 = VAR2 | 0x0c000000;
    VAR3 = FUN3(0, VAR12, VAR13, VAR4);
    FUN4(VAR4->VAR11, 0x03ffffff, VAR3);
    if (VAR2 == 0x30000000)
        VAR4->VAR14.VAR15 = "";
    else
        VAR4->VAR14.VAR15 = "";
    VAR4->VAR14.VAR16 = FUN5(VAR17, VAR4, 1)[0];
    FUN6(&VAR4->VAR14);
    return VAR4;
}