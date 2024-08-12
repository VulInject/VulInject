static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR1;
    if (VAR4 != 4)
    {
        FUN2(VAR1, VAR2, VAR3);
        return;
    }
    switch (VAR2)
    {
    case 0x000:
    case 0x054:
    case 0x084:
    case 0x1e4:
    case 0x220:
    case 0x224:
    case 0x22c:
    case 0x2c8:
    case 0x2e4:
    case 0x320:
    case 0x3e4:
    case 0x420:
    case 0x520:
    case 0x820:
    case 0x8e4:
        FUN3(VAR2);
        return;
    case 0x010:
        VAR6->VAR7 = VAR3 & 1;
        break;
    case 0x018:
        VAR6->VAR8[0] &= ~VAR3;
        FUN4(VAR6, 0);
        break;
    case 0x01c:
        VAR6->VAR9[0] = VAR3 & 0x3f;
        FUN4(VAR6, 0);
        break;
    case 0x050:
        VAR6->VAR10 = VAR3 & 0xf1c3;
        break;
    case 0x060:
        VAR6->VAR11[0] = VAR3 & 0xdb;
        break;
    case 0x070:
        VAR6->VAR12[0] = VAR3 & 0xbbbb;
        break;
    case 0x078:
        VAR6->VAR13[0] = VAR3 & 1;
        break;
    case 0x080:
        break;
    case 0x090:
        VAR6->VAR14[0] = VAR3 & 0xffff;
        break;
    case 0x094:
        VAR6->VAR14[1] = VAR3 & 0xffff;
        break;
    case 0x098:
        VAR6->VAR15[0] = VAR3 & 0x701;
        break;
    case 0x0b0:
    case 0x0b4:
    case 0x0b8:
    case 0x0bc:
    case 0x0c0:
    case 0x0c4:
    case 0x0c8:
    case 0x0cc:
    case 0x0d0:
    case 0x0d4:
    case 0x0d8:
    case 0x0dc:
    case 0x0e0:
    case 0x0e4:
    case 0x0e8:
    case 0x0ec:
    case 0x0f0:
    case 0x0f4:
    case 0x0f8:
    case 0x0fc:
        VAR6->VAR16[(VAR2 - 0xb0) >> 2] = VAR3;
        break;
    case 0x140:
        VAR6->VAR17[0] = VAR3 & 0x1f;
        break;
    case 0x148:
        VAR6->VAR18[0] = VAR3 & 0x1f;
        break;
    case 0x158:
        VAR6->VAR19[0] &= ~VAR3;
        break;
    case 0x1c8:
        VAR6->VAR20[0] = VAR3 & 0x15;
        break;
    case 0x1d4:
        VAR6->VAR21 = VAR3 & 0x1f;
        break;
    case 0x1d8:
        VAR6->VAR22[0] = VAR3;
        break;
    case 0x1dc:
        VAR6->VAR22[1] = VAR3;
        break;
    case 0x1e0:
        VAR6->VAR23[0] = VAR3 & 0xc0f;
        break;
    case 0x200:
        VAR6->VAR24[0] = VAR3 & 0xbfffffff;
        break;
    case 0x204:
        VAR6->VAR24[1] = VAR3 & 0x00000007;
        break;
    case 0x210:
        VAR6->VAR24[2] = VAR3 & 0xfffffff9;
        break;
    case 0x214:
        VAR6->VAR24[3] = VAR3 & 0x00000007;
        break;
    case 0x21c:
        VAR6->VAR24[4] = VAR3 & 0x0000001f;
        break;
    case 0x230:
        VAR6->VAR25[0] = VAR3 & 0xfffffff9;
        break;
    case 0x234:
        VAR6->VAR25[1] = VAR3 & 0x00000007;
        break;
    case 0x238:
        VAR6->VAR25[2] = VAR3 & 0x00000007;
        break;
    case 0x23c:
        VAR6->VAR25[3] = VAR3 & 0x0000001f;
        break;
    case 0x240:
        VAR6->VAR17[1] = VAR3 & 0x0fffbf7f;
        break;
    case 0x244:
        VAR6->VAR17[2] = VAR3 & 0x00fffffc;
        break;
    case 0x248:
        VAR6->VAR18[1] = VAR3 & 0x7;
        break;
    case 0x2a0:
        VAR6->VAR26[0] = VAR3 & 0x04667ff8;
        break;
    case 0x2a4:
        VAR6->VAR26[1] = VAR3 & 0x00000005;
        break;
    case 0x2b0:
        VAR6->VAR27[0] &= ~VAR3;
        break;
    case 0x2b4:
        VAR6->VAR27[1] &= ~VAR3;
        break;
    case 0x2e0:
        VAR6->VAR23[1] = (VAR3 & 0x00fc3f) | (1 << 2);
        break;
    case 0x300:
        VAR6->VAR24[5] = VAR3 & 6;
        break;
    case 0x310:
        VAR6->VAR24[6] = VAR3 & 1;
        break;
    case 0x340:
        VAR6->VAR17[3] = VAR3 & 7;
        break;
    case 0x348:
        VAR6->VAR18[2] = VAR3 & 1;
        break;
    case 0x350:
        VAR6->VAR28[0] = VAR3 & 1;
        break;
    case 0x358:
        VAR6->VAR19[1] &= ~VAR3;
        break;
    case 0x3c8:
        VAR6->VAR20[1] = VAR3 & 0x13;
        break;
    case 0x3e0:
        VAR6->VAR23[2] = (VAR3 & 0x00c0f) | (3 << 2);
        break;
    case 0x400:
        VAR6->VAR24[7] = VAR3 & 0xd;
        break;
    case 0x410:
        VAR6->VAR24[8] = VAR3 & 0x3f;
        break;
    case 0x430:
        VAR6->VAR25[4] = VAR3 & 0x0000003f;
        break;
    case 0x440:
        VAR6->VAR17[4] = VAR3 & 3;
        break;
    case 0x450:
        if (VAR3 & 2)
            FUN5(VAR29);
        break;
    case 0x454:
        VAR6->VAR30 = VAR3 & 0x1fff;
        break;
    case 0x458:
        VAR6->VAR19[2] &= ~VAR3;
        break;
    case 0x4a0:
        VAR6->VAR26[2] = VAR3 & 0x00000005;
        break;
    case 0x4b0:
        VAR6->VAR27[2] &= ~VAR3;
        break;
    case 0x500:
        if (VAR3 & 0xffffff30)
            fprintf(VAR31, ""
                            "",
                    VAR32);
        if ((VAR6->VAR24[9] ^ VAR3) & 0xcc)
        {
            VAR6->VAR24[9] &= ~0xcc;
            VAR6->VAR24[9] |= VAR3 & 0xcc;
            FUN6(VAR6);
        }
        if ((VAR6->VAR24[9] ^ VAR3) & 3)
        {
            VAR6->VAR24[9] &= ~3;
            VAR6->VAR24[9] |= VAR3 & 3;
            FUN7(VAR6);
        }
        break;
    case 0x530:
        VAR6->VAR25[5] = VAR3 & 0x000000cf;
        break;
    case 0x540:
        if (VAR3 & 0xfc4000d7)
            fprintf(VAR31, ""
                            "",
                    VAR32);
        if ((VAR6->VAR17[5] ^ VAR3) & 0x003fff00)
        {
            VAR6->VAR17[5] = VAR3 & 0x03bfff28;
            FUN7(VAR6);
        }
        VAR6->VAR17[5] = VAR3 & 0x03bfff28;
        break;
    case 0x544:
        if (VAR3 & ~3)
            fprintf(VAR31, ""
                            "",
                    VAR32);
        if (VAR6->VAR17[6] != (VAR3 & 3))
        {
            VAR6->VAR17[6] = VAR3 & 3;
            FUN7(VAR6);
        }
        break;
    case 0x800:
        VAR6->VAR24[10] = VAR3 & 0x501;
        break;
    case 0x810:
        VAR6->VAR24[11] = VAR3 & 0x2;
        break;
    case 0x830:
        VAR6->VAR25[6] = VAR3 & 0x2;
        break;
    case 0x840:
        VAR6->VAR17[7] = VAR3 & 0x3fff;
        break;
    case 0x848:
        VAR6->VAR18[3] = VAR3 & 0x101;
        break;
    case 0x850:
        break;
    case 0x858:
        VAR6->VAR19[3] &= ~VAR3;
        break;
    case 0x8c8:
        VAR6->VAR20[2] = VAR3 & 0x13;
        break;
    case 0x8e0:
        VAR6->VAR23[3] = (VAR3 & 0x03017) | (3 << 2);
        break;
    case 0x8f0:
        VAR6->VAR8[1] &= ~VAR3;
        FUN4(VAR6, 1);
        break;
    case 0x8f4:
        VAR6->VAR9[1] = VAR3 & 0x7;
        FUN4(VAR6, 1);
        break;
    case 0x8f8:
        VAR6->VAR8[2] &= ~VAR3;
        FUN4(VAR6, 2);
        break;
    case 0x8fc:
        VAR6->VAR9[2] = VAR3 & 0x7;
        FUN4(VAR6, 2);
        break;
    default:
        FUN8(VAR2);
        return;
    }
}