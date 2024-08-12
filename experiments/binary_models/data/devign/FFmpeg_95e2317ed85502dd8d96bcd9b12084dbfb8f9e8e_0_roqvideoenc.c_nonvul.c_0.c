static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    memset(VAR4, 0, sizeof(*VAR4));
    VAR7 = FUN2(VAR2, VAR4);
    if (VAR7 < 0)
        return VAR7;
    VAR7 = FUN3(VAR2, VAR4);
    if (VAR7 < 0)
        return VAR7;
    if (VAR2->VAR8 >= 1)
    {
        FUN4(VAR2, 8);
        FUN4(VAR2, 4);
    }
VAR9:
    for (VAR6 = 0; VAR6 < VAR2->VAR10 * VAR2->VAR11 / 64; VAR6++)
        FUN5(VAR4->VAR12 + VAR6, VAR2, VAR4);
    if (VAR4->VAR13 / 8 > 65535)
    {
        FUN6(VAR2->VAR14, VAR15, ""
                                         "",
               VAR4->VAR13 / 8);
        VAR2->VAR16 *= 1.5;
        VAR4->VAR13 = 0;
        memset(VAR4->VAR17, 0, sizeof(VAR4->VAR17));
        memset(VAR4->VAR18.VAR19, 0, sizeof(VAR4->VAR18.VAR19));
        memset(VAR4->VAR18.VAR20, 0, sizeof(VAR4->VAR18.VAR20));
        goto VAR9;
    }
    FUN7(VAR2, VAR4);
    FUN8(VAR2, VAR4);
    FUN9(VAR2, VAR4, VAR2->VAR10, VAR2->VAR11, VAR2->VAR10 * VAR2->VAR11 / 64);
    FUN10(VAR21 *, VAR2->VAR22, VAR2->VAR23);
    FUN10(VAR24 *, VAR2->VAR25, VAR2->VAR26);
    FUN10(VAR24 *, VAR2->VAR27, VAR2->VAR28);
    FUN11(VAR4->VAR12);
    FUN11(VAR4->VAR29);
    VAR2->VAR8++;
    return 0;
}