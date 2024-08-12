static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    uint32_t VAR4;
    uint32_t VAR5;
    uint32_t VAR6;
    size_t VAR7;
    uint32_t VAR8;
    VAR3 &= ~0xf;
    VAR2->VAR9 = VAR3;
    VAR6 = FUN2(&VAR2->VAR10, VAR3);
    VAR3 = VAR2->VAR9 + 8;
    while (VAR3 + 8 <= VAR2->VAR9 + VAR6)
    {
        VAR4 = FUN2(&VAR2->VAR10, VAR3);
        VAR5 = FUN2(&VAR2->VAR10, VAR3 + 4);
        VAR7 = 0;
        switch (VAR4)
        {
        case 0x00000000:
            break;
        case 0x00000001:
            FUN3(&VAR2->VAR10, VAR3 + 12, 346337);
            VAR7 = 4;
            break;
        case 0x00010001:
            FUN4(VAR11, "", VAR4);
            VAR7 = 4;
            break;
        case 0x00010002:
            FUN3(&VAR2->VAR10, VAR3 + 12, VAR2->VAR12);
            VAR7 = 4;
            break;
        case 0x00010003:
            VAR7 = sizeof(VAR2->VAR13.VAR14);
            FUN5(&VAR2->VAR10, VAR3 + 12, VAR2->VAR13.VAR14, VAR7);
            break;
        case 0x00010004:
            FUN4(VAR11, "", VAR4);
            VAR7 = 8;
            break;
        case 0x00010005:
            FUN3(&VAR2->VAR10, VAR3 + 12, 0);
            FUN3(&VAR2->VAR10, VAR3 + 16, VAR2->VAR15);
            VAR7 = 8;
            break;
        case 0x00028001:
            VAR8 = FUN2(&VAR2->VAR10, VAR3 + 16);
            FUN3(&VAR2->VAR10, VAR3 + 16, (VAR8 & 1));
            VAR7 = 8;
            break;
        case 0x00030001:
            FUN3(&VAR2->VAR10, VAR3 + 16, 0x1);
            VAR7 = 8;
            break;
        case 0x00038001:
            FUN4(VAR11, "", VAR4);
            VAR7 = 8;
            break;
        case 0x00030002:
        case 0x00030004:
        case 0x00030007:
            switch (FUN2(&VAR2->VAR10, VAR3 + 12))
            {
            case 1:
                FUN3(&VAR2->VAR10, VAR3 + 16, 50000000);
                break;
            case 2:
                FUN3(&VAR2->VAR10, VAR3 + 16, 3000000);
                break;
            default:
                FUN3(&VAR2->VAR10, VAR3 + 16, 700000000);
                break;
            }
            VAR7 = 8;
            break;
        case 0x00038002:
        case 0x00038004:
        case 0x00038007:
            FUN4(VAR11, "", VAR4);
            VAR7 = 8;
            break;
        case 0x00030006:
            FUN3(&VAR2->VAR10, VAR3 + 16, 25000);
            VAR7 = 8;
            break;
        case 0x0003000A:
            FUN3(&VAR2->VAR10, VAR3 + 16, 99000);
            VAR7 = 8;
            break;
        case 0x00060001:
            FUN3(&VAR2->VAR10, VAR3 + 12, 0x003C);
            VAR7 = 4;
            break;
        case 0x00050001:
            VAR7 = 0;
            break;
        default:
            FUN4(VAR16, "", VAR4);
            break;
        }
        if (VAR4 == 0)
        {
            break;
        }
        FUN3(&VAR2->VAR10, VAR3 + 8, (1 << 31) | VAR7);
        VAR3 += VAR5 + 12;
    }
    FUN3(&VAR2->VAR10, VAR2->VAR9 + 4, (1 << 31));
}