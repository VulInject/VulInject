int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    OSStatus VAR6 = VAR7;
    CFNumberRef VAR8;
    CFNumberRef VAR9;
    CFNumberRef VAR10;
    CFDataRef VAR11;
    CFMutableDictionaryRef VAR12;
    CFMutableDictionaryRef VAR13;
    CFMutableDictionaryRef VAR14;
    CFNumberRef VAR15;
    if (VAR5 >= 4 && (VAR4[4] & 0x03) != 0x03)
    {
        VAR3 *VAR16;
        if (!(VAR16 = FUN2(VAR5)))
            return FUN3(VAR17);
        memcpy(VAR16, VAR4, VAR5);
        VAR16[4] |= 0x03;
        VAR11 = FUN4(VAR18, VAR16, VAR5);
        FUN5(&VAR16);
    }
    else
    {
        VAR11 = FUN4(VAR18, VAR4, VAR5);
    }
    VAR12 = FUN6(VAR18, 4, &VAR19, &VAR20);
    VAR8 = FUN7(VAR18, VAR21, &VAR2->VAR8);
    VAR9 = FUN7(VAR18, VAR21, &VAR2->VAR9);
    VAR10 = FUN7(VAR18, VAR21, &VAR2->VAR10);
    FUN8(VAR12, VAR22, VAR8);
    FUN8(VAR12, VAR23, VAR9);
    FUN8(VAR12, VAR24, VAR10);
    FUN8(VAR12, VAR25, VAR11);
    VAR13 = FUN6(VAR18, 2, &VAR19, &VAR20);
    VAR14 = FUN6(VAR18, 0, &VAR19, &VAR20);
    VAR15 = FUN7(VAR18, VAR21, &VAR2->VAR26);
    FUN8(VAR13, VAR27, VAR15);
    FUN8(VAR13, VAR28, VAR14);
    VAR6 = FUN9(VAR12, VAR13, (VAR29 *)VAR30, VAR2, &VAR2->VAR31);
    FUN10(VAR8);
    FUN10(VAR9);
    FUN10(VAR10);
    FUN10(VAR11);
    FUN10(VAR12);
    FUN10(VAR14);
    FUN10(VAR15);
    FUN10(VAR13);
    return VAR6;
}