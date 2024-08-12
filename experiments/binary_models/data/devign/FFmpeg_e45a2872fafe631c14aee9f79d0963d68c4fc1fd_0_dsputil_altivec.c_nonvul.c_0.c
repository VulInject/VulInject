void FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4, int VAR5)
{
    FUN2(VAR6, 1);
    int VAR7;
    FUN3(VAR6, 1);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        *((VAR8 *)(VAR2)) = (((*((VAR8 *)(VAR2))) | ((((const struct VAR9 *)(VAR3))->VAR10))) - ((((*((VAR8 *)(VAR2))) ^ ((((const struct VAR9 *)(VAR3))->VAR10))) & 0xFEFEFEFEUL) >> 1));
        *((VAR8 *)(VAR2 + 4)) = (((*((VAR8 *)(VAR2 + 4))) | ((((const struct VAR9 *)(VAR3 + 4))->VAR10))) - ((((*((VAR8 *)(VAR2 + 4))) ^ ((((const struct VAR9 *)(VAR3 + 4))->VAR10))) & 0xFEFEFEFEUL) >> 1));
        VAR3 += VAR4;
        VAR2 += VAR4;
    }
    FUN4(VAR6, 1);
    register vector unsigned char VAR11, VAR12, VAR13, VAR14;
    int VAR7;
    FUN3(VAR6, 1);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        int VAR15 = ((unsigned long)VAR2 & 0x0000000F);
        VAR14 = FUN5(0, VAR2);
        VAR11 = FUN5(0, (unsigned char *)VAR3);
        VAR12 = FUN5(16, (unsigned char *)VAR3);
        VAR13 = FUN6(VAR11, VAR12, FUN7(0, VAR3));
        if (VAR15)
        {
            VAR13 = FUN6(VAR14, VAR13, FUN8(0, 1, VAR16, VAR17));
        }
        else
        {
            VAR13 = FUN6(VAR14, VAR13, FUN8(VAR16, VAR17, 2, 3));
        }
        VAR14 = FUN9(VAR14, VAR13);
        FUN10(VAR14, 0, VAR2);
        VAR3 += VAR4;
        VAR2 += VAR4;
    }
    FUN4(VAR6, 1);
}