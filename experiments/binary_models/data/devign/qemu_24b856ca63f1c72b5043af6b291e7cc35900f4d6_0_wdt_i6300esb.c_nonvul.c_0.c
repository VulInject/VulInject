static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6;
    int VAR7;
    static VAR8 *const VAR9[3] = {
        VAR10,
        VAR11,
        VAR12,
    };
    static VAR13 *const VAR14[3] = {
        VAR15,
        VAR16,
        VAR17,
    };
    FUN3("", VAR4);
    VAR4->VAR18 = FUN4(VAR19, VAR20, VAR4);
    VAR4->VAR21 = 0;
    VAR6 = VAR4->VAR2.VAR22;
    VAR7 = FUN5(VAR9, VAR14, VAR4, VAR23);
    FUN6(&VAR4->VAR2, 0, 0x10, 0, VAR7);
    return 0;
}