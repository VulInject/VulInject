int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    int VAR7;
    uint32_t VAR8;
    if (VAR4 != 5)
        return -VAR9;
    for (VAR7 = 0; VAR7 < 8; VAR7++)
        FUN2(VAR2, &VAR6->VAR10[VAR7]);
    FUN3(VAR2, &VAR6->VAR11);
    for (VAR7 = 0; VAR7 < VAR6->VAR11 * 16; VAR7++)
        FUN2(VAR2, &VAR6->VAR12[VAR7]);
    for (VAR7 = 0; VAR7 < VAR13; VAR7++)
    {
        union
        {
            float32 VAR2;
            uint32_t VAR7;
        } VAR14;
        VAR14.VAR7 = FUN4(VAR2);
        VAR6->VAR15[VAR7] = VAR14.VAR2;
    }
    FUN2(VAR2, &VAR6->VAR16);
    FUN2(VAR2, &VAR6->VAR17);
    FUN2(VAR2, &VAR6->VAR18);
    VAR8 = FUN4(VAR2);
    VAR6->VAR19 = 0;
    FUN5(VAR6, VAR8);
    FUN2(VAR2, &VAR6->VAR20);
    FUN2(VAR2, &VAR6->VAR21);
    VAR8 = FUN4(VAR2);
    VAR6->VAR22 = VAR8;
    FUN3(VAR2, &VAR6->VAR23);
    FUN3(VAR2, &VAR6->VAR24);
    for (VAR7 = 0; VAR7 < 32; VAR7++)
        FUN3(VAR2, &VAR6->VAR25[VAR7]);
    FUN6(VAR2, &VAR6->VAR26);
    for (VAR7 = 0; VAR7 < 16; VAR7++)
    {
        FUN6(VAR2, &VAR6->VAR27[VAR7]);
        FUN6(VAR2, &VAR6->VAR28[VAR7]);
    }
    for (VAR7 = 0; VAR7 < 64; VAR7++)
    {
        FUN6(VAR2, &VAR6->VAR29[VAR7].VAR30);
        FUN6(VAR2, &VAR6->VAR29[VAR7].VAR31);
        FUN6(VAR2, &VAR6->VAR32[VAR7].VAR30);
        FUN6(VAR2, &VAR6->VAR32[VAR7].VAR31);
    }
    FUN3(VAR2, &VAR6->VAR33);
    for (VAR7 = 0; VAR7 < VAR34; VAR7++)
    {
        FUN6(VAR2, &VAR6->VAR35[VAR7].VAR36);
        FUN6(VAR2, &VAR6->VAR35[VAR7].VAR37);
        FUN6(VAR2, &VAR6->VAR35[VAR7].VAR38);
        FUN3(VAR2, &VAR6->VAR35[VAR7].VAR39);
    }
    FUN3(VAR2, &VAR6->VAR40);
    FUN3(VAR2, &VAR6->VAR41);
    FUN3(VAR2, &VAR6->VAR42);
    FUN3(VAR2, &VAR6->VAR43);
    VAR6->VAR44 = &VAR6->VAR35[VAR6->VAR43 & VAR45];
    FUN3(VAR2, &VAR6->VAR46);
    FUN3(VAR2, &VAR6->VAR47);
    FUN3(VAR2, &VAR6->VAR48);
    FUN3(VAR2, &VAR6->VAR49);
    FUN3(VAR2, &VAR6->VAR50);
    for (VAR7 = 0; VAR7 < 8; VAR7++)
        FUN6(VAR2, &VAR6->VAR51[VAR7]);
    for (VAR7 = 0; VAR7 < 8; VAR7++)
        FUN6(VAR2, &VAR6->VAR52[VAR7]);
    for (VAR7 = 0; VAR7 < 8; VAR7++)
        FUN6(VAR2, &VAR6->VAR53[VAR7]);
    for (VAR7 = 0; VAR7 < 8; VAR7++)
        FUN6(VAR2, &VAR6->VAR54[VAR7]);
    FUN6(VAR2, &VAR6->VAR55);
    FUN6(VAR2, &VAR6->VAR56);
    FUN6(VAR2, &VAR6->VAR57);
    FUN7(VAR2, VAR6->VAR58);
    FUN7(VAR2, VAR6->VAR59);
    FUN6(VAR2, &VAR6->VAR60);
    FUN3(VAR2, &VAR6->VAR61);
    FUN6(VAR2, &VAR6->VAR62);
    for (VAR7 = 0; VAR7 < VAR34; VAR7++)
        FUN6(VAR2, &VAR6->VAR63[VAR7]);
    FUN6(VAR2, &VAR6->VAR64);
    FUN6(VAR2, &VAR6->VAR65);
    FUN6(VAR2, &VAR6->VAR66);
    FUN6(VAR2, &VAR6->VAR67);
    FUN6(VAR2, &VAR6->VAR68);
    FUN7(VAR2, VAR6->VAR69);
    FUN8(VAR6, 1);
    return 0;
}