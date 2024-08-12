static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint64_t VAR7 = 0;
    switch (VAR3)
    {
    case 0x0000:
        VAR7 = VAR6->VAR8.VAR9[0].VAR10;
        break;
    case 0x0040:
        VAR7 = VAR6->VAR8.VAR9[1].VAR10;
        break;
    case 0x0080:
        VAR7 = VAR6->VAR8.VAR9[2].VAR10;
        break;
    case 0x00c0:
        VAR7 = VAR6->VAR8.VAR9[3].VAR10;
        break;
    case 0x0100:
        VAR7 = VAR6->VAR8.VAR9[0].VAR11;
        break;
    case 0x0140:
        VAR7 = VAR6->VAR8.VAR9[1].VAR11;
        break;
    case 0x0180:
        VAR7 = VAR6->VAR8.VAR9[2].VAR11;
        break;
    case 0x01c0:
        VAR7 = VAR6->VAR8.VAR9[3].VAR11;
        break;
    case 0x0200:
        VAR7 = (VAR1)VAR6->VAR8.VAR9[0].VAR12 << 10;
        break;
    case 0x0240:
        VAR7 = (VAR1)VAR6->VAR8.VAR9[1].VAR12 << 10;
        break;
    case 0x0280:
        VAR7 = (VAR1)VAR6->VAR8.VAR9[2].VAR12 << 10;
        break;
    case 0x02c0:
        VAR7 = (VAR1)VAR6->VAR8.VAR9[3].VAR12 << 10;
        break;
    case 0x0300:
        VAR7 = VAR6->VAR8.VAR13;
        break;
    case 0x0340:
        break;
    case 0x03c0:
        break;
    case 0x0400:
        break;
    case 0x0440:
        break;
    case 0x0480:
        break;
    case 0x04c0:
        break;
    case 0x0500:
    case 0x0540:
    case 0x0800:
        break;
    default:
        FUN2(VAR14, VAR3, false, false, 0, VAR4);
        return -1;
    }
    return VAR7;
}