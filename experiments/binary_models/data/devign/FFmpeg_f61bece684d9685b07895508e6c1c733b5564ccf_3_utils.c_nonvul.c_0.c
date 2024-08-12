int FUN1(struct VAR1 *VAR2, const int VAR3[4], int VAR4, const int VAR5[4], int VAR6, int VAR7, int VAR8, int VAR9)
{
    const VAR10 *VAR11 = FUN2(VAR2->VAR12);
    const VAR10 *VAR13 = FUN2(VAR2->VAR14);
    memcpy(VAR2->VAR15, VAR3, sizeof(int) * 4);
    memcpy(VAR2->VAR16, VAR5, sizeof(int) * 4);
    VAR2->VAR7 = VAR7;
    VAR2->VAR8 = VAR8;
    VAR2->VAR9 = VAR9;
    VAR2->VAR4 = VAR4;
    VAR2->VAR6 = VAR6;
    if (FUN3(VAR2->VAR12) || FUN4(VAR2->VAR12))
        return -1;
    VAR2->VAR17 = FUN5(VAR11);
    VAR2->VAR18 = FUN5(VAR13);
    FUN6(VAR2, VAR3, VAR4, VAR7, VAR8, VAR9);
    if (FUN7(FUN8()))
        FUN9(VAR2, VAR3, VAR7, VAR8, VAR9);
    return 0;
}