void *FUN1(VAR1 *VAR2, target_phys_addr_t VAR3, int VAR4)
{
    struct VAR5 *VAR6 = NULL;
    struct VAR7 *VAR8 = NULL;
    FUN2(VAR2, "");
    VAR6 = FUN3(sizeof *VAR6 * 2);
    VAR8 = FUN3(sizeof *VAR8);
    VAR6[0].VAR9.VAR10 = VAR11;
    VAR6[0].VAR9.VAR12 = VAR8;
    VAR6[1].VAR9.VAR12 = VAR8;
    VAR6[1].VAR9.VAR13 = NULL;
    VAR8->VAR14 = VAR6;
    VAR8->VAR15 = VAR6 + 1;
    VAR8->VAR4 = VAR4 & 0x1f;
    FUN4(&VAR8->VAR16);
    FUN5(&VAR8->VAR17, &VAR8->VAR16, VAR8->VAR4);
    VAR8->VAR18 = FUN6(VAR19, VAR20, VAR8);
    FUN7(VAR3, 0x5c, VAR8->VAR18);
    VAR8->VAR21 = FUN8(VAR2->VAR22, VAR2->VAR23, VAR2->VAR24, VAR25, VAR26, NULL, VAR27, VAR8);
    VAR8->VAR21->VAR12 = VAR8;
    VAR8->VAR21->VAR28 = VAR29;
    return VAR6;
}