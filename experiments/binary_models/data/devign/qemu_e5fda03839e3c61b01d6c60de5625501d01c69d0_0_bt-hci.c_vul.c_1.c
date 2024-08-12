static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    evt_remote_name_req_complete VAR7;
    int VAR8;
    for (VAR6 = VAR2->VAR9.VAR10->VAR6; VAR6; VAR6 = VAR6->VAR11)
        if (VAR6->VAR12 && !FUN2(&VAR6->VAR13, VAR4))
            break;
    if (!VAR6)
        return -VAR14;
    FUN3(VAR2, VAR15);
    VAR7.VAR16 = VAR15;
    FUN4(&VAR7.VAR4, &VAR6->VAR13);
    VAR8 = snprintf(VAR7.VAR17, sizeof(VAR7.VAR17), "", VAR6->VAR18 ?: "");
    memset(VAR7.VAR17 + VAR8, 0, sizeof(VAR7.VAR17) - VAR8);
    FUN5(VAR2, VAR19, &VAR7, VAR20);
    return 0;
}