int FUN1(VAR1 *VAR2, uint32_t VAR3, void *VAR4)
{
    int VAR5, VAR6, VAR7;
    char VAR8[256];
    uint32_t VAR9[] = {FUN2(0), FUN2(0xff)};
    struct
    {
        uint32_t VAR10;
        uint64_t VAR11;
        uint64_t VAR12;
        uint64_t VAR13;
    } QEMU_PACKED VAR14[] = {
        {
            FUN2(FUN3(1)),
            FUN4(0),
            FUN4(VAR2->VAR15),
            FUN4(FUN5(&VAR2->VAR16)),
        },
        {
            FUN2(FUN3(2)),
            FUN4(VAR17),
            FUN4(VAR2->VAR18),
            FUN4(FUN5(&VAR2->VAR19)),
        },
    };
    uint64_t VAR20[] = {FUN4(VAR2->VAR21), 0};
    uint32_t VAR22[] = {FUN2(FUN6(-1) | FUN7(0)), 0x0, 0x0, FUN2(-1)};
    uint32_t VAR23[VAR24 * VAR25][7];
    sprintf(VAR8, "" VAR26, VAR2->VAR21);
    VAR5 = FUN8(VAR4, 0, VAR8);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    do
    {
        int VAR27 = (VAR28);
        if (VAR27 < 0)
        {
            return VAR27;
        }
    } while (0) FUN9(FUN10(VAR4, VAR5, "", ""));
    FUN9(FUN10(VAR4, VAR5, "", ""));
    FUN9(FUN11(VAR4, VAR5, "", 0x3));
    FUN9(FUN11(VAR4, VAR5, "", 0x2));
    FUN9(FUN11(VAR4, VAR5, "", 0x1));
    FUN9(FUN12(VAR4, VAR5, "", NULL, 0));
    FUN9(FUN12(VAR4, VAR5, "", &VAR9, sizeof(VAR9)));
    FUN9(FUN12(VAR4, VAR5, "", &VAR14, sizeof(VAR14)));
    FUN9(FUN12(VAR4, VAR5, "", &VAR20, sizeof(VAR20)));
    FUN9(FUN11(VAR4, VAR5, "", 0x1));
    FUN9(FUN12(VAR4, VAR5, "", &VAR22, sizeof(VAR22)));
    for (VAR6 = 0; VAR6 < VAR24; VAR6++)
    {
        for (VAR7 = 0; VAR7 < VAR25; VAR7++)
        {
            VAR29 *VAR30 = VAR23[VAR6 * VAR25 + VAR7];
            int VAR31 = FUN13(VAR6, VAR7);
            VAR30[0] = FUN2(FUN6(VAR6) | FUN7(0));
            VAR30[1] = 0;
            VAR30[2] = 0;
            VAR30[3] = FUN2(VAR7 + 1);
            VAR30[4] = FUN2(VAR3);
            VAR30[5] = FUN2(VAR2->VAR32[VAR31].VAR33);
            VAR30[6] = FUN2(0x8);
        }
    }
    FUN9(FUN12(VAR4, VAR5, "", &VAR23, sizeof(VAR23)));
    FUN14(FUN15(VAR2), VAR34, &((VAR35){.VAR4 = VAR4, .VAR36 = VAR5}));
    return 0;