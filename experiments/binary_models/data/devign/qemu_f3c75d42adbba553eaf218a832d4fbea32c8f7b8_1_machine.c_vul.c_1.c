static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    VAR7 *VAR8 = &VAR6->VAR8;
    unsigned int VAR9, VAR10;
    target_ulong VAR11;
    uint32_t VAR12;
    target_ulong VAR13;
    for (VAR9 = 0; VAR9 < 32; VAR9++)
        FUN2(VAR2, &VAR8->VAR14[VAR9]);
    for (VAR9 = 0; VAR9 < 32; VAR9++)
        FUN2(VAR2, &VAR8->VAR15[VAR9]);
    FUN2(VAR2, &VAR8->VAR16);
    FUN2(VAR2, &VAR8->VAR17);
    for (VAR9 = 0; VAR9 < 8; VAR9++)
        FUN3(VAR2, &VAR8->VAR18[VAR9]);
    FUN2(VAR2, &VAR13);
    FUN4(VAR8, VAR13);
    FUN2(VAR2, &VAR8->VAR19);
    FUN2(VAR2, &VAR8->VAR20);
    for (VAR9 = 0; VAR9 < 4; VAR9++)
        FUN2(VAR2, &VAR8->VAR21[VAR9]);
    for (VAR9 = 0; VAR9 < 32; VAR9++)
    {
        union
        {
            float64 VAR22;
            uint64_t VAR23;
        } VAR24;
        VAR24.VAR23 = FUN5(VAR2);
        VAR8->VAR25[VAR9] = VAR24.VAR22;
    }
    FUN3(VAR2, &VAR12);
    VAR8->VAR12 = VAR12;
    FUN6(VAR2, &VAR8->VAR26);
    FUN2(VAR2, &VAR8->VAR27[VAR28]);
    FUN6(VAR2, &VAR8->VAR29);
    FUN2(VAR2, &VAR11);
    for (VAR9 = 0; VAR9 < 32; VAR9++)
        FUN2(VAR2, &VAR8->VAR30[VAR9]);
    for (VAR9 = 0; VAR9 < 2; VAR9++)
        for (VAR10 = 0; VAR10 < 8; VAR10++)
            FUN2(VAR2, &VAR8->VAR31[VAR9][VAR10]);
    for (VAR9 = 0; VAR9 < 2; VAR9++)
        for (VAR10 = 0; VAR10 < 8; VAR10++)
            FUN2(VAR2, &VAR8->VAR32[VAR9][VAR10]);
    FUN6(VAR2, &VAR8->VAR33);
    FUN6(VAR2, &VAR8->VAR34);
    FUN6(VAR2, &VAR8->VAR35);
    FUN6(VAR2, &VAR8->VAR36);
    FUN6(VAR2, &VAR8->VAR37);
    FUN6(VAR2, &VAR8->VAR38);
    if (VAR8->VAR39.VAR40)
    {
        for (VAR9 = 0; VAR9 < VAR8->VAR33; VAR9++)
        {
            FUN2(VAR2, &VAR8->VAR39.VAR40[VAR9].VAR41);
            FUN2(VAR2, &VAR8->VAR39.VAR40[VAR9].VAR42);
            FUN2(VAR2, &VAR8->VAR39.VAR40[VAR9].VAR43);
        }
    }
    for (VAR9 = 0; VAR9 < 4; VAR9++)
        FUN2(VAR2, &VAR8->VAR44[VAR9]);
    for (VAR9 = 0; VAR9 < 1024; VAR9++)
        FUN2(VAR2, &VAR8->VAR27[VAR9]);
    FUN7(VAR8, VAR11);
    FUN3(VAR2, &VAR8->VAR45);
    FUN8(VAR2, &VAR8->VAR46);
    FUN3(VAR2, &VAR8->VAR47);
    FUN2(VAR2, &VAR8->VAR48);
    FUN3(VAR2, &VAR8->VAR49);
    FUN6(VAR2, &VAR8->VAR50);
    FUN3(VAR2, &VAR8->VAR51);
    FUN3(VAR2, &VAR8->VAR52);
    for (VAR9 = 0; VAR9 < VAR53; VAR9++)
        FUN2(VAR2, &VAR8->VAR54[VAR9]);
    FUN2(VAR2, &VAR8->VAR55);
    FUN2(VAR2, &VAR8->VAR56);
    FUN2(VAR2, &VAR8->VAR57);
    FUN2(VAR2, &VAR8->VAR58);
    FUN2(VAR2, &VAR8->VAR59);
    FUN2(VAR2, &VAR8->VAR60);
    FUN2(VAR2, &VAR8->VAR61);
    FUN6(VAR2, &VAR8->VAR62);
    FUN9(VAR2);
    return 0;
}