static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR7;
    VAR8 *VAR9 = VAR2;
    uint64_t VAR10 = 0;
    switch (VAR3)
    {
    case 0x0000:
        break;
    case 0x0040:
        break;
    case 0x0080:
        VAR10 = VAR9->VAR11.VAR12 | (VAR6->VAR13 & 3);
        break;
    case 0x00c0:
        break;
    case 0x0100:
    case 0x0140:
    case 0x0180:
    case 0x01c0:
        break;
    case 0x0200:
        VAR10 = VAR9->VAR11.VAR14[0];
        break;
    case 0x0240:
        VAR10 = VAR9->VAR11.VAR14[1];
        break;
    case 0x0280:
        VAR10 = VAR9->VAR11.VAR14[0] & VAR9->VAR11.VAR15;
        break;
    case 0x02c0:
        VAR10 = VAR9->VAR11.VAR14[1] & VAR9->VAR11.VAR15;
        break;
    case 0x0300:
        VAR10 = VAR9->VAR11.VAR15;
        break;
    case 0x0340:
        break;
    case 0x0380:
        VAR10 = VAR9->VAR11.VAR16[0];
        break;
    case 0x03c0:
        VAR10 = VAR9->VAR11.VAR16[1];
        break;
    case 0x0400:
    case 0x0440:
    case 0x0480:
    case 0x04c0:
        break;
    case 0x0580:
        break;
    case 0x05c0:
        break;
    case 0x0600:
        VAR10 = VAR9->VAR11.VAR14[2];
        break;
    case 0x0640:
        VAR10 = VAR9->VAR11.VAR14[3];
        break;
    case 0x0680:
        VAR10 = VAR9->VAR11.VAR14[2] & VAR9->VAR11.VAR15;
        break;
    case 0x06c0:
        VAR10 = VAR9->VAR11.VAR14[3] & VAR9->VAR11.VAR15;
        break;
    case 0x0700:
        VAR10 = VAR9->VAR11.VAR16[2];
        break;
    case 0x0740:
        VAR10 = VAR9->VAR11.VAR16[3];
        break;
    case 0x0780:
        break;
    case 0x0c00:
    case 0x0c40:
    case 0x0c80:
    case 0x0cc0:
        break;
    default:
        FUN2(VAR6, VAR3, false, false, 0, VAR4);
        return -1;
    }
    return VAR10;
}