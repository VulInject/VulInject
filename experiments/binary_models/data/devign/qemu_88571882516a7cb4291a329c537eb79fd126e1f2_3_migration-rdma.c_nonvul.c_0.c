static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = 0;
    VAR8 *VAR9 = &VAR2->VAR10[VAR11];
    struct VAR12 *VAR13;
    struct ibv_sge VAR14 = {
        .VAR15 = (VAR16)(VAR9->VAR17),
        .VAR18 = VAR6->VAR19 + sizeof(VAR5),
        .VAR20 = VAR9->VAR21->VAR20,
    };
    struct ibv_send_wr VAR22 = {
        .VAR23 = VAR24,
        .VAR25 = VAR26,
        .VAR27 = VAR28,
        .VAR29 = &VAR14,
        .VAR30 = 1,
    };
    FUN2("", VAR31[VAR6->VAR32]);
    assert(VAR6->VAR19 <= VAR33 - sizeof(*VAR6));
    memcpy(VAR9->VAR17, VAR6, sizeof(VAR5));
    FUN3((void *)VAR9->VAR17);
    if (VAR4)
    {
        memcpy(VAR9->VAR17 + sizeof(VAR5), VAR4, VAR6->VAR19);
    }
    if (FUN4(VAR2->VAR34, &VAR22, &VAR13))
    {
        return -1;
    }
    if (VAR7 < 0)
    {
        fprintf(VAR35, "");
        return VAR7;
    }
    VAR7 = FUN5(VAR2, VAR24, NULL);
    if (VAR7 < 0)
    {
        fprintf(VAR35, "");
    }
    return VAR7;
}