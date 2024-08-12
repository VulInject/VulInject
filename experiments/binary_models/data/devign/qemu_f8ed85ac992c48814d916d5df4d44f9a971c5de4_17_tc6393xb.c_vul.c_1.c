VAR1 *FUN1(VAR2 *VAR3, uint32_t VAR4, qemu_irq VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8;
    static const MemoryRegionOps VAR9 = {
        .read = VAR10,
        .write = VAR11,
        .VAR12 = VAR13,
        .VAR14 = {
            .VAR15 = 1,
            .VAR16 = 1,
        },
    };
    VAR6 = (VAR1 *)FUN2(sizeof(VAR1));
    VAR6->VAR5 = VAR5;
    VAR6->VAR17 = FUN3(VAR18, VAR6, VAR19);
    VAR6->VAR20 = FUN4(VAR21, VAR6, 0);
    VAR6->VAR22 = 1;
    VAR6->VAR23 = FUN3(VAR24, VAR6, VAR25);
    VAR8 = FUN5(VAR26, 0, 0);
    VAR6->VAR27 = FUN6(VAR8 ? FUN7(VAR8) : NULL, VAR28, 0x76);
    FUN8(&VAR6->VAR29, NULL, &VAR9, VAR6, "", 0x10000);
    FUN9(VAR3, VAR4, &VAR6->VAR29);
    FUN10(&VAR6->VAR30, NULL, "", 0x100000, &VAR31);
    FUN11(&VAR6->VAR30);
    VAR6->VAR32 = FUN12(&VAR6->VAR30);
    FUN9(VAR3, VAR4 + 0x100000, &VAR6->VAR30);
    VAR6->VAR33 = 480;
    VAR6->VAR34 = 640;
    VAR6->VAR35 = FUN13(NULL, 0, &VAR36, VAR6);
    return VAR6;
}