void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    VAR3 &= VAR4;
    switch (VAR2->VAR5)
    {
    case VAR6:
    case VAR7:
        FUN2(VAR2, VAR3, 0);
        if (VAR2->VAR8 == 1)
            FUN2(VAR2, VAR3, 1);
        break;
    case VAR9:
    case VAR10:
        FUN3(VAR2, VAR3, VAR2->VAR11[VAR12]);
        break;
    case VAR13:
        FUN4(VAR2, "");
        break;
    case VAR14:
        FUN4(VAR2, "");
        break;
    case VAR15:
        FUN4(VAR2, "");
        break;
    case VAR16:
    case VAR17:
        VAR3 &= ~((VAR18)-1 << 28);
        FUN5(VAR2, VAR3 | (0x0 << 28));
        FUN5(VAR2, VAR3 | (0x1 << 28));
        FUN5(VAR2, VAR3 | (0x2 << 28));
        FUN5(VAR2, VAR3 | (0x3 << 28));
        FUN5(VAR2, VAR3 | (0x4 << 28));
        FUN5(VAR2, VAR3 | (0x5 << 28));
        FUN5(VAR2, VAR3 | (0x6 << 28));
        FUN5(VAR2, VAR3 | (0x7 << 28));
        FUN5(VAR2, VAR3 | (0x8 << 28));
        FUN5(VAR2, VAR3 | (0x9 << 28));
        FUN5(VAR2, VAR3 | (0xA << 28));
        FUN5(VAR2, VAR3 | (0xB << 28));
        FUN5(VAR2, VAR3 | (0xC << 28));
        FUN5(VAR2, VAR3 | (0xD << 28));
        FUN5(VAR2, VAR3 | (0xE << 28));
        FUN5(VAR2, VAR3 | (0xF << 28));
        break;
    case VAR19:
        FUN6(VAR2, 1);
        break;
    default:
        FUN4(VAR2, "");
        break;
    }
    FUN7(VAR2);
}