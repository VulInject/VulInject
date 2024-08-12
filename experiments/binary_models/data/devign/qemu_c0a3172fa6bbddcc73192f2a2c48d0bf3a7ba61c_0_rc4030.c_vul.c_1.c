static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7 = VAR3;
    VAR2 &= 0x3fff;
    FUN2(VAR2, VAR7);
    switch (VAR2 & ~0x3)
    {
    case 0x0000:
        VAR6->VAR8 = VAR7;
        break;
    case 0x0018:
        FUN3(VAR6, VAR7, VAR6->VAR9);
        break;
    case 0x0020:
        FUN3(VAR6, VAR6->VAR10, VAR7);
        break;
    case 0x0028:
        break;
    case 0x0030:
        VAR6->VAR11 = VAR7;
        break;
    case 0x0048:
        VAR6->VAR12 = VAR7;
        break;
    case 0x0050:
        VAR6->VAR13 = VAR7;
        break;
    case 0x0058:
        VAR6->VAR14 |= VAR7;
        break;
    case 0x0060:
        if (VAR6->VAR13 == 0x80000001 && VAR6->VAR14 == 0xf0f0f0f)
        {
            hwaddr VAR15 = VAR6->VAR12 & ~0x1;
            VAR15 += (VAR6->VAR11 & 0x3) << 3;
            FUN4(VAR15, &VAR7, 4);
        }
        break;
    case 0x0070:
    case 0x0078:
    case 0x0080:
    case 0x0088:
    case 0x0090:
    case 0x0098:
    case 0x00a0:
    case 0x00a8:
    case 0x00b0:
    case 0x00b8:
    case 0x00c0:
    case 0x00c8:
    case 0x00d0:
    case 0x00d8:
    case 0x00e0:
    case 0x00e8:
        VAR6->VAR16[(VAR2 - 0x0070) >> 3] = VAR7;
        break;
    case 0x0100:
    case 0x0108:
    case 0x0110:
    case 0x0118:
    case 0x0120:
    case 0x0128:
    case 0x0130:
    case 0x0138:
    case 0x0140:
    case 0x0148:
    case 0x0150:
    case 0x0158:
    case 0x0160:
    case 0x0168:
    case 0x0170:
    case 0x0178:
    case 0x0180:
    case 0x0188:
    case 0x0190:
    case 0x0198:
    case 0x01a0:
    case 0x01a8:
    case 0x01b0:
    case 0x01b8:
    case 0x01c0:
    case 0x01c8:
    case 0x01d0:
    case 0x01d8:
    case 0x01e0:
    case 0x01e8:
    case 0x01f0:
    case 0x01f8:
    {
        int VAR17 = (VAR2 - 0x0100) >> 5;
        int VAR18 = (VAR2 & 0x1f) >> 3;
        VAR6->VAR19[VAR17][VAR18] = VAR7;
    }
    break;
    case 0x0210:
        VAR6->VAR20 = VAR7;
        break;
    case 0x0228:
        VAR6->VAR21 = VAR7;
        FUN5(VAR6->VAR22);
        FUN6(VAR6);
        break;
    case 0x0238:
        break;
    default:
        FUN7(VAR23, "", VAR7, (int)VAR2);
        break;
    }
}