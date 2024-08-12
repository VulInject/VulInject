static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, int VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR2->VAR13[VAR3]->VAR14;
    VAR15 *VAR16 = &VAR9->VAR16;
    ogg_page VAR17;
    VAR7 = FUN2(VAR7, VAR12->VAR18, VAR19);
    if (!VAR9->VAR20)
    {
        while (FUN3(&VAR9->VAR21, &VAR17))
        {
            FUN4(&VAR2->VAR22, VAR17.VAR23, VAR17.VAR24);
            FUN4(&VAR2->VAR22, VAR17.VAR25, VAR17.VAR26);
            FUN5(&VAR2->VAR22);
        }
        VAR9->VAR20 = 1;
    }
    VAR16->VAR27 = (VAR4 *)VAR5;
    VAR16->VAR28 = VAR6;
    VAR16->VAR29 = VAR16->VAR30 == 0;
    VAR16->VAR31 = VAR7;
    FUN6(&VAR9->VAR21, VAR16);
    while (FUN7(&VAR9->VAR21, &VAR17))
    {
        FUN4(&VAR2->VAR22, VAR17.VAR23, VAR17.VAR24);
        FUN4(&VAR2->VAR22, VAR17.VAR25, VAR17.VAR26);
        FUN5(&VAR2->VAR22);
    }
    VAR16->VAR30++;
    return 0;
}