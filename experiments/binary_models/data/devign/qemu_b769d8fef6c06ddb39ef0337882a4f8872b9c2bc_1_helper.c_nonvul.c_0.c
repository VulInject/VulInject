void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 |= 0x100;
    uint32_t VAR4;
    int VAR5 = VAR2->VAR3;
    VAR4 = FUN2(VAR2);
    if ((VAR5 == VAR6 || VAR5 == VAR7) && VAR8 == 1)
    {
        if (VAR9 > 0)
        {
            fprintf(VAR10, "", VAR2->VAR11, VAR5 << 8, VAR2->VAR12);
        }
        if (VAR9 > 0)
            FUN3(VAR2, VAR10, 0);
    }
    if (VAR9 & VAR13)
    {
        fprintf(VAR10, "", VAR2->VAR11, VAR5 << 8, VAR2->VAR12);
    }
    switch (VAR5)
    {
    case VAR14:
        VAR2->VAR15[3] = FUN4((void *)VAR2->VAR15[3]);
        return;
    case VAR16:
        FUN5("");
        VAR2->VAR15[3] = FUN6((void *)VAR2->VAR15[3]);
        FUN5("");
        return;
    case VAR17:
        FUN5("", VAR18);
        return;
    case VAR19:
        if (VAR20)
            VAR5 += 0xFFC00;
        goto VAR21;
    case VAR22:
        if (VAR23 == 0)
        {
            FUN7(VAR2, "");
        }
        VAR23 = 0;
        break;
    case VAR7:
        VAR4 &= ~0xFFFF0000;
        VAR2->VAR24[VAR25] = 0;
        if (VAR2->VAR12 & VAR26)
            VAR2->VAR24[VAR25] |= 0x40000000;
        else if (VAR2->VAR12 & VAR27)
            VAR2->VAR24[VAR25] |= 0x08000000;
        else if (VAR2->VAR12 & VAR28)
        {
            VAR2->VAR24[VAR25] |= 0x80000000;
            if (VAR2->VAR12 & VAR29)
                VAR2->VAR24[VAR25] |= 0x04000000;
        }
        if (VAR2->VAR12 & VAR30)
            VAR2->VAR24[VAR25] |= 0x02000000;
        if ((VAR2->VAR12 & 0xF) == VAR31)
            VAR2->VAR24[VAR25] |= 0x00400000;
        if (VAR2->VAR12 & VAR32)
            VAR2->VAR24[VAR25] |= 0x00100000;
        if (VAR9)
        {
            fprintf(VAR10, "", VAR2->VAR24[VAR25], VAR2->VAR24[VAR33]);
        }
        else
        {
            FUN5("", VAR2->VAR24[VAR25], VAR2->VAR24[VAR33], VAR2->VAR11);
        }
        goto VAR21;
    case VAR34:
        VAR4 &= ~0xFFFF0000;
        if (VAR2->VAR12 == VAR35)
            VAR4 |= 0x40000000;
        else if (VAR2->VAR12 == VAR36 || VAR2->VAR12 == VAR37 || VAR2->VAR12 == VAR38)
            VAR4 |= 0x10000000;
        else
            VAR4 |= 0x08000000;
        if (VAR9)
        {
            fprintf(VAR10, "", VAR4, VAR2->VAR11);
        }
        else
        {
            FUN5("", VAR4, VAR2->VAR11, VAR2->VAR24[VAR39]);
        }
        goto VAR21;
    case VAR40:
        if (VAR41 == 0)
        {
            if (VAR9 > 0)
            {
                fprintf(VAR10, "");
            }
            FUN8(VAR40);
            return;
        }
        goto VAR21;
    case VAR42:
        VAR2->VAR24[VAR25] |= (FUN9((void *)(VAR2->VAR11 - 4)) & 0x03FF0000) >> 16;
        goto VAR43;
    case VAR6:
        VAR4 &= ~0xFFFF0000;
        switch (VAR2->VAR12 & ~0xF)
        {
        case VAR44:
            if (VAR45 == 0 && VAR46 == 0)
            {
                FUN5("");
                return;
            }
            VAR4 |= 0x00100000;
            VAR2->VAR47[7] |= 0x8;
            if ((((VAR2->VAR47[7] & 0x3) << 3) | (VAR2->VAR47[6] >> 1)) & ((VAR2->VAR47[1] << 1) | (VAR2->VAR47[0] >> 3)))
                VAR2->VAR47[7] |= 0x4;
            break;
        case VAR48:
            VAR4 |= 0x00080000;
            break;
        case VAR49:
            VAR4 |= 0x00040000;
            break;
        case VAR50:
            VAR4 |= 0x00020000;
            break;
        default:
            break;
        }
        VAR4 |= 0x00010000;
        goto VAR43;
    case VAR51:
        goto VAR43;
    case VAR52:
        if (VAR41 == 0)
        {
            FUN8(VAR52);
            return;
        }
        goto VAR21;
    case VAR53:
        if (VAR9 & VAR13)
        {
            fprintf(VAR10, "", VAR2->VAR15[0], VAR2->VAR15[3], VAR2->VAR15[4], VAR2->VAR15[5], VAR2->VAR15[6]);
            if (VAR2->VAR15[0] == 4 && VAR2->VAR15[3] == 1)
            {
                int VAR54, VAR55, VAR56;
                uint8_t VAR57;
                fprintf(VAR10, "");
                VAR55 = VAR2->VAR15[4];
                VAR54 = VAR2->VAR15[5];
                if (VAR54 > 64)
                    VAR54 = 64;
                for (VAR56 = 0; VAR56 < VAR54; VAR56++)
                {
                    VAR57 = 0;
                    FUN10(VAR2, VAR55 + VAR56, &VAR57, 1, 0);
                    if (VAR57 < 32 || VAR57 > 126)
                        VAR57 = '';
                    fprintf(VAR10, "", VAR57);
                }
                fprintf(VAR10, "");
            }
        }
        goto VAR21;
    case VAR58:
        goto VAR21;
    case VAR59:
        goto VAR21;
    case VAR60:
        return;
    case VAR61:
        return;
    case VAR62:
        FUN11(VAR2);
        if (VAR8 == 1)
            FUN5("", (VAR63)VAR2->VAR11);
        return;
    VAR43:
        VAR2->VAR24[VAR64] = (VAR63)VAR2->VAR11 - 4;
        break;
    VAR21:
        VAR2->VAR24[VAR64] = (VAR63)VAR2->VAR11;
        break;
    }
    VAR2->VAR24[VAR65] = VAR4;
    VAR66 = 0;
    VAR41 = 0;
    VAR8 = 0;
    VAR67 = 0;
    VAR45 = 0;
    VAR68 = 0;
    VAR69 = 0;
    VAR46 = 0;
    VAR70 = 0;
    VAR71 = 0;
    VAR72 = 0;
    VAR73 = VAR74;
    VAR2->VAR11 = VAR5 << 8;
    VAR2->VAR3 = VAR17;
    FUN12(VAR2, 1);
    VAR75 = 0;
    VAR76 = 0;
    VAR2->VAR3 = -1;
}