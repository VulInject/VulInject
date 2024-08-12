static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    uint8_t VAR9[32];
    int64_t VAR10;
    unsigned int VAR11;
    VAR10 = FUN2(VAR4) - 16;
    FUN3(VAR4);
    FUN3(VAR4);
    FUN4(VAR4);
    FUN4(VAR4);
    FUN4(VAR4);
    VAR6->VAR12->VAR13 = FUN3(VAR4);
    VAR6->VAR12->VAR14 = FUN3(VAR4);
    FUN4(VAR4);
    FUN4(VAR4);
    FUN4(VAR4);
    FUN3(VAR4);
    VAR11 = FUN5(VAR4);
    if (VAR11 > 31)
        VAR11 = 31;
    FUN6(VAR2, VAR4, VAR11, VAR9, sizeof(VAR9));
    if (VAR11 < 31)
        FUN7(VAR4, 31 - VAR11);
    if (VAR9[0])
        FUN8(&VAR6->VAR15, "", VAR9, 0);
    if (!memcmp(VAR9, "", 25))
    {
        VAR6->VAR12->VAR16 = FUN9('', '', '', '');
        VAR6->VAR12->VAR13 &= ~1;
        VAR6->VAR12->VAR14 &= ~1;
    }
    if (VAR6->VAR12->VAR16 == FUN9('', '', '', '') && !memcmp(VAR9, "", 13))
        VAR6->VAR12->VAR17 = VAR18;
    VAR6->VAR12->VAR19 = FUN3(VAR4);
    FUN10(VAR4, VAR10, VAR20);
    if (FUN11(VAR6->VAR12->VAR17, VAR4, VAR8->VAR21))
    {
        VAR6->VAR12->VAR19 &= 0x1F;
        VAR8->VAR22 = 1;
    }
}