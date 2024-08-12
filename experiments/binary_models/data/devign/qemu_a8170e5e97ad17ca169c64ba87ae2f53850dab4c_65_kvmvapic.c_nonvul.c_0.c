static int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5)
{
    hwaddr VAR6;
    uint32_t VAR7;
    uint32_t VAR8, VAR9, VAR10;
    if (VAR2->VAR11 == VAR12)
    {
        return 0;
    }
    if (VAR2->VAR11 == VAR13)
    {
        return -1;
    }
    VAR7 = VAR2->VAR14 + (VAR5 & 0xf0000000);
    VAR6 = FUN2(VAR4, VAR7);
    if (VAR6 == -1)
    {
        return -1;
    }
    VAR6 += VAR7 & ~VAR15;
    if (VAR6 != VAR2->VAR14)
    {
        return -1;
    }
    FUN3(VAR2);
    if (memcmp(VAR2->VAR16.VAR17, "", 8) != 0)
    {
        return -1;
    }
    VAR2->VAR7 = VAR7;
    if (VAR7 == FUN4(VAR2->VAR16.VAR18))
    {
        return 0;
    }
    for (VAR8 = FUN4(VAR2->VAR16.VAR19); VAR8 < FUN4(VAR2->VAR16.VAR20); VAR8 += 4)
    {
        FUN5(VAR6 + VAR8 - VAR2->VAR16.VAR18, (void *)&VAR10, sizeof(VAR10), 0);
        VAR10 = FUN4(VAR10);
        FUN5(VAR6 + VAR10, (void *)&VAR9, sizeof(VAR9), 0);
        VAR9 = FUN4(VAR9);
        VAR9 += VAR7 - FUN4(VAR2->VAR16.VAR18);
        VAR9 = FUN6(VAR9);
        FUN5(VAR6 + VAR10, (void *)&VAR9, sizeof(VAR9), 1);
    }
    FUN3(VAR2);
    VAR2->VAR21 = VAR6 + FUN4(VAR2->VAR16.VAR22) - FUN4(VAR2->VAR16.VAR18);
    return 0;
}