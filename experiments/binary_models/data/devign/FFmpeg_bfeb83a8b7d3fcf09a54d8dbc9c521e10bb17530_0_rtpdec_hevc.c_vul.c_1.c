static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, uint16_t VAR14, int VAR15)
{
    const VAR11 *VAR16 = VAR12;
    int VAR17, VAR18, VAR19;
    int VAR20, VAR21, VAR22;
    uint8_t VAR23[2];
    int VAR24 = 0;
    if (VAR13 < VAR25 + 1)
    {
        FUN2(VAR2, VAR26, "", VAR13);
        return VAR27;
    }
    VAR19 = (VAR12[0] >> 1) & 0x3f;
    VAR18 = ((VAR12[0] << 5) & 0x20) | ((VAR12[1] >> 3) & 0x1f);
    VAR17 = VAR12[1] & 0x07;
    if (VAR18)
    {
        FUN3(VAR2, "");
        return VAR28;
    }
    if (!VAR17)
    {
        FUN2(VAR2, VAR26, "");
        return VAR27;
    }
    if (VAR19 > 50)
    {
        FUN2(VAR2, VAR26, "", VAR19);
        return VAR27;
    }
    switch (VAR19)
    {
    case 32:
    case 33:
    case 34:
    case 39:
    default:
        if (VAR13 < 1)
        {
            FUN2(VAR2, VAR26, "", VAR13, VAR19);
            return VAR27;
        }
        if ((VAR24 = FUN4(VAR8, sizeof(VAR29) + VAR13)) < 0)
            return VAR24;
        memcpy(VAR8->VAR30, VAR29, sizeof(VAR29));
        memcpy(VAR8->VAR30 + sizeof(VAR29), VAR12, VAR13);
        break;
    case 48:
        VAR12 += VAR25;
        VAR13 -= VAR25;
        if (VAR4->VAR31)
        {
            VAR12 += VAR32;
            VAR13 -= VAR32;
        }
        VAR24 = FUN5(VAR2, VAR8, VAR12, VAR13, VAR4->VAR31 ? VAR33 : 0, NULL, 0);
        if (VAR24 < 0)
            return VAR24;
        break;
    case 49:
        VAR12 += VAR25;
        VAR13 -= VAR25;
        VAR20 = VAR12[0] & 0x80;
        VAR21 = VAR12[0] & 0x40;
        VAR22 = VAR12[0] & 0x3f;
        VAR12 += VAR34;
        VAR13 -= VAR34;
        if (VAR4->VAR31)
        {
            VAR12 += VAR32;
            VAR13 -= VAR32;
        }
        FUN6(VAR2, "", VAR22, VAR13);
        if (VAR13 <= 0)
        {
            FUN2(VAR2, VAR26, "", VAR13, VAR19);
            return VAR27;
        }
        if (VAR20 && VAR21)
        {
            FUN2(VAR2, VAR26, "");
            return VAR27;
        }
        VAR23[0] = (VAR16[0] & 0x81) | (VAR22 << 1);
        VAR23[1] = VAR16[1];
        VAR24 = FUN7(VAR8, VAR12, VAR13, VAR20, VAR23, sizeof(VAR23));
        break;
    case 50:
        FUN3(VAR2, "");
        VAR24 = VAR28;
        break;
    }
    VAR8->VAR35 = VAR6->VAR36;
    return VAR24;
}