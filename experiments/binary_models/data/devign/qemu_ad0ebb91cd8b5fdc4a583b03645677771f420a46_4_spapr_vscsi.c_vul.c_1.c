static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    struct mad_adapter_info_data VAR7;
    int VAR8;
    VAR6 = &VAR4->VAR9.VAR10.VAR11;
    VAR8 = FUN2(&VAR2->VAR12, FUN3(VAR6->VAR13), &VAR7, FUN4(VAR6->VAR14.VAR15));
    if (VAR8)
    {
        fprintf(VAR16, "");
    }
    memset(&VAR7, 0, sizeof(VAR7));
    strcpy(VAR7.VAR17, VAR18);
    strncpy(VAR7.VAR19, "", sizeof(""));
    VAR7.VAR20 = FUN5(0);
    VAR7.VAR21 = FUN5(1);
    VAR7.VAR22 = FUN5(2);
    VAR7.VAR23[0] = FUN5(VAR24 << 9);
    VAR8 = FUN6(&VAR2->VAR12, FUN3(VAR6->VAR13), &VAR7, FUN4(VAR6->VAR14.VAR15));
    if (VAR8)
    {
        fprintf(VAR16, "");
    }
    VAR6->VAR14.VAR25 = VAR8 ? FUN5(1) : 0;
    return FUN7(VAR2, VAR4, sizeof(*VAR6), VAR26);
}