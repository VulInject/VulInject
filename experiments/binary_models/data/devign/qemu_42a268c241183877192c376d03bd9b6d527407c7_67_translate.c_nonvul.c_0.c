static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, uint32_t VAR5)
{
    target_ulong VAR6;
    VAR6 = FUN2((VAR3 << 2), 26) + VAR2->VAR7;
    switch (VAR5)
    {
    case 0x00:
        FUN3(VAR8, VAR6);
        break;
    case 0x01:
        FUN3(VAR9[9], (VAR2->VAR7 + 8));
        FUN3(VAR8, VAR6);
        break;
    case 0x03:
    case 0x04:
    {
        VAR10 *VAR11 = FUN4();
        TCGv VAR12 = FUN5();
        FUN3(VAR8, VAR2->VAR7 + 8);
        FUN6(VAR12, VAR13, VAR14);
        FUN7(VAR5 == 0x03 ? VAR15 : VAR16, VAR12, VAR14, VAR11);
        FUN3(VAR8, VAR6);
        FUN8(VAR11);
        FUN9(VAR12);
    }
    break;
    case 0x11:
        FUN10(VAR8, VAR9[VAR4]);
        break;
    case 0x12:
        FUN3(VAR9[9], (VAR2->VAR7 + 8));
        FUN10(VAR8, VAR9[VAR4]);
        break;
    default:
        FUN11(VAR2);
        break;
    }
    VAR2->VAR17 = 2;
    VAR2->VAR18 |= VAR19;
    FUN12(VAR2);
}