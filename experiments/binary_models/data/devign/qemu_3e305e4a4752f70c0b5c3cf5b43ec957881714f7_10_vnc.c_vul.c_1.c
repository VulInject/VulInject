static VAR1 *FUN1(const VAR2 *VAR3)
{
    struct sockaddr_storage VAR4;
    socklen_t VAR5 = sizeof(VAR4);
    char VAR6[VAR7];
    char VAR8[VAR9];
    VAR1 *VAR10;
    if (FUN2(VAR3->VAR11, (struct VAR12 *)&VAR4, &VAR5) < 0)
    {
        return NULL;
    }
    if (getnameinfo((struct VAR12 *)&VAR4, VAR5, VAR6, sizeof(VAR6), VAR8, sizeof(VAR8), VAR13 | VAR14) < 0)
    {
        return NULL;
    }
    VAR10 = FUN3(sizeof(*VAR10));
    VAR10->VAR15 = FUN3(sizeof(*VAR10->VAR15));
    VAR10->VAR15->VAR6 = FUN4(VAR6);
    VAR10->VAR15->VAR16 = FUN4(VAR8);
    VAR10->VAR15->VAR17 = FUN5(VAR4.VAR18);
    VAR10->VAR15->VAR19 = VAR3->VAR19;
    if (VAR3->VAR20.VAR21 && VAR3->VAR20.VAR22)
    {
        VAR10->VAR23 = true;
        VAR10->VAR24 = FUN4(VAR3->VAR20.VAR22);
    }
    if (VAR3->VAR25.VAR26 && VAR3->VAR25.VAR27)
    {
        VAR10->VAR28 = true;
        VAR10->VAR29 = FUN4(VAR3->VAR25.VAR27);
    }
    return VAR10;
}