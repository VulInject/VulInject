void FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4, int VAR5)
{
    FUN2(VAR6, 1);
    int VAR7;
    FUN3(VAR6, 1);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        FUN4(*((VAR8 *)(VAR2)), (((const struct VAR9 *)(VAR3))->VAR10));
        FUN4(*((VAR8 *)(VAR2 + 4)), (((const struct VAR9 *)(VAR3 + 4))->VAR10));
        FUN4(*((VAR8 *)(VAR2 + 8)), (((const struct VAR9 *)(VAR3 + 8))->VAR10));
        FUN4(*((VAR8 *)(VAR2 + 12)), (((const struct VAR9 *)(VAR3 + 12))->VAR10));
        VAR3 += VAR4;
        VAR2 += VAR4;
    }
    FUN5(VAR6, 1);
    register vector unsigned char VAR11, VAR12, VAR13, VAR14;
    register vector unsigned char VAR15 = FUN6(0, VAR3);
    int VAR7;
    FUN3(VAR6, 1);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        VAR11 = FUN7(0, (unsigned char *)VAR3);
        VAR12 = FUN7(16, (unsigned char *)VAR3);
        VAR14 = FUN7(0, VAR2);
        VAR13 = FUN8(VAR11, VAR12, VAR15);
        VAR14 = FUN9(VAR14, VAR13);
        FUN10(VAR14, 0, (unsigned char *)VAR2);
        VAR3 += VAR4;
        VAR2 += VAR4;
    }
    FUN5(VAR6, 1);
}