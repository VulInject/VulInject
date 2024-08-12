static VAR1 FUN1(abi_ulong VAR2, int argc, int VAR3, struct VAR4 *VAR5, struct VAR6 *VAR7, struct VAR6 *VAR8)
{
    abi_ulong VAR9;
    abi_ulong VAR10, VAR11, VAR12, VAR13;
    int VAR14;
    int VAR15;
    abi_ulong VAR16;
    uint8_t VAR17[16];
    abi_ulong VAR18;
    const char *VAR19;
    const int VAR20 = sizeof(VAR21);
    VAR9 = VAR2;
    if (FUN2(VAR5))
    {
        VAR9 &= ~3;
        VAR9 = FUN3(VAR7, VAR9);
        VAR7->VAR22 = VAR8;
        if (VAR8)
        {
            VAR8->VAR22 = VAR7;
            VAR9 = FUN3(VAR8, VAR9);
        }
    }
    VAR18 = 0;
    VAR19 = VAR23;
    if (VAR19)
    {
        size_t VAR24 = strlen(VAR19) + 1;
        if (VAR25)
        {
            VAR9 -= (VAR24 + VAR20 - 1) & ~(VAR20 - 1);
            VAR18 = VAR9;
            FUN4(VAR9, VAR19, VAR24);
        }
        else
        {
            FUN4(VAR9, VAR19, VAR24);
            VAR18 = VAR9;
            VAR9 += VAR24 + 1;
        }
    }
    if (VAR25)
    {
        VAR9 = FUN5(VAR9, 16);
    }
    else
    {
        VAR9 = FUN6(VAR9, 16);
    }
    for (VAR15 = 0; VAR15 < 16; VAR15++)
    {
        VAR17[VAR15] = rand();
    }
    if (VAR25)
    {
        VAR9 -= 16;
        VAR16 = VAR9;
        FUN4(VAR9, VAR17, 16);
    }
    else
    {
        FUN4(VAR9, VAR17, 16);
        VAR16 = VAR9;
        VAR9 += 16;
    }
    VAR14 = (VAR26 + 1) * 2;
    if (VAR19)
        VAR14 += 2;
    VAR14 += VAR27 * 2;
    VAR14 += 2;
    VAR14 += VAR3 + argc + 2;
    VAR14 += 1;
    VAR14 *= VAR20;
    if (VAR25)
    {
        VAR10 = FUN5(VAR9 - VAR14, VAR28);
        VAR9 = VAR10;
    }
    else
    {
        VAR10 = VAR9;
        VAR9 = FUN6(VAR9 + VAR14, VAR28);
    }
    VAR11 = VAR10 + VAR20;
    VAR12 = VAR11 + (argc + 1) * VAR20;
    VAR13 = VAR12 + (VAR3 + 1) * VAR20;
    VAR7->VAR29 = VAR13;
    VAR7->VAR30 = VAR11;
    VAR7->VAR31 = VAR11 + argc * VAR20;
    FUN7(VAR32, VAR13);
    VAR13 += VAR20;
    FUN7(VAR33, VAR13);
    VAR13 += VAR20;
}
while (0)
    VAR34;
FUN8(VAR35, (VAR1)(VAR7->VAR36 + VAR5->VAR37));
FUN8(VAR38, (VAR1)(sizeof(struct VAR39)));
FUN8(VAR40, (VAR1)(VAR5->VAR41));
FUN8(VAR42, (VAR1)(FUN9(VAR43, FUN10())));
FUN8(VAR44, (VAR1)(VAR8 ? VAR8->VAR36 : 0));
FUN8(VAR45, (VAR1)0);
FUN8(VAR46, VAR7->VAR47);
FUN8(VAR48, (VAR1)FUN11());
FUN8(VAR49, (VAR1)FUN12());
FUN8(VAR50, (VAR1)FUN13());
FUN8(VAR51, (VAR1)FUN14());
FUN8(VAR52, (VAR1)VAR53);
FUN8(VAR54, (VAR1)FUN15(VAR55));
FUN8(VAR56, (VAR1)VAR16);
FUN8(VAR57, (VAR1)VAR58);
if (VAR18)
{
    FUN8(VAR59, VAR18);
}
FUN8(VAR60, 0);
VAR7->VAR61 = VAR11 - VAR7->VAR29;
FUN7(argc, VAR10);
VAR2 = VAR7->VAR62;
for (VAR15 = 0; VAR15 < argc; ++VAR15)
{
    FUN7(VAR2, VAR11);
    VAR11 += VAR20;
    VAR2 += FUN16(VAR2) + 1;
}
FUN7(0, VAR11);
VAR2 = VAR7->VAR63;
for (VAR15 = 0; VAR15 < VAR3; ++VAR15)
{
    FUN7(VAR2, VAR12);
    VAR12 += VAR20;
    VAR2 += FUN16(VAR2) + 1;
}
FUN7(0, VAR12);
return VAR9;
}