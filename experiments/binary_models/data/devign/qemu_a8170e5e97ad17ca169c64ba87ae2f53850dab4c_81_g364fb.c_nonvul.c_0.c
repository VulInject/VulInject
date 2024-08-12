static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR1;
    FUN2(VAR2, VAR3);
    if (VAR2 >= VAR7 && VAR2 < VAR7 + 0x800)
    {
        int VAR8 = (VAR2 - VAR7) >> 3;
        VAR6->VAR9[VAR8][0] = (VAR3 >> 16) & 0xff;
        VAR6->VAR9[VAR8][1] = (VAR3 >> 8) & 0xff;
        VAR6->VAR9[VAR8][2] = VAR3 & 0xff;
        FUN3(VAR6);
    }
    else if (VAR2 >= VAR10 && VAR2 < VAR10 + 0x1000)
    {
        int VAR8 = (VAR2 - VAR10) >> 3;
        VAR6->VAR11[VAR8] = VAR3;
        FUN3(VAR6);
    }
    else if (VAR2 >= VAR12 && VAR2 < VAR12 + 0x18)
    {
        int VAR8 = (VAR2 - VAR12) >> 3;
        VAR6->VAR13[VAR8][0] = (VAR3 >> 16) & 0xff;
        VAR6->VAR13[VAR8][1] = (VAR3 >> 8) & 0xff;
        VAR6->VAR13[VAR8][2] = VAR3 & 0xff;
        FUN3(VAR6);
    }
    else
    {
        switch (VAR2)
        {
        case VAR14:
        case 0x00108:
        case 0x00110:
        case 0x00120:
        case 0x00128:
        case 0x00130:
        case 0x00138:
        case 0x00140:
        case 0x00148:
        case 0x00158:
        case 0x00160:
        case 0x00168:
        case 0x00170:
        case 0x00200:
            break;
        case VAR15:
            VAR6->VAR16 = VAR3;
            FUN3(VAR6);
            break;
        case VAR17:
            VAR6->VAR18 = VAR3 * 4;
            break;
        case VAR19:
            VAR6->VAR20 = VAR3 / 2;
            break;
        case VAR21:
            VAR6->VAR22 = VAR3;
            FUN4(VAR6);
            FUN3(VAR6);
            break;
        case VAR23:
            FUN5(VAR6);
            VAR6->VAR24 = VAR3;
            FUN5(VAR6);
            break;
        case VAR25:
            FUN6(VAR6);
            break;
        default:
            FUN7("" VAR26 "" VAR27 "", VAR3, VAR2);
            break;
        }
    }
    FUN8(VAR6->VAR28);
}