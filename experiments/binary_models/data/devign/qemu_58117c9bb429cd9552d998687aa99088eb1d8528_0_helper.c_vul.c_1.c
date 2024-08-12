VAR1 FUN1(VAR2)(VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR4);
    switch (VAR5)
    {
    case 0:
        return FUN3(VAR4) & 0xf8000000;
    case 1:
        return FUN3(VAR4) & 0xf80001ff;
    case 2:
        return FUN3(VAR4) & 0xff00fc00;
    case 3:
        return FUN3(VAR4) & 0xff00fdff;
    case 5:
        return FUN3(VAR4) & 0x000001ff;
    case 6:
        return FUN3(VAR4) & 0x0700fc00;
    case 7:
        return FUN3(VAR4) & 0x0700edff;
    case 8:
        return VAR4->VAR8.VAR9 ? VAR4->VAR8.VAR10 : VAR4->VAR11[13];
    case 9:
        return VAR4->VAR8.VAR9 ? VAR4->VAR11[13] : VAR4->VAR8.VAR10;
    case 16:
        return (VAR4->VAR12 & VAR13) != 0;
    case 17:
    case 18:
        return VAR4->VAR8.VAR14;
    case 19:
        return (VAR4->VAR12 & VAR15) != 0;
    case 20:
        return VAR4->VAR8.VAR16;
    default:
        FUN4(FUN5(VAR7), "", VAR5);
        return 0;
    }
}