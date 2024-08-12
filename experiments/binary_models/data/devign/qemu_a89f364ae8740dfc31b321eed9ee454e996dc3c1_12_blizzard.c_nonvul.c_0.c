static VAR1 FUN1(void *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    switch (VAR3)
    {
    case 0x00:
        return 0xa5;
    case 0x02:
        return 0x83;
    case 0x04:
        return (VAR5->VAR6 - 1) | (1 << 7);
    case 0x06:
        return VAR5->VAR7;
    case 0x08:
        return VAR5->VAR8 & 0xff;
    case 0x0a:
        return VAR5->VAR8 >> 8;
    case 0x0c:
        return VAR5->VAR9;
    case 0x0e:
        return VAR5->VAR10;
    case 0x10:
    case 0x14:
        return VAR5->VAR11;
    case 0x18:
        return VAR5->VAR12 & 0xff;
    case 0x1a:
        return VAR5->VAR12 >> 8;
    case 0x1c:
        return VAR5->VAR13[0];
    case 0x1e:
        return VAR5->VAR13[1];
    case 0x20:
        return VAR5->VAR13[2];
    case 0x24:
        return VAR5->VAR14;
    case 0x28:
        return VAR5->VAR15;
    case 0x2a:
        return VAR5->VAR16 >> 3;
    case 0x2c:
        return VAR5->VAR17;
    case 0x2e:
        return VAR5->VAR18 & 0xff;
    case 0x30:
        return VAR5->VAR18 >> 8;
    case 0x32:
        return VAR5->VAR19;
    case 0x34:
        return VAR5->VAR20;
    case 0x36:
        return VAR5->VAR21 >> 3;
    case 0x38:
        return VAR5->VAR22;
    case 0x3a:
        return VAR5->VAR23;
    case 0x3c:
        return VAR5->VAR24;
    case 0x3e:
        return VAR5->VAR25[0];
    case 0x40:
        return VAR5->VAR25[1];
    case 0x42:
        return VAR5->VAR25[2];
    case 0x44:
        return VAR5->VAR26;
    case 0x46 ... 0x4c:
        return VAR5->VAR27[(VAR3 - 0x46) >> 1];
    case 0x4e:
        return VAR5->VAR28;
    case 0x50:
        return VAR5->VAR29;
    case 0x52:
        return VAR5->VAR30;
    case 0x54:
        return VAR5->VAR31;
    case 0x56:
        return VAR5->VAR32;
    case 0x58:
        return VAR5->VAR33;
    case 0x5a:
        if (VAR5->VAR33 < 0x20)
            return VAR5->VAR34[VAR5->VAR33++];
        return 0;
    case 0x60:
        return VAR5->VAR35[0];
    case 0x62:
        return VAR5->VAR35[1];
    case 0x64:
        return VAR5->VAR36;
    case 0x66:
        return VAR5->VAR37;
    case 0x68:
        return VAR5->VAR38;
    case 0x6a:
        return VAR5->VAR39;
    case 0x6c:
        return VAR5->VAR40[0] & 0xff;
    case 0x6e:
        return VAR5->VAR40[0] >> 3;
    case 0x70:
        return VAR5->VAR40[0] & 0xff;
    case 0x72:
        return VAR5->VAR40[0] >> 3;
    case 0x74:
        return VAR5->VAR40[1] & 0xff;
    case 0x76:
        return VAR5->VAR40[1] >> 3;
    case 0x78:
        return VAR5->VAR40[1] & 0xff;
    case 0x7a:
        return VAR5->VAR40[1] >> 3;
    case 0x7c:
        return VAR5->VAR41[0] & 0xff;
    case 0x7e:
        return VAR5->VAR41[0] >> 3;
    case 0x80:
        return VAR5->VAR42[0] & 0xff;
    case 0x82:
        return VAR5->VAR42[0] >> 3;
    case 0x84:
        return VAR5->VAR41[1] & 0xff;
    case 0x86:
        return VAR5->VAR41[1] >> 3;
    case 0x88:
        return VAR5->VAR42[1] & 0xff;
    case 0x8a:
        return VAR5->VAR42[1] >> 3;
    case 0x8c:
        return VAR5->VAR43;
    case 0x8e:
        return VAR5->VAR44;
    case 0x90:
        return 0;
    case 0xa8:
        return VAR5->VAR45;
    case 0xaa:
        return VAR5->VAR46;
    case 0xac:
        return VAR5->VAR47;
    case 0xb4:
        return VAR5->VAR48;
    case 0xb6:
        return VAR5->VAR49;
    case 0xb8:
        return VAR5->VAR50[VAR5->VAR49++];
    case 0xba:
        return VAR5->VAR51;
    case 0xbc ... 0xde:
        return VAR5->VAR52[(VAR3 - 0xbc) >> 1];
    case 0xe0:
        return VAR5->VAR53;
    case 0xe2:
        return VAR5->VAR54;
    case 0xe4:
        return VAR5->VAR55;
    case 0xe6:
        return VAR5->VAR56;
    case 0xe8:
        return VAR5->VAR57 | (1 << 5);
    case 0xea:
        return VAR5->VAR58;
    case 0xec:
        return VAR5->VAR59;
    case 0xee:
        return VAR5->VAR60;
    case 0xf0:
        return VAR5->VAR61;
    case 0xf2:
        return VAR5->VAR62[0];
    case 0xf4:
        return VAR5->VAR62[1];
    case 0xf6:
        return VAR5->VAR63;
    case 0xf8:
        return VAR5->VAR64;
    default:
        fprintf(VAR65, "", VAR66, VAR3);
        return 0;
    }
}