static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint64_t VAR3, unsigned VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR1;
    int VAR7 = VAR2;
    int VAR8, VAR9;
    struct VAR10 *VAR11 = NULL;
    if ((VAR7 & 0xf80) == 0x80)
    {
        VAR8 = (VAR7 & 0x60) >> 5;
        if (VAR8 < VAR6->VAR12)
        {
            VAR7 &= ~0x60;
            VAR11 = &VAR6->VAR11[VAR8];
        }
    }
    switch (VAR7)
    {
    case 0x10:
        VAR6->VAR13 &= 4;
        VAR6->VAR13 |= (VAR3 & 1) << 2;
        if (VAR3 & 2)
            FUN2(&VAR6->VAR14.VAR15);
    case 0x48:
        VAR6->VAR16 = (VAR3 & 4) ? 0 : ~0;
        if (VAR3 & 2)
        {
            FUN3(VAR6->VAR17[1], 0);
            VAR6->VAR18[1] = ~0;
            FUN4(VAR6, 1);
        }
        if (VAR3 & 1)
        {
            FUN3(VAR6->VAR17[0], 0);
            VAR6->VAR18[0] = ~0;
            FUN4(VAR6, 0);
        }
    case 0x4c:
        if (VAR3 & 1)
            fprintf(VAR19, "", VAR20);
    case 0x50:
        VAR6->VAR13 &= ~3;
        VAR6->VAR13 |= VAR3 & 3;
    case 0x84:
        VAR11->VAR16 = VAR3;
        FUN4(VAR6, 0);
        FUN4(VAR6, 1);
    case 0x88:
        VAR11->VAR16 &= ~VAR3;
        FUN4(VAR6, 0);
        FUN4(VAR6, 1);
    case 0x8c:
        VAR11->VAR16 |= VAR3;
    case 0x90:
        VAR11->VAR21 |= VAR11->VAR22 |= VAR3;
        FUN4(VAR6, 0);
        FUN4(VAR6, 1);
    case 0x94:
        VAR11->VAR22 &= ~VAR3;
        VAR11->VAR21 = VAR11->VAR22 & VAR11->VAR23;
    case 0x100 ... 0x300:
        VAR8 = (VAR7 - 0x100) >> 7;
        if (VAR8 > VAR6->VAR12)
            break;
        VAR11 = &VAR6->VAR11[VAR8];
        VAR9 = (VAR7 & 0x7f) >> 2;
        VAR11->VAR24[VAR9] = (VAR3 >> 2) & 0x3f;
        VAR11->VAR25 &= ~(1 << VAR9);
        VAR11->VAR25 |= (VAR3 & 1) << VAR9;
    case 0x00:
    case 0x14:
    case 0x40:
    case 0x44:
    case 0x80:
    case 0x98:
    case 0x9c:
        FUN5(VAR2);
    }