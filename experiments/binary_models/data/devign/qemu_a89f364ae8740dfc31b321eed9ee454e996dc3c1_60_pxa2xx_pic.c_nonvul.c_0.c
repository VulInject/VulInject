static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    switch (VAR2)
    {
    case VAR7:
        VAR6->VAR8[0] = VAR3;
        break;
    case VAR9:
        VAR6->VAR8[1] = VAR3;
        break;
    case VAR10:
        VAR6->VAR11[0] = VAR3;
        break;
    case VAR12:
        VAR6->VAR11[1] = VAR3;
        break;
    case VAR13:
        VAR6->VAR14 = (VAR3 & 1) ? 0 : ~0;
        break;
    case VAR15 ... VAR16:
        VAR6->VAR17[0 + ((VAR2 - VAR15) >> 2)] = VAR3 & 0x8000003f;
        break;
    case VAR18 ... VAR19:
        VAR6->VAR17[32 + ((VAR2 - VAR18) >> 2)] = VAR3 & 0x8000003f;
        break;
    default:
        FUN2("" VAR20 "", VAR21, VAR2);
        return;
    }
    FUN3(VAR1);
}