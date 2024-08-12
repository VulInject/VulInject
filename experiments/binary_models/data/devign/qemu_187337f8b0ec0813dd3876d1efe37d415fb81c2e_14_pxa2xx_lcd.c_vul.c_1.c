struct VAR1 *FUN1(target_phys_addr_t VAR2, qemu_irq VAR3, VAR4 *VAR5)
{
    int VAR6;
    struct VAR1 *VAR7;
    VAR7 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR7->VAR2 = VAR2;
    VAR7->VAR8 = 1;
    VAR7->VAR3 = VAR3;
    VAR7->VAR5 = VAR5;
    FUN3(VAR7, VAR9);
    VAR6 = FUN4(0, VAR10, VAR11, VAR7);
    FUN5(VAR2, 0x000fffff, VAR6);
    FUN6(VAR5, VAR12, VAR13, VAR14, VAR7);
    switch (VAR7->VAR5->VAR15)
    {
    case 0:
        VAR7->VAR16 = 0;
        break;
    case 8:
        VAR7->VAR17[0] = VAR18;
        VAR7->VAR17[1] = VAR19;
        VAR7->VAR16 = 1;
        break;
    case 15:
        VAR7->VAR17[0] = VAR20;
        VAR7->VAR17[1] = VAR21;
        VAR7->VAR16 = 2;
        break;
    case 16:
        VAR7->VAR17[0] = VAR22;
        VAR7->VAR17[1] = VAR23;
        VAR7->VAR16 = 2;
        break;
    case 24:
        VAR7->VAR17[0] = VAR24;
        VAR7->VAR17[1] = VAR25;
        VAR7->VAR16 = 3;
        break;
    case 32:
        VAR7->VAR17[0] = VAR26;
        VAR7->VAR17[1] = VAR27;
        VAR7->VAR16 = 4;
        break;
    default:
        fprintf(VAR28, "", VAR29);
        FUN7(1);
    }
    FUN8("", 0, 0, VAR30, VAR31, VAR7);
    return VAR7;
}