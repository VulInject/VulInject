FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11;
    int VAR12, VAR13, VAR14;
    uint64_t VAR15, VAR16, VAR17;
    VAR18 *VAR19 = FUN2(VAR6);
    const VAR20 *VAR21 = VAR19->FUN3(VAR6);
    VAR22 *VAR23 = FUN4(VAR6);
    ram_addr_t VAR24 = FUN5(FUN6(VAR23), VAR25, NULL);
    VAR12 = VAR2->VAR26;
    VAR8 = FUN7(VAR2, sizeof *VAR8);
    VAR8->VAR27 = FUN8(1);
    for (VAR11 = 0; VAR11 < VAR21->VAR26; VAR11++)
    {
        int VAR28 = VAR21->VAR29[VAR11].VAR30.VAR28;
        uint32_t VAR31 = VAR21->VAR29[VAR11].VAR32;
        if (VAR31 < 255)
        {
            VAR33 *VAR34;
            VAR34 = FUN7(VAR2, sizeof *VAR34);
            VAR34->VAR35 = VAR36;
            VAR34->VAR37 = sizeof(*VAR34);
            VAR34->VAR38 = VAR31;
            VAR34->VAR39 = VAR28;
            memset(VAR34->VAR40, 0, 3);
            VAR34->VAR41 = 0;
            VAR34->VAR42 = FUN8(1);
        }
        else
        {
            VAR43 *VAR34;
            VAR34 = FUN7(VAR2, sizeof *VAR34);
            VAR34->VAR35 = VAR44;
            VAR34->VAR37 = sizeof(*VAR34);
            VAR34->VAR45 = FUN8(VAR31);
            VAR34->VAR46 = FUN8(VAR28);
            VAR34->VAR42 = FUN8(1);
        }
    }
    VAR17 = 0;
    VAR13 = VAR2->VAR26;
    VAR10 = FUN7(VAR2, sizeof *VAR10);
    FUN9(VAR10, 0, 640 * 1024, 0, VAR47);
    VAR17 = 1024 * 1024;
    for (VAR11 = 1; VAR11 < VAR23->VAR48 + 1; ++VAR11)
    {
        VAR16 = VAR17;
        VAR15 = VAR23->VAR49[VAR11 - 1];
        if (VAR11 == 1)
        {
            VAR15 -= 1024 * 1024;
        }
        VAR17 = VAR16 + VAR15;
        if (VAR16 <= VAR23->VAR50 && VAR17 > VAR23->VAR50)
        {
            VAR15 -= VAR17 - VAR23->VAR50;
            if (VAR15 > 0)
            {
                VAR10 = FUN7(VAR2, sizeof *VAR10);
                FUN9(VAR10, VAR16, VAR15, VAR11 - 1, VAR47);
            }
            VAR16 = 1ULL << 32;
            VAR15 = VAR17 - VAR23->VAR50;
            VAR17 += (1ULL << 32) - VAR23->VAR50;
        }
        VAR10 = FUN7(VAR2, sizeof *VAR10);
        FUN9(VAR10, VAR16, VAR15, VAR11 - 1, VAR47);
    }
    VAR14 = (VAR2->VAR26 - VAR13) / sizeof *VAR10;
    for (; VAR14 < VAR23->VAR48 + 2; VAR14++)
    {
        VAR10 = FUN7(VAR2, sizeof *VAR10);
        FUN9(VAR10, 0, 0, 0, VAR51);
    }
    if (VAR24)
    {
        VAR10 = FUN7(VAR2, sizeof *VAR10);
        FUN9(VAR10, VAR23->VAR52.VAR53, VAR24, VAR23->VAR48 - 1, VAR54 | VAR47);
    }
    FUN10(VAR4, VAR2, (void *)(VAR2->VAR55 + VAR12), "", VAR2->VAR26 - VAR12, 1, NULL, NULL);
}