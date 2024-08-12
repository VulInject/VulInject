static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7 = VAR3 >> VAR6->VAR8;
    switch (VAR7)
    {
    case 0x0000 ... 0xc000:
        return FUN2(VAR6->VAR9[0] + VAR3);
    case 0xf000:
        return VAR6->VAR10.VAR11;
    case 0xf001:
        return VAR6->VAR10.VAR12;
    case 0xf002:
        return VAR6->VAR10.VAR13;
    case 0xf003:
        return 1 << VAR14;
    case 0xf004:
        return 0x200;
    case 0xf005:
        return 1 | (2 << 8);
    case 0xf006:
        return 0;
    case 0xf100 ... 0xf107:
        return VAR6->VAR3[VAR7 - 0xf100];
    case 0xf200:
        return (VAR6->VAR15 << 8) | ((VAR6->VAR16 - 1) & (1 << (VAR14 - 10)));
    case 0xf220:
        return VAR6->VAR17;
    case 0xf221:
        return VAR6->VAR18[0] & 0xffe0;
    case 0xf222:
        return VAR6->VAR18[1];
    case 0xf240:
        return VAR6->VAR19;
    case 0xf241:
        return VAR6->VAR20;
    case 0xf24c:
        return VAR6->VAR21[0];
    case 0xf24d:
        return VAR6->VAR21[1];
    case 0xf24e:
        return VAR6->VAR22;
    case 0xff00:
        return 0x00;
    case 0xff01:
    case 0xff02:
    case 0xff03:
    case 0xff04:
        FUN3("", VAR23);
        return 0x0000;
    }
    fprintf(VAR24, "", VAR23, VAR7);
    return 0;
}