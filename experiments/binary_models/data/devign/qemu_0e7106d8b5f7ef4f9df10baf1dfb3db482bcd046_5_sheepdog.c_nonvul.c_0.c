static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    SheepdogReq VAR8;
    int VAR9, VAR10 = 1024, VAR11, VAR12 = FUN2(VAR13) * sizeof(long);
    VAR3 *VAR14 = NULL;
    unsigned VAR15, VAR16;
    int VAR17 = 0;
    static SheepdogInode VAR18;
    unsigned long *VAR19;
    unsigned int VAR20;
    uint64_t VAR21;
    uint32_t VAR22;
    VAR19 = FUN3(VAR12);
    VAR9 = FUN4(VAR6->VAR23, VAR6->VAR24);
    if (VAR9 < 0)
    {
        VAR11 = VAR9;
        goto VAR25;
    }
    VAR16 = VAR12;
    VAR15 = 0;
    memset(&VAR8, 0, sizeof(VAR8));
    VAR8.VAR26 = VAR27;
    VAR8.VAR28 = VAR12;
    VAR11 = FUN5(VAR9, (VAR29 *)&VAR8, VAR19, &VAR15, &VAR16);
    FUN6(VAR9);
    if (VAR11)
    {
        goto VAR25;
    }
    VAR14 = FUN7(VAR10 * sizeof(*VAR14));
    VAR21 = FUN8(VAR6->VAR30, strlen(VAR6->VAR30), VAR31);
    VAR20 = VAR21 & (VAR13 - 1);
    VAR9 = FUN4(VAR6->VAR23, VAR6->VAR24);
    if (VAR9 < 0)
    {
        FUN9("");
        VAR11 = VAR9;
        goto VAR25;
    }
    for (VAR22 = VAR20; VAR17 < VAR10; VAR22 = (VAR22 + 1) % VAR13)
    {
        if (!FUN10(VAR22, VAR19))
        {
            break;
        }
        VAR11 = FUN11(VAR9, (char *)&VAR18, FUN12(VAR22), 0, VAR32 - sizeof(VAR18.VAR33), 0, VAR6->VAR34);
        if (VAR11)
        {
            continue;
        }
        if (!strcmp(VAR18.VAR30, VAR6->VAR30) && FUN13(&VAR18))
        {
            VAR14[VAR17].VAR35 = VAR18.VAR36 >> 32;
            VAR14[VAR17].VAR37 = VAR18.VAR36 & 0xffffffff;
            VAR14[VAR17].VAR38 = VAR18.VAR38;
            VAR14[VAR17].VAR39 = VAR18.VAR39;
            snprintf(VAR14[VAR17].VAR40, sizeof(VAR14[VAR17].VAR40), "", VAR18.VAR41);
            FUN14(VAR14[VAR17].VAR30, FUN15(sizeof(VAR14[VAR17].VAR30), sizeof(VAR18.VAR42)), VAR18.VAR42);
            VAR17++;
        }
    }
    FUN6(VAR9);
VAR25:
    *VAR4 = VAR14;
    FUN16(VAR19);
    if (VAR11 < 0)
    {
        return VAR11;
    }
    return VAR17;
}