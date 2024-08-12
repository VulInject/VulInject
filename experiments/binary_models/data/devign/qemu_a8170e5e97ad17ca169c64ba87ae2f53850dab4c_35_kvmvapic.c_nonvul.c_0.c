static void FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5)
{
    hwaddr VAR6;
    VAR7 *VAR8;
    uint8_t VAR9[2];
    uint32_t VAR10;
    if (VAR11 == 1)
    {
        VAR8 = &VAR2->VAR12.VAR13;
    }
    else
    {
        VAR8 = &VAR2->VAR12.VAR14;
    }
    FUN2();
    FUN3(VAR4, VAR5, VAR9, sizeof(VAR9), 0);
    switch (VAR9[0])
    {
    case 0x89:
        FUN4(VAR4, VAR5, 0x50 + FUN5(VAR9[1]));
        FUN6(VAR2, VAR4, VAR5 + 1, VAR8->VAR15);
        break;
    case 0x8b:
        FUN4(VAR4, VAR5, 0x90);
        FUN6(VAR2, VAR4, VAR5 + 1, VAR8->VAR16[FUN5(VAR9[1])]);
        break;
    case 0xa1:
        FUN6(VAR2, VAR4, VAR5, VAR8->VAR16[0]);
        break;
    case 0xa3:
        FUN6(VAR2, VAR4, VAR5, VAR8->VAR17);
        break;
    case 0xc7:
        FUN4(VAR4, VAR5, 0x68);
        FUN3(VAR4, VAR5 + 6, (void *)&VAR10, sizeof(VAR10), 0);
        FUN3(VAR4, VAR5 + 1, (void *)&VAR10, sizeof(VAR10), 1);
        FUN6(VAR2, VAR4, VAR5 + 5, VAR8->VAR15);
        break;
    case 0xff:
        FUN4(VAR4, VAR5, 0x50);
        FUN6(VAR2, VAR4, VAR5 + 1, VAR8->VAR18);
        break;
    default:
        FUN7();
    }
    FUN8();
    VAR6 = FUN9(VAR4, VAR5);
    VAR6 += VAR5 & ~VAR19;
    FUN10(VAR6, VAR6 + 1, 1);
}