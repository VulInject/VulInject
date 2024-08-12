static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    memset(VAR4, 0, sizeof(*VAR4));
    FUN2(VAR2, VAR4);
    FUN3(VAR2, VAR4);
    if (VAR2->VAR7 >= 1)
    {
        FUN4(VAR2, 8);
        FUN4(VAR2, 4);
    }
VAR8:
    for (VAR6 = 0; VAR6 < VAR2->VAR9 * VAR2->VAR10 / 64; VAR6++)
        FUN5(VAR4->VAR11 + VAR6, VAR2, VAR4);
    if (VAR4->VAR12 / 8 > 65535)
    {
        FUN6(VAR2->VAR13, VAR14, ""
                                         "",
               VAR4->VAR12 / 8);
        VAR2->VAR15 *= 1.5;
        VAR4->VAR12 = 0;
        memset(VAR4->VAR16, 0, sizeof(VAR4->VAR16));
        memset(VAR4->VAR17.VAR18, 0, sizeof(VAR4->VAR17.VAR18));
        memset(VAR4->VAR17.VAR19, 0, sizeof(VAR4->VAR17.VAR19));
        goto VAR8;
    }
    FUN7(VAR2, VAR4);
    FUN8(VAR2, VAR4);
    FUN9(VAR2, VAR4, VAR2->VAR9, VAR2->VAR10, VAR2->VAR9 * VAR2->VAR10 / 64);
    VAR2->VAR13->VAR20 = VAR2->VAR21;
    FUN10(VAR22 *, VAR2->VAR21, VAR2->VAR23);
    FUN10(VAR24 *, VAR2->VAR25, VAR2->VAR26);
    FUN10(VAR24 *, VAR2->VAR27, VAR2->VAR28);
    FUN11(VAR4->VAR11);
    FUN11(VAR4->VAR29);
    VAR2->VAR7++;
}