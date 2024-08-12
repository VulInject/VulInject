static inline VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5)
{
    struct VAR6 *VAR7 = FUN2(VAR3);
    abi_long VAR8;
    abi_ulong VAR9;
    struct VAR10 *VAR11;
    socklen_t VAR12 = 0;
    VAR8 = FUN3(VAR5->VAR8);
    if (VAR8 < sizeof(struct VAR10))
        goto VAR13;
    VAR9 = FUN3(VAR5->VAR14);
    VAR11 = FUN4(VAR15, VAR9, VAR8, 1);
    if (!VAR11)
        return -VAR16;
    while (VAR7 && VAR11)
    {
        void *VAR17 = FUN5(VAR7);
        void *VAR18 = FUN6(VAR11);
        int VAR19 = FUN3(VAR11->VAR20) - FUN7(sizeof(struct VAR10));
        VAR12 += FUN8(VAR19);
        if (VAR12 > VAR3->VAR8)
        {
            VAR12 -= FUN8(VAR19);
            FUN9("");
            break;
        }
        if (FUN10(VAR11->VAR21) == VAR22)
        {
            VAR7->VAR21 = VAR23;
        }
        else
        {
            VAR7->VAR21 = FUN10(VAR11->VAR21);
        }
        VAR7->VAR24 = FUN10(VAR11->VAR24);
        VAR7->VAR20 = FUN11(VAR19);
        if (VAR7->VAR21 == VAR23 && VAR7->VAR24 == VAR25)
        {
            int *VAR26 = (int *)VAR17;
            int *VAR27 = (int *)VAR18;
            int VAR28, VAR29 = VAR19 / sizeof(int);
            for (VAR28 = 0; VAR28 < VAR29; VAR28++)
                VAR26[VAR28] = FUN10(VAR27[VAR28]);
        }
        else if (VAR7->VAR21 == VAR23 && VAR7->VAR24 == VAR30)
        {
            struct VAR31 *VAR32 = (struct VAR31 *)VAR17;
            struct VAR33 *VAR34 = (struct VAR33 *)VAR18;
            FUN12(VAR34->VAR35, &VAR32->VAR35);
            FUN12(VAR34->VAR36, &VAR32->VAR36);
            FUN12(VAR34->VAR37, &VAR32->VAR37);
        }
        else
        {
            FUN9("", VAR7->VAR21, VAR7->VAR24);
            memcpy(VAR17, VAR18, VAR19);
        }
        VAR7 = FUN13(VAR3, VAR7);
        VAR11 = FUN14(VAR5, VAR11);
    }
    FUN15(VAR11, VAR9, 0);
VAR13:
    VAR3->VAR8 = VAR12;
    return 0;
}