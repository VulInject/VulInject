void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7;
    VAR3 &= VAR8;
    switch (VAR2->VAR9)
    {
    case VAR10:
    case VAR11:
        FUN3(VAR2, VAR3, 0);
        if (VAR2->VAR12 == 1)
        {
            FUN3(VAR2, VAR3, 1);
        }
        break;
    case VAR13:
        FUN4(FUN5(VAR5), "");
        break;
    case VAR14:
    case VAR15:
        VAR3 &= ~((VAR16)-1ULL << 28);
        VAR7 = FUN5(VAR5);
        FUN6(VAR7, VAR3 | (0x0 << 28));
        FUN6(VAR7, VAR3 | (0x1 << 28));
        FUN6(VAR7, VAR3 | (0x2 << 28));
        FUN6(VAR7, VAR3 | (0x3 << 28));
        FUN6(VAR7, VAR3 | (0x4 << 28));
        FUN6(VAR7, VAR3 | (0x5 << 28));
        FUN6(VAR7, VAR3 | (0x6 << 28));
        FUN6(VAR7, VAR3 | (0x7 << 28));
        FUN6(VAR7, VAR3 | (0x8 << 28));
        FUN6(VAR7, VAR3 | (0x9 << 28));
        FUN6(VAR7, VAR3 | (0xA << 28));
        FUN6(VAR7, VAR3 | (0xB << 28));
        FUN6(VAR7, VAR3 | (0xC << 28));
        FUN6(VAR7, VAR3 | (0xD << 28));
        FUN6(VAR7, VAR3 | (0xE << 28));
        FUN6(VAR7, VAR3 | (0xF << 28));
        break;
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
        FUN7(FUN5(VAR5), 1);
        break;
    default:
        assert(0);
    }
    FUN8(VAR2);
}