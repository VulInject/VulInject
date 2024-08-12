static inline VAR1 FUN1(void *VAR2, abi_ulong VAR3, struct VAR4 *VAR5)
{
    if (((VAR6 *)VAR2)->VAR7)
    {
        struct VAR8 *VAR9;
        if (!FUN2(VAR10, VAR9, VAR3, 0))
            return -VAR11;
        memset(VAR9, 0, sizeof(struct VAR8));
        FUN3(VAR5->VAR12, &VAR9->VAR12);
        FUN3(VAR5->VAR13, &VAR9->VAR13);
        FUN3(VAR5->VAR13, &VAR9->VAR14);
        FUN3(VAR5->VAR15, &VAR9->VAR15);
        FUN3(VAR5->VAR16, &VAR9->VAR16);
        FUN3(VAR5->VAR17, &VAR9->VAR17);
        FUN3(VAR5->VAR18, &VAR9->VAR18);
        FUN3(VAR5->VAR19, &VAR9->VAR19);
        FUN3(VAR5->VAR20, &VAR9->VAR20);
        FUN3(VAR5->VAR21, &VAR9->VAR21);
        FUN3(VAR5->VAR22, &VAR9->VAR22);
        FUN3(VAR5->VAR23, &VAR9->VAR24);
        FUN3(VAR5->VAR25, &VAR9->VAR26);
        FUN3(VAR5->VAR27, &VAR9->VAR28);
        FUN4(VAR9, VAR3, 1);
    }
    else
    {
        struct VAR29 *VAR9;
        struct VAR30 *VAR9;
        if (!FUN2(VAR10, VAR9, VAR3, 0))
            return -VAR11;
        memset(VAR9, 0, sizeof(*VAR9));
        FUN3(VAR5->VAR12, &VAR9->VAR12);
        FUN3(VAR5->VAR13, &VAR9->VAR13);
        FUN3(VAR5->VAR13, &VAR9->VAR14);
        FUN3(VAR5->VAR15, &VAR9->VAR15);
        FUN3(VAR5->VAR16, &VAR9->VAR16);
        FUN3(VAR5->VAR17, &VAR9->VAR17);
        FUN3(VAR5->VAR18, &VAR9->VAR18);
        FUN3(VAR5->VAR19, &VAR9->VAR19);
        FUN3(VAR5->VAR20, &VAR9->VAR20);
        FUN3(VAR5->VAR21, &VAR9->VAR21);
        FUN3(VAR5->VAR22, &VAR9->VAR22);
        FUN3(VAR5->VAR23, &VAR9->VAR24);
        FUN3(VAR5->VAR25, &VAR9->VAR26);
        FUN3(VAR5->VAR27, &VAR9->VAR28);
        FUN4(VAR9, VAR3, 1);
    }
    return 0;
}