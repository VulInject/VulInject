static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint64_t VAR5;
    uint64_t VAR6;
    if (VAR4)
    {
        FUN2(VAR4, &VAR6);
    }
    else
    {
        VAR6 = 0;
    }
    VAR6 <<= 9;
    VAR5 = VAR6 + 1;
    VAR6 = (VAR5 >> (VAR7 + VAR8 + VAR9)) + 1;
    VAR2->VAR10 = VAR11;
    VAR2->VAR12 = 0x0000;
    FUN3(VAR2);
    FUN4(VAR2);
    FUN5(VAR2);
    FUN6(VAR2, VAR5);
    FUN7(VAR2);
    FUN8(VAR2);
    VAR2->VAR4 = VAR4;
    if (VAR2->VAR13)
        FUN9(VAR2->VAR13);
    VAR2->VAR14 = VAR4 ? FUN10(VAR4) : 0;
    VAR2->VAR13 = (int *)FUN11(sizeof(int) * VAR6);
    memset(VAR2->VAR15, 0, sizeof(int) * 6);
    VAR2->VAR16 = 0;
    VAR2->VAR17 = 0;
    VAR2->VAR5 = VAR5;
    VAR2->VAR18 = 0x200;
    VAR2->VAR19 = 0;
}