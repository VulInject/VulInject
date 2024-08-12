static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    size_t VAR5 = 0;
    size_t VAR6 = 0;
    VAR7 *VAR8 = VAR2->VAR9;
    QCowExtension VAR10 = {0, 0};
    int VAR11;
    if (VAR4 && !VAR3)
    {
        return -VAR12;
    }
    if (VAR4)
    {
        VAR10.VAR13 = FUN2(strlen(VAR4));
        VAR10.VAR14 = FUN2(VAR15);
        VAR6 = ((sizeof(VAR10) + strlen(VAR4) + 7) & ~7);
    }
    if (VAR3)
    {
        VAR5 = strlen(VAR3);
    }
    size_t VAR16 = sizeof(VAR17) + VAR5 + VAR6;
    if (VAR16 > VAR8->VAR18)
    {
        return -VAR19;
    }
    size_t VAR20 = VAR16 - sizeof(VAR17);
    uint8_t VAR21[VAR20];
    size_t VAR22 = 0;
    size_t VAR23 = 0;
    if (VAR3)
    {
        if (VAR4)
        {
            int VAR24 = VAR6 - (sizeof(VAR10) + strlen(VAR4));
            memcpy(VAR21 + VAR22, &VAR10, sizeof(VAR10));
            VAR22 += sizeof(VAR10);
            memcpy(VAR21 + VAR22, VAR4, strlen(VAR4));
            VAR22 += strlen(VAR4);
            memset(VAR21 + VAR22, 0, VAR24);
            VAR22 += VAR24;
        }
        memcpy(VAR21 + VAR22, VAR3, VAR5);
        VAR23 = sizeof(VAR17) + VAR22;
    }
    VAR11 = FUN3(VAR2->VAR25, sizeof(VAR17), VAR21, VAR20);
    if (VAR11 < 0)
    {
        goto VAR26;
    }
    uint64_t VAR27 = FUN4(VAR23);
    uint32_t VAR28 = FUN2(VAR5);
    VAR11 = FUN3(VAR2->VAR25, FUN5(VAR17, VAR23), &VAR27, sizeof(VAR29));
    if (VAR11 < 0)
    {
        goto VAR26;
    }
    VAR11 = FUN3(VAR2->VAR25, FUN5(VAR17, VAR30), &VAR28, sizeof(VAR31));
    if (VAR11 < 0)
    {
        goto VAR26;
    }
    VAR11 = 0;
VAR26:
    return VAR11;
}