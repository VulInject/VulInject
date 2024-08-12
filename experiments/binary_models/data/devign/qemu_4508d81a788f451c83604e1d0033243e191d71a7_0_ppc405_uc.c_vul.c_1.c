VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, uint32_t VAR6)
{
    ram_addr_t VAR7;
    int VAR8, VAR9;
    if (VAR5->VAR10 >= 0x01000000UL)
        VAR7 = 0x01000000UL - sizeof(struct VAR4);
    else
        VAR7 = VAR5->VAR10 - sizeof(struct VAR4);
    FUN2(VAR7 + 0x00, VAR5->VAR11);
    FUN2(VAR7 + 0x04, VAR5->VAR10);
    FUN2(VAR7 + 0x08, VAR5->VAR12);
    FUN2(VAR7 + 0x0C, VAR5->VAR13);
    FUN2(VAR7 + 0x10, VAR5->VAR14);
    FUN2(VAR7 + 0x14, VAR5->VAR15);
    FUN2(VAR7 + 0x18, VAR5->VAR16);
    FUN2(VAR7 + 0x1C, VAR5->VAR17);
    FUN2(VAR7 + 0x20, VAR5->VAR18);
    for (VAR8 = 0; VAR8 < 6; VAR8++)
        FUN3(VAR7 + 0x24 + VAR8, VAR5->VAR19[VAR8]);
    FUN4(VAR7 + 0x2A, VAR5->VAR20);
    FUN2(VAR7 + 0x2C, VAR5->VAR21);
    FUN2(VAR7 + 0x30, VAR5->VAR22);
    FUN2(VAR7 + 0x34, VAR5->VAR23);
    for (VAR8 = 0; VAR8 < 4; VAR8++)
        FUN3(VAR7 + 0x38 + VAR8, VAR5->VAR24[VAR8]);
    for (VAR8 = 0; VAR8 < 32; VAR8++)
        FUN3(VAR7 + 0x3C + VAR8, VAR5->VAR24[VAR8]);
    FUN2(VAR7 + 0x5C, VAR5->VAR25);
    FUN2(VAR7 + 0x60, VAR5->VAR26);
    for (VAR8 = 0; VAR8 < 6; VAR8++)
        FUN3(VAR7 + 0x64 + VAR8, VAR5->VAR27[VAR8]);
    VAR9 = 0x6A;
    if (VAR6 & 0x00000001)
    {
        for (VAR8 = 0; VAR8 < 6; VAR8++)
            FUN3(VAR7 + VAR9++, VAR5->VAR28[VAR8]);
    }
    FUN2(VAR7 + VAR9, VAR5->VAR29);
    VAR9 += 4;
    for (VAR8 = 0; VAR8 < 2; VAR8++)
    {
        FUN2(VAR7 + VAR9, VAR5->VAR30[VAR8]);
        VAR9 += 4;
    }
    return VAR7;
}