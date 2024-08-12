static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR2;
    if (VAR4 != 4)
    {
        return FUN2(VAR2, VAR3);
    }
    switch (VAR3)
    {
    case 0xfffe1800:
        return 0xc9581f0e;
    case 0xfffe1804:
        return 0xa8858bfa;
    case 0xfffe2000:
        return 0x00aaaafc;
    case 0xfffe2004:
        return 0xcafeb574;
    case 0xfffed400:
        switch (VAR6->VAR7)
        {
        case VAR8:
            return 0x03310315;
        case VAR9:
            return 0x03310115;
        default:
            FUN3("", VAR10);
        }
        break;
    case 0xfffed404:
        switch (VAR6->VAR7)
        {
        case VAR8:
            return 0xfb57402f;
        case VAR9:
            return 0xfb47002f;
        default:
            FUN3("", VAR10);
        }
        break;
    }
    FUN4(VAR3);
    return 0;
}