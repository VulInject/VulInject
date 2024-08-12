void FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4, int VAR5)
{
    FUN2(VAR6, 1);
    int VAR7;
    FUN3(VAR6, 1);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        *((VAR8 *)(VAR2)) = (((const struct VAR9 *)(VAR3))->VAR10);
        *((VAR8 *)(VAR2 + 4)) = (((const struct VAR9 *)(VAR3 + 4))->VAR10);
        *((VAR8 *)(VAR2 + 8)) = (((const struct VAR9 *)(VAR3 + 8))->VAR10);
        *((VAR8 *)(VAR2 + 12)) = (((const struct VAR9 *)(VAR3 + 12))->VAR10);
        VAR3 += VAR4;
        VAR2 += VAR4;
    }
    FUN4(VAR6, 1);
    register vector unsigned char VAR11, VAR12;
    register vector unsigned char VAR13, VAR14;
    register vector unsigned char VAR15, VAR16;
    register vector unsigned char VAR17, VAR18;
    register vector unsigned char VAR19 = FUN5(0, VAR3);
    int VAR7;
    register int VAR20 = VAR4 << 1;
    register int VAR21 = VAR4 + VAR20;
    register int VAR22 = VAR4 << 2;
    FUN3(VAR6, 1);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        VAR11 = FUN6(0, (unsigned char *)VAR3);
        VAR12 = FUN6(16, (unsigned char *)VAR3);
        FUN7(FUN8(VAR11, VAR12, VAR19), 0, (unsigned char *)VAR2);
        VAR3 += VAR4;
        VAR2 += VAR4;
    }
    for (VAR7 = 0; VAR7 < VAR5; VAR7 += 4)
    {
        VAR11 = FUN6(0, (unsigned char *)VAR3);
        VAR12 = FUN6(16, (unsigned char *)VAR3);
        VAR13 = FUN6(VAR4, (unsigned char *)VAR3);
        VAR14 = FUN6(16 + VAR4, (unsigned char *)VAR3);
        VAR15 = FUN6(VAR20, (unsigned char *)VAR3);
        VAR16 = FUN6(16 + VAR20, (unsigned char *)VAR3);
        VAR17 = FUN6(VAR21, (unsigned char *)VAR3);
        VAR18 = FUN6(16 + VAR21, (unsigned char *)VAR3);
        FUN7(FUN8(VAR11, VAR12, VAR19), 0, (unsigned char *)VAR2);
        FUN7(FUN8(VAR13, VAR14, VAR19), VAR4, (unsigned char *)VAR2);
        FUN7(FUN8(VAR15, VAR16, VAR19), VAR20, (unsigned char *)VAR2);
        FUN7(FUN8(VAR17, VAR18, VAR19), VAR21, (unsigned char *)VAR2);
        VAR3 += VAR22;
        VAR2 += VAR22;
    }
    FUN4(VAR6, 1);
}