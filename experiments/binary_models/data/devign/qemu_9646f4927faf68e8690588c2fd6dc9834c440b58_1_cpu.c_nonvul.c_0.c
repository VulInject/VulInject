static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR7 *VAR8 = &VAR4->VAR8;
    target_ulong VAR9;
    uint64_t VAR10;
    int VAR11;
    VAR6->FUN4(VAR2);
    memset(VAR8, 0, FUN5(VAR7, VAR12));
    FUN6(VAR2, 1);
    VAR8->VAR13 = -1;
    VAR8->VAR14 |= VAR15;
    FUN7(VAR8, 0x60000010);
    VAR8->VAR16 = ~0x0;
    VAR8->VAR17 = 0x30000;
    VAR8->VAR18.VAR19 = 0xffff;
    VAR8->VAR20.VAR19 = 0xffff;
    VAR8->VAR21.VAR19 = 0xffff;
    VAR8->VAR21.VAR22 = VAR23 | (2 << VAR24);
    VAR8->VAR25.VAR19 = 0xffff;
    VAR8->VAR25.VAR22 = VAR23 | (11 << VAR24);
    FUN8(VAR8, VAR26, 0xf000, 0xffff0000, 0xffff, VAR23 | VAR27 | VAR28 | VAR29 | VAR30);
    FUN8(VAR8, VAR31, 0, 0, 0xffff, VAR23 | VAR27 | VAR32 | VAR30);
    FUN8(VAR8, VAR33, 0, 0, 0xffff, VAR23 | VAR27 | VAR32 | VAR30);
    FUN8(VAR8, VAR34, 0, 0, 0xffff, VAR23 | VAR27 | VAR32 | VAR30);
    FUN8(VAR8, VAR35, 0, 0, 0xffff, VAR23 | VAR27 | VAR32 | VAR30);
    FUN8(VAR8, VAR36, 0, 0, 0xffff, VAR23 | VAR27 | VAR32 | VAR30);
    VAR8->VAR37 = 0xfff0;
    VAR8->VAR38[VAR39] = VAR8->VAR40;
    VAR8->VAR41 = 0x2;
    for (VAR11 = 0; VAR11 < 8; VAR11++)
    {
        VAR8->VAR42[VAR11] = 1;
    }
    FUN9(VAR8, 0x37f);
    VAR8->VAR43 = 0x1f80;
    VAR8->VAR44 = 0;
    VAR8->VAR45 = 0x0007040600070406ULL;
    VAR8->VAR46 = VAR47;
    memset(VAR8->VAR48, 0, sizeof(VAR8->VAR48));
    VAR8->VAR48[6] = VAR49;
    VAR8->VAR48[7] = VAR50;
    FUN10(VAR2, VAR51);
    FUN11(VAR2, VAR51);
    VAR9 = 0;
    VAR10 = VAR52;
    if (VAR8->VAR53[VAR54] & VAR55)
    {
        VAR10 |= VAR56;
    }
    for (VAR11 = 2; VAR11 < FUN12(VAR57); VAR11++)
    {
        const VAR58 *VAR59 = &VAR57[VAR11];
        if (VAR8->VAR53[VAR59->VAR60] & VAR59->VAR61)
        {
            VAR10 |= 1ull << VAR11;
        }
    }
    if (VAR8->VAR53[VAR62] & VAR63)
    {
        VAR9 |= VAR64 | VAR65;
    }
    if (VAR8->VAR53[VAR66] & VAR67)
    {
        VAR9 |= VAR68;
    }
    VAR8->VAR10 = VAR10;
    FUN13(VAR8, VAR9);
    VAR8->VAR69 = 0;
    memset(VAR8->VAR70, 0, sizeof(VAR8->VAR70));
    memset(VAR8->VAR71, 0, sizeof(VAR8->VAR71));
    FUN14(VAR4->VAR72, VAR2->VAR73 == 0);
    VAR2->VAR74 = !FUN15(VAR4);
    if (FUN16())
    {
        FUN17(VAR4);
    }
}