static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7;
    switch (VAR3 & 0xffff)
    {
    case 0x30 ... 0x4f:
        VAR7 = 0;
        break;
    case 0x200 ... 0x20b:
        VAR7 = VAR6->VAR8[(VAR3 & 0xf) >> 2];
        break;
    case 0x20c ... 0x3ff:
        VAR7 = 0;
        break;
    case 0xc00 ... 0xc3f:
        if (VAR3 & 4)
        {
            VAR7 = VAR6->VAR9[(VAR3 & 0x3f) >> 3];
        }
        else
        {
            VAR7 = 0;
        }
        break;
    case 0x1000 ... 0x1080:
        if (VAR3 & 4)
        {
            VAR7 = VAR6->VAR10[(VAR3 & 0xff) >> 3];
        }
        else
        {
            VAR7 = 0;
        }
        break;
    case 0x2000 ... 0x202f:
        VAR7 = VAR6->VAR11[(VAR3 & 0x3f) >> 2];
        break;
    case 0xf020 ... 0xf027:
        if (VAR3 & 4)
        {
            VAR7 = VAR6->VAR12;
        }
        else
        {
            VAR7 = 0;
        }
        break;
    case 0x5000 ... 0x51cf:
    case 0xa400 ... 0xa67f:
    case 0xa800 ... 0xa80f:
    case 0xf000 ... 0xf01f:
    default:
        VAR7 = 0;
        break;
    }
    FUN2("" VAR13 "", VAR14, VAR3, VAR7);
    return VAR7;
}