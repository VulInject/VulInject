static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    int VAR7 = VAR2 >> VAR6->VAR8;
    int VAR9;
    switch (VAR7)
    {
    case 0x0000 ... 0x01ff:
    case 0x8000 ... 0x800f:
        if (VAR6->VAR10)
        {
            VAR6->VAR10 = 0;
            if (VAR3 == 0x0000)
            {
                FUN2(VAR11, VAR12)
                FUN3(VAR6, VAR9, 1 << (VAR13 - 9), VAR6->VAR14[0][0]);
                VAR6->VAR2[VAR12] += 4;
                VAR6->VAR2[VAR12] &= 0xff;
            }
            break;
        }
        switch (VAR3)
        {
        case 0x00f0:
            FUN4(VAR6, 0);
            break;
        case 0x00e0:
            VAR6->VAR10 = 1;
            break;
        case 0x0090:
            memset(VAR6->VAR15[0], 0, 3 << VAR6->VAR8);
            VAR6->VAR15[0][0 << VAR6->VAR8] = VAR6->VAR16.VAR17 & 0xff;
            VAR6->VAR15[0][1 << VAR6->VAR8] = VAR6->VAR16.VAR18 & 0xff;
            VAR6->VAR15[0][2 << VAR6->VAR8] = VAR6->VAR19 & 0xff;
            break;
        default:
            fprintf(VAR20, "" VAR21 "", VAR22, VAR3);
        }
        break;
    case 0xf100 ... 0xf107:
        VAR6->VAR2[VAR7 - 0xf100] = VAR3;
        break;
    case 0xf200:
        VAR6->VAR23 = (VAR3 >> 8) & 0xf;
        if (VAR13 == 11)
            VAR6->VAR24 = (VAR3 & 3) ?: 4;
        else if (VAR13 == 10)
            VAR6->VAR24 = (VAR3 & 1) ?: 2;
        break;
    case 0xf220:
        if (VAR6->VAR25 & (1 << 15))
            break;
        VAR6->VAR26 = VAR3;
        FUN5(VAR6);
        break;
    case 0xf221:
        VAR6->VAR27[0] = VAR3;
        FUN6(VAR6);
        FUN7(VAR6->VAR28, (VAR6->VAR27[0] >> 7) & 1);
        break;
    case 0xf222:
        VAR6->VAR27[1] = VAR3;
        break;
    case 0xf241:
        VAR6->VAR25 &= VAR3;
        if ((1 << 15) & ~VAR6->VAR25)
            VAR6->VAR29 &= ~(VAR30 | VAR31 | VAR32 | VAR33);
        FUN6(VAR6);
        break;
    case 0xf24c:
        VAR6->VAR34[0] = VAR3 & (VAR6->VAR35 - 1);
        VAR6->VAR34[1] = VAR3 & (VAR6->VAR35 - 1);
        break;
    case 0xf24d:
        VAR6->VAR34[1] = VAR3 & (VAR6->VAR35 - 1);
        break;
    default:
        fprintf(VAR20, "", VAR22, VAR7);
    }
}