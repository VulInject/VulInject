static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7;
    VAR7 = (VAR2 & 0xfffff);
    switch (VAR7)
    {
    case 0x00200:
        break;
    case 0x00210:
        break;
    case 0x00408:
        VAR6->VAR8 = VAR3 & 0xff;
        FUN2(VAR6);
        break;
    case 0x00410:
        snprintf(VAR6->VAR9, 9, "", (VAR10)VAR3);
        FUN2(VAR6);
        break;
    case 0x00418:
    case 0x00420:
    case 0x00428:
    case 0x00430:
    case 0x00438:
    case 0x00440:
    case 0x00448:
    case 0x00450:
        VAR6->VAR9[(VAR7 - 0x00418) >> 3] = (char)VAR3;
        FUN2(VAR6);
        break;
    case 0x00500:
        if (VAR3 == 0x42)
            FUN3();
        break;
    case 0x00508:
        VAR6->VAR11 = VAR3 & 0xff;
        break;
    case 0x00a00:
        VAR6->VAR12 = VAR3 & 0xff;
        break;
    case 0x00b08:
        VAR6->VAR13 = VAR3 & 0x03;
        break;
    case 0x00b10:
        FUN4(&VAR14, VAR3 & 0x02, VAR3 & 0x01);
        VAR6->VAR15 = VAR3;
        break;
    case 0x00b18:
        VAR6->VAR16 = VAR3 & 0x01;
        break;
    default:
        FUN5("" VAR17 "", VAR2);
        break;
    }
}