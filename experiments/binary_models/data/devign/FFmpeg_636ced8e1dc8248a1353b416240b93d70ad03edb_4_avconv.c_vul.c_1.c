static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int *VAR7)
{
    int VAR8, VAR9;
    AVPacket VAR10;
    VAR11 *VAR12 = VAR4->VAR13->VAR14;
    *VAR7 = 0;
    VAR9 = VAR15;
    if (VAR9 == VAR16)
        VAR9 = (VAR2->VAR17->VAR18 & VAR19) ? VAR20 : (VAR2->VAR17->VAR18 & VAR21) ? VAR22
                                                                                                                                    : VAR23;
    if (VAR9 != VAR20 && VAR4->VAR24 && VAR6->VAR25 != VAR26 && VAR6->VAR25 < VAR4->VAR27)
    {
        VAR28++;
        FUN2(NULL, VAR29, "");
        return;
    }
    if (VAR6->VAR25 == VAR26)
        VAR6->VAR25 = VAR4->VAR27;
    VAR4->VAR27 = VAR6->VAR25;
    if (!VAR4->VAR24)
        VAR4->VAR30 = VAR6->VAR25;
    FUN3(&VAR10);
    VAR10.VAR31 = NULL;
    VAR10.VAR32 = 0;
    if (VAR4->VAR24 >= VAR4->VAR33)
        return;
    if (VAR2->VAR17->VAR18 & VAR34 && VAR12->VAR14->VAR35 == VAR36)
    {
        VAR12->VAR37->VAR38 = VAR6->VAR38;
        VAR12->VAR37->VAR39 = VAR6->VAR39;
        VAR10.VAR31 = (VAR40 *)VAR6;
        VAR10.VAR32 = sizeof(VAR41);
        VAR10.VAR25 = FUN4(VAR6->VAR25, VAR12->VAR42, VAR4->VAR13->VAR42);
        VAR10.VAR18 |= VAR43;
        FUN5(VAR2, &VAR10, VAR4);
    }
    else
    {
        int VAR44;
        if (VAR4->VAR13->VAR14->VAR18 & (VAR45 | VAR46) && VAR4->VAR39 >= 0)
            VAR6->VAR39 = !!VAR4->VAR39;
        VAR6->VAR47 = VAR4->VAR13->VAR14->VAR48;
        if (!VAR12->VAR49)
            VAR6->VAR50 = 0;
        if (VAR4->VAR51 < VAR4->VAR52 && VAR6->VAR25 >= VAR4->VAR53[VAR4->VAR51])
        {
            VAR6->VAR50 = VAR54;
            VAR4->VAR51++;
        }
        VAR8 = FUN6(VAR12, &VAR10, VAR6, &VAR44);
        if (VAR8 < 0)
        {
            FUN2(NULL, VAR55, "");
            FUN7(1);
        }
        if (VAR44)
        {
            if (VAR10.VAR25 != VAR26)
                VAR10.VAR25 = FUN4(VAR10.VAR25, VAR12->VAR42, VAR4->VAR13->VAR42);
            if (VAR10.VAR56 != VAR26)
                VAR10.VAR56 = FUN4(VAR10.VAR56, VAR12->VAR42, VAR4->VAR13->VAR42);
            FUN5(VAR2, &VAR10, VAR4);
            *VAR7 = VAR10.VAR32;
            VAR57 += VAR10.VAR32;
            if (VAR4->VAR58 && VAR12->VAR59)
            {
                fprintf(VAR4->VAR58, "", VAR12->VAR59);
            }
        }
    }
    VAR4->VAR27++;
    VAR4->VAR24++;
}