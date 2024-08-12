static void FUN1(void *VAR1, uint8_t VAR2, uint16_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    switch (VAR2)
    {
    case 0x04:
        VAR5->VAR6 = (VAR3 & 0x3f) + 1;
        break;
    case 0x06:
        VAR5->VAR7 = VAR3 & 3;
        break;
    case 0x08:
        VAR5->VAR8 &= 0xf00;
        VAR5->VAR8 |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x0a:
        VAR5->VAR8 &= 0x0ff;
        VAR5->VAR8 |= (VAR3 << 8) & 0xf00;
        break;
    case 0x0c:
        VAR5->VAR9 = VAR3 & 0x77;
        if ((VAR3 & 3) == 0 || (VAR3 & 3) == 3)
            fprintf(VAR10, "", VAR11, VAR3 & 3);
        break;
    case 0x0e:
        VAR5->VAR12 = VAR3 & 0xff;
        break;
    case 0x10:
        VAR5->VAR13 = VAR3 & 1;
        break;
    case 0x14:
        break;
    case 0x18:
        VAR5->VAR14 &= 0xf00;
        VAR5->VAR14 |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x1a:
        VAR5->VAR14 &= 0x0ff;
        VAR5->VAR14 |= (VAR3 << 8) & 0xf00;
        break;
    case 0x1c:
        VAR5->VAR15[0] = VAR3 & 0x7f;
        break;
    case 0x1e:
        VAR5->VAR15[1] = VAR3 & 0x17;
        break;
    case 0x20:
        VAR5->VAR15[2] = VAR3 & 0x35;
        break;
    case 0x24:
        VAR5->VAR16 = VAR3 & 1;
        break;
    case 0x28:
        VAR5->VAR17 = VAR3 & 0xff;
        if (VAR3 & (1 << 7))
            fprintf(VAR10, "", VAR11);
        break;
    case 0x2a:
        VAR5->VAR18 = VAR3 << 3;
        break;
    case 0x2c:
        VAR5->VAR19 = VAR3 & 0xff;
        break;
    case 0x2e:
        VAR5->VAR20 &= 0x300;
        VAR5->VAR20 |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x30:
        VAR5->VAR20 &= 0x0ff;
        VAR5->VAR20 |= (VAR3 << 8) & 0x300;
        break;
    case 0x32:
        VAR5->VAR21 = VAR3 & 0xff;
        break;
    case 0x34:
        VAR5->VAR22 = VAR3 & 0xff;
        break;
    case 0x36:
        VAR5->VAR23 = VAR3 & 0xff;
        break;
    case 0x38:
        VAR5->VAR24 = VAR3 & 0xbf;
        break;
    case 0x3a:
        VAR5->VAR25 = VAR3 & 0xff;
        break;
    case 0x3c:
        VAR5->VAR26 = VAR3 & 0x82;
        break;
    case 0x3e:
        VAR5->VAR27[0] = VAR3;
        break;
    case 0x40:
        VAR5->VAR27[1] = VAR3;
        if (((VAR3 >> 4) & 3) == 3)
            fprintf(VAR10, "", VAR11);
        break;
    case 0x42:
        VAR5->VAR27[2] = VAR3 & 0xbd;
        break;
    case 0x44:
        VAR5->VAR28 = VAR3 & 0xfe;
        break;
    case 0x46 ... 0x4c:
        VAR5->VAR29[(VAR2 - 0x46) >> 1] = VAR3;
        break;
    case 0x4e:
        VAR5->VAR30 = VAR3;
        break;
    case 0x50:
        VAR5->VAR31 = VAR3;
        break;
    case 0x52:
        VAR5->VAR32 = VAR3 & 0x7f;
        break;
    case 0x54:
        VAR5->VAR33 = VAR3;
        break;
    case 0x56:
        VAR5->VAR34 = VAR3 & 0xbf;
        break;
    case 0x58:
        VAR5->VAR35 = VAR3 & 0x1f;
        break;
    case 0x5a:
        if (VAR5->VAR35 < 0x20)
            VAR5->VAR36[VAR5->VAR35++] = VAR3;
        break;
    case 0x60:
        VAR5->VAR37[0] = VAR3 & 0xb0;
        break;
    case 0x62:
        VAR5->VAR37[1] = VAR3 & 0x30;
        break;
    case 0x64:
        VAR5->VAR38 = VAR3 & 0xff;
        break;
    case 0x66:
        VAR5->VAR39 = VAR3 & 0xff;
        break;
    case 0x68:
        if ((VAR5->VAR40 ^ VAR3) & 3)
            VAR5->VAR41 = 1;
        VAR5->VAR40 = VAR3 & 0xb7;
        VAR5->VAR42 = VAR3 & 1;
        VAR5->VAR43 = (VAR3 >> 1) & 1;
        if (VAR3 & (1 << 4))
            fprintf(VAR10, "", VAR11);
        break;
    case 0x6a:
        VAR5->VAR44 = VAR3 & 0xfb;
        break;
    case 0x6c:
        VAR5->VAR45[0] &= 0x300;
        VAR5->VAR45[0] |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x6e:
        VAR5->VAR45[0] &= 0x0ff;
        VAR5->VAR45[0] |= (VAR3 << 8) & 0x300;
        break;
    case 0x70:
        VAR5->VAR46[0] &= 0x300;
        VAR5->VAR46[0] |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x72:
        VAR5->VAR46[0] &= 0x0ff;
        VAR5->VAR46[0] |= (VAR3 << 8) & 0x300;
        break;
    case 0x74:
        VAR5->VAR45[1] &= 0x300;
        VAR5->VAR45[1] |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x76:
        VAR5->VAR45[1] &= 0x0ff;
        VAR5->VAR45[1] |= (VAR3 << 8) & 0x300;
        break;
    case 0x78:
        VAR5->VAR46[1] &= 0x300;
        VAR5->VAR46[1] |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x7a:
        VAR5->VAR46[1] &= 0x0ff;
        VAR5->VAR46[1] |= (VAR3 << 8) & 0x300;
        break;
    case 0x7c:
        VAR5->VAR47[0] &= 0x300;
        VAR5->VAR47[0] |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x7e:
        VAR5->VAR47[0] &= 0x0ff;
        VAR5->VAR47[0] |= (VAR3 << 8) & 0x300;
        break;
    case 0x80:
        VAR5->VAR48[0] &= 0x300;
        VAR5->VAR48[0] |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x82:
        VAR5->VAR48[0] &= 0x0ff;
        VAR5->VAR48[0] |= (VAR3 << 8) & 0x300;
        break;
    case 0x84:
        VAR5->VAR47[1] &= 0x300;
        VAR5->VAR47[1] |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x86:
        VAR5->VAR47[1] &= 0x0ff;
        VAR5->VAR47[1] |= (VAR3 << 8) & 0x300;
        break;
    case 0x88:
        VAR5->VAR48[1] &= 0x300;
        VAR5->VAR48[1] |= (VAR3 << 0) & 0x0ff;
        break;
    case 0x8a:
        VAR5->VAR48[1] &= 0x0ff;
        VAR5->VAR48[1] |= (VAR3 << 8) & 0x300;
        break;
    case 0x8c:
        VAR5->VAR49 = VAR3 & 0xf;
        VAR5->VAR50 = VAR51[VAR5->VAR49];
        if (!VAR5->VAR50)
            fprintf(VAR10, "", VAR11, VAR5->VAR49);
        break;
    case 0x8e:
        VAR5->VAR52 = VAR3 & 7;
        if ((!(VAR5->VAR44 & (1 << 3)) && (VAR5->VAR45[0] != VAR5->VAR47[0] || VAR5->VAR46[0] != VAR5->VAR48[0] || VAR5->VAR45[1] != VAR5->VAR47[1] || VAR5->VAR46[1] != VAR5->VAR48[1])) || !((VAR5->VAR45[1] - VAR5->VAR45[0]) & (VAR5->VAR46[1] - VAR5->VAR46[0]) & (VAR5->VAR47[1] - VAR5->VAR47[0]) & (VAR5->VAR48[1] - VAR5->VAR48[0]) & 1))
            fprintf(VAR10, "", VAR11);
        FUN2(VAR5);
        break;
    case 0x90:
        if (!VAR5->VAR53.VAR54 && !FUN2(VAR5))
            break;
        *VAR5->VAR53.VAR55++ = VAR3;
        if (--VAR5->VAR53.VAR54 == 0)
            FUN3(VAR5);
        break;
    case 0xa8:
        VAR5->VAR56 = VAR3;
        break;
    case 0xaa:
        VAR5->VAR57 = VAR3;
        break;
    case 0xac:
        VAR5->VAR58 = VAR3;
        break;
    case 0xb4:
        VAR5->VAR59 = VAR3 & 0x87;
        break;
    case 0xb6:
        VAR5->VAR60 = VAR3;
        break;
    case 0xb8:
        VAR5->VAR61[VAR5->VAR60++] = VAR3;
        break;
    case 0xba:
        VAR5->VAR62 = VAR3 & 1;
        break;
    case 0xbc ... 0xde:
        VAR5->VAR63[(VAR2 - 0xbc) >> 1] = VAR3 & ((VAR2 & 2) ? 0x80 : 0xff);
        break;
    case 0xe0:
        VAR5->VAR64 = VAR3;
        break;
    case 0xe2:
        VAR5->VAR65 = VAR3;
        break;
    case 0xe4:
        VAR5->VAR66 = VAR3;
        break;
    case 0xe6:
        VAR5->VAR67 = VAR3 & 0x83;
        if (VAR3 & VAR5->VAR40 & 1)
            fprintf(VAR10, ""
                            "",
                    VAR11);
        break;
    case 0xe8:
        VAR5->VAR68 = VAR3 & 0x1b;
        break;
    case 0xea:
        VAR5->VAR69 = VAR3 & 0x8f;
        break;
    case 0xec:
        VAR5->VAR70 = VAR3 & 0xcf;
        break;
    case 0xee:
        VAR5->VAR71 = VAR3;
        break;
    case 0xf0:
        VAR5->VAR72 = VAR3;
        break;
    case 0xf2:
        VAR5->VAR73[0] = VAR3;
        break;
    case 0xf4:
        VAR5->VAR73[1] = VAR3;
        break;
    case 0xf6:
        VAR5->VAR74 &= VAR3;
        break;
    case 0xf8:
        VAR5->VAR75 = VAR3;
        break;
    default:
        fprintf(VAR10, "", VAR11, VAR2);
        break;
    }
}