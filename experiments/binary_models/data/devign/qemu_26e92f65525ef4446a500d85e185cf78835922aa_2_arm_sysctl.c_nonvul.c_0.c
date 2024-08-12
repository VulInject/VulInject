static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    switch (VAR3)
    {
    case 0x00:
        return VAR5->VAR6;
    case 0x04:
        return 0;
    case 0x08:
        return VAR5->VAR7;
    case 0x20:
        return VAR5->VAR8;
    case 0x0c:
    case 0x10:
    case 0x14:
    case 0x18:
    case 0x1c:
    case 0x24:
        return 0;
    case 0x28:
        return VAR5->VAR9;
    case 0x2c:
        return VAR5->VAR10;
    case 0x30:
        return VAR5->VAR11;
    case 0x38:
        return VAR5->VAR12;
    case 0x40:
        return VAR5->VAR13;
    case 0x44:
        return 1;
    case 0x48:
        return 0;
    case 0x4c:
        return 0;
    case 0x50:
        return 0x1000;
    case 0x54:
        return 0;
    case 0x58:
        return 0;
    case 0x5c:
        return FUN2(FUN3(VAR14), 24000000, FUN4());
    case 0x60:
        return 0;
    case 0x84:
        return VAR5->VAR15;
    case 0x88:
        return 0xff000000;
    case 0x64:
    case 0x68:
    case 0x6c:
    case 0x70:
    case 0x74:
    case 0x80:
    case 0x8c:
    case 0x90:
    case 0x94:
    case 0x98:
    case 0x9c:
    case 0xc0:
    case 0xc4:
    case 0xc8:
    case 0xcc:
    case 0xd0:
        return 0;
    default:
        FUN5("", (int)VAR3);
        return 0;
    }
}