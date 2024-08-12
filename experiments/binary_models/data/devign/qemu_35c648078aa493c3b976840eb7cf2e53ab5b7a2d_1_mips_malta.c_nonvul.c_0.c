static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7 = 0;
    uint32_t VAR8;
    VAR8 = (VAR3 & 0xfffff);
    switch (VAR8)
    {
    case 0x00200:
        VAR7 = 0x00000000;
        break;
    case 0x00208:
        VAR7 = 0x00000012;
        VAR7 = 0x00000010;
        break;
    case 0x00210:
        VAR7 = 0x00;
        break;
    case 0x00408:
        VAR7 = VAR6->VAR9;
        break;
    case 0x00508:
        VAR7 = VAR6->VAR10;
        break;
    case 0x00a00:
        VAR7 = VAR6->VAR11;
        break;
    case 0x00a08:
        if (VAR6->VAR12)
            VAR7 = VAR6->VAR13;
        else
            VAR7 = 0x00;
        break;
    case 0x00b00:
        VAR7 = ((VAR6->VAR14 & ~1) | FUN2(&VAR15));
        break;
    case 0x00b08:
        VAR7 = VAR6->VAR16;
        break;
    case 0x00b10:
        VAR7 = VAR6->VAR13;
        break;
    case 0x00b18:
        VAR7 = VAR6->VAR12;
        break;
    default:
        FUN3("" VAR17 "", VAR3);
        break;
    }
    return VAR7;
}