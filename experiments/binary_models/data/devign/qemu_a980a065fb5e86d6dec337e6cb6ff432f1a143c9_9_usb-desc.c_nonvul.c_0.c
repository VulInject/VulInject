int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, size_t VAR6)
{
    const VAR7 *VAR8 = VAR2->VAR9->VAR10;
    uint8_t VAR11[256];
    uint8_t VAR12 = VAR3 >> 8;
    uint8_t VAR13 = VAR3 & 0xff;
    int VAR14 = -1;
    switch (VAR12)
    {
    case VAR15:
        VAR14 = FUN2(&VAR8->VAR16, VAR2->VAR17, VAR11, sizeof(VAR11));
        FUN3(VAR2->VAR18, VAR6, VAR14);
        break;
    case VAR19:
        if (VAR13 < VAR2->VAR17->VAR20)
        {
            VAR14 = FUN4(VAR2->VAR17->VAR21 + VAR13, VAR11, sizeof(VAR11));
        }
        FUN5(VAR2->VAR18, VAR13, VAR6, VAR14);
        break;
    case VAR22:
        VAR14 = FUN6(VAR2, VAR13, VAR11, sizeof(VAR11));
        FUN7(VAR2->VAR18, VAR13, VAR6, VAR14);
        break;
    default:
        fprintf(VAR23, "", VAR24, VAR2->VAR18, VAR12, VAR6);
        break;
    }
    if (VAR14 > 0)
    {
        if (VAR14 > VAR6)
        {
            VAR14 = VAR6;
        }
        memcpy(VAR5, VAR11, VAR14);
    }
    return VAR14;
}