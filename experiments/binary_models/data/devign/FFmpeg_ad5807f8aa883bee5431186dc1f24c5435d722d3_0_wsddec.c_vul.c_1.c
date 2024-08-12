static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6;
    int VAR7;
    uint32_t VAR8, VAR9, VAR10;
    char VAR11[VAR12];
    VAR6 = FUN2(VAR2, NULL);
    if (!VAR6)
        return FUN3(VAR13);
    FUN4(VAR4, 8);
    VAR7 = FUN5(VAR4);
    FUN6(VAR2, VAR14, "", VAR7 >> 4, VAR7 & 0xF);
    FUN4(VAR4, 11);
    if (VAR7 < 0x10)
    {
        VAR8 = 0x80;
        VAR9 = 0x800;
        FUN4(VAR4, 8);
    }
    else
    {
        VAR8 = FUN7(VAR4);
        VAR9 = FUN7(VAR4);
    }
    FUN4(VAR4, 4);
    FUN8(VAR11, FUN7(VAR4), 0);
    FUN9(&VAR2->VAR15, "", VAR11, 0);
    VAR6->VAR16->VAR17 = VAR18;
    VAR6->VAR16->VAR19 = VAR2->VAR20->VAR21;
    VAR6->VAR16->VAR22 = FUN7(VAR4) / 8;
    FUN4(VAR4, 4);
    VAR6->VAR16->VAR23 = FUN5(VAR4) & 0xF;
    VAR6->VAR16->VAR24 = VAR6->VAR16->VAR23 * VAR6->VAR16->VAR22 * 8LL;
    if (!VAR6->VAR16->VAR23)
        return VAR25;
    FUN4(VAR4, 3);
    VAR10 = FUN7(VAR4);
    if (!(VAR10 & 1))
    {
        int VAR26;
        for (VAR26 = 1; VAR26 < 32; VAR26++)
            if (VAR10 & (1 << VAR26))
                VAR6->VAR16->VAR27 |= FUN10(VAR2, VAR26);
    }
    FUN4(VAR4, 16);
    if (FUN7(VAR4))
        FUN11(VAR2, "");
    if (FUN12(VAR4, VAR8, VAR28) >= 0)
    {
        FUN13(VAR2, "", 128);
        FUN13(VAR2, "", 128);
        FUN13(VAR2, "", 128);
        FUN13(VAR2, "", 128);
        FUN13(VAR2, "", 128);
        FUN13(VAR2, "", 32);
        FUN13(VAR2, "", 32);
        FUN13(VAR2, "", 32);
        FUN13(VAR2, "", 512);
        FUN13(VAR2, "", 512);
    }
    return FUN12(VAR4, VAR9, VAR28);
}