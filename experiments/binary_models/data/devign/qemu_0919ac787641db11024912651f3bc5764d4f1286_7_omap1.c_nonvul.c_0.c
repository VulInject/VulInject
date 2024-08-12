static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3, unsigned VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR2;
    uint16_t VAR7;
    if (VAR4 != 2)
    {
        return FUN2(VAR2, VAR3);
    }
    switch (VAR3)
    {
    case 0x14:
        VAR7 = VAR6->VAR8[VAR3 >> 2];
        VAR6->VAR8[VAR3 >> 2] = 0;
        FUN3(FUN4(VAR6->VAR9[1], VAR10));
        return VAR7;
    case 0x18:
    case 0x1c:
    case 0x20:
    case 0x28:
    case 0x2c:
        FUN5(VAR3);
    case 0x00:
    case 0x04:
    case 0x08:
    case 0x0c:
    case 0x10:
    case 0x24:
    case 0x30:
    case 0x34:
    case 0x38:
    case 0x3c:
    case 0x40:
    case 0x48:
    case 0x4c:
    case 0x50:
        return VAR6->VAR8[VAR3 >> 2];
    }
    FUN5(VAR3);
    return 0;
}