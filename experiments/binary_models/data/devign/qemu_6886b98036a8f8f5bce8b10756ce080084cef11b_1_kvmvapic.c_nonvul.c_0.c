static void FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5)
{
    VAR6 *VAR7 = FUN2(VAR4);
    VAR8 *VAR9 = &VAR4->VAR9;
    VAR10 *VAR11;
    uint8_t VAR12[2];
    uint32_t VAR13 = 0;
    target_ulong VAR14 = 0;
    target_ulong VAR15 = 0;
    uint32_t VAR16 = 0;
    if (VAR17 == 1)
    {
        VAR11 = &VAR2->VAR18.VAR19;
    }
    else
    {
        VAR11 = &VAR2->VAR18.VAR20;
    }
    if (!FUN3())
    {
        FUN4(VAR9, &VAR14, &VAR15, &VAR16);
    }
    FUN5();
    FUN6(VAR7, VAR5, VAR12, sizeof(VAR12), 0);
    switch (VAR12[0])
    {
    case 0x89:
        FUN7(VAR4, VAR5, 0x50 + FUN8(VAR12[1]));
        FUN9(VAR2, VAR4, VAR5 + 1, VAR11->VAR21);
        break;
    case 0x8b:
        FUN7(VAR4, VAR5, 0x90);
        FUN9(VAR2, VAR4, VAR5 + 1, VAR11->VAR22[FUN8(VAR12[1])]);
        break;
    case 0xa1:
        FUN9(VAR2, VAR4, VAR5, VAR11->VAR22[0]);
        break;
    case 0xa3:
        FUN9(VAR2, VAR4, VAR5, VAR11->VAR23);
        break;
    case 0xc7:
        FUN7(VAR4, VAR5, 0x68);
        FUN6(VAR7, VAR5 + 6, (void *)&VAR13, sizeof(VAR13), 0);
        FUN6(VAR7, VAR5 + 1, (void *)&VAR13, sizeof(VAR13), 1);
        FUN9(VAR2, VAR4, VAR5 + 5, VAR11->VAR21);
        break;
    case 0xff:
        FUN7(VAR4, VAR5, 0x50);
        FUN9(VAR2, VAR4, VAR5 + 1, VAR11->VAR24);
        break;
    default:
        FUN10();
    }
    FUN11();
    if (!FUN3())
    {
        FUN12(VAR7, VAR14, VAR15, VAR16, 1);
        FUN13(VAR7);
    }
}