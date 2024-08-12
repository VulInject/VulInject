static void FUN1(VAR1 *VAR2)
{
    static const MemoryRegionOps VAR3 = {
        .read = VAR4,
        .write = VAR5,
        .VAR6 = {
            .VAR7 = 1,
            .VAR8 = 4,
        },
        .VAR9 = VAR10,
    };
    static const MemoryRegionOps VAR11 = {
        .read = VAR12,
        .write = VAR13,
        .VAR6 = {
            .VAR7 = 1,
            .VAR8 = 4,
        },
        .VAR9 = VAR10,
    };
    static const MemoryRegionOps VAR14 = {
        .read = VAR15,
        .write = VAR16,
        .VAR6 = {
            .VAR7 = 1,
            .VAR8 = 4,
        },
        .VAR9 = VAR10,
    };
    static const MemoryRegionOps VAR17 = {
        .read = VAR18,
        .write = VAR19,
        .VAR6 = {
            .VAR7 = 1,
            .VAR8 = 4,
        },
        .VAR9 = VAR10,
    };
    FUN2(&VAR2->VAR20.VAR21, FUN3(VAR2), &VAR3, VAR2, "", VAR2->VAR20.VAR22);
    FUN2(&VAR2->VAR23.VAR21, FUN3(VAR2), &VAR11, VAR2, "", VAR2->VAR23.VAR22);
    FUN2(&VAR2->VAR24.VAR21, FUN3(VAR2), &VAR14, FUN4(&VAR2->VAR25), "", VAR2->VAR24.VAR22);
    FUN2(&VAR2->VAR26.VAR21, FUN3(VAR2), &VAR17, FUN4(&VAR2->VAR25), "", VAR2->VAR26.VAR22);
}