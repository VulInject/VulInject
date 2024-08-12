long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5;
    sigset_t VAR6;
    target_sigset_t VAR7;
    int VAR8;
    fprintf(VAR9, "");
    VAR5 = VAR2->VAR10.VAR11[29];
    if (!FUN2(VAR12, VAR4, VAR5, 1))
        goto VAR13;
    for (VAR8 = 0; VAR8 < VAR14; VAR8++)
    {
        if (FUN3(VAR7.VAR15[VAR8], &VAR4->VAR16.VAR15[VAR8]))
            goto VAR13;
    }
    FUN4(&VAR6, &VAR7);
    FUN5(VAR17, &VAR6, NULL);
    if (FUN6(VAR2, &VAR4->VAR18))
        goto VAR13;
    VAR19 FUN7(""
                         ""
                         :
                         : ""(&VAR2));
    VAR2->VAR10.VAR20 = VAR2->VAR21;
    FUN8(VAR2);
    VAR2->VAR21 = 0;
    return -VAR22;
VAR13:
    FUN9(VAR23);
    return 0;
}