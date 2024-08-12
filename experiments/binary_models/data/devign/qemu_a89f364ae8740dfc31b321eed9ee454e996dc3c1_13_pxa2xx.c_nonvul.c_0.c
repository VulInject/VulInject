static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    uint32_t VAR7 = VAR3;
    switch (VAR2)
    {
    case VAR8:
        if (!(VAR6->VAR9 & (1U << 31)))
        {
            FUN2(VAR6);
            VAR6->VAR9 = VAR7;
            FUN3(VAR6, VAR6->VAR10);
        }
        break;
    case VAR11:
        if ((VAR6->VAR10 ^ VAR7) & (1 << 15))
            FUN4(VAR6);
        if ((VAR6->VAR10 ^ VAR7) & (1 << 12))
            FUN5(VAR6);
        if (((VAR6->VAR10 ^ VAR7) & 0x4aac) | (VAR7 & ~0xdaac))
            FUN3(VAR6, VAR7);
        VAR6->VAR10 = (VAR7 & 0xdaac) | (VAR6->VAR10 & ~(VAR7 & ~0xdaac));
        FUN6(VAR6);
        break;
    case VAR12:
        VAR6->VAR13 = VAR7;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR14:
        VAR6->VAR15 = VAR7;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR16:
        VAR6->VAR17 = VAR7;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR18:
        VAR6->VAR19 = VAR7;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR20:
        VAR6->VAR21 = VAR7;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR22:
        FUN5(VAR6);
        VAR6->VAR23 = VAR7;
        VAR6->VAR24 = 0;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR25:
        VAR6->VAR26 = VAR7;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR27:
        VAR6->VAR28 = VAR7;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR29:
        FUN2(VAR6);
        VAR6->VAR30 = VAR7;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR31:
        FUN2(VAR6);
        VAR6->VAR32 = VAR7;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR33:
        VAR6->VAR34 = VAR7;
        break;
    case VAR35:
        FUN5(VAR6);
        VAR6->VAR24 = VAR7;
        FUN3(VAR6, VAR6->VAR10);
        break;
    case VAR36:
        FUN4(VAR6);
        VAR6->VAR37 = VAR7 & 0xffff;
        FUN3(VAR6, VAR6->VAR10);
        break;
    default:
        FUN7("" VAR38 "", VAR39, VAR2);
    }
}