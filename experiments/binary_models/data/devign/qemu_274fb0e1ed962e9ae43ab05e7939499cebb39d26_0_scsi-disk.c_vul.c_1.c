VAR1 *FUN1(VAR2 *VAR3, int VAR4, scsi_completionfn VAR5, void *VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9;
    VAR9 = (VAR8 *)FUN2(sizeof(VAR8));
    VAR9->VAR3 = VAR3;
    VAR9->VAR4 = VAR4;
    VAR9->VAR5 = VAR5;
    VAR9->VAR6 = VAR6;
    if (FUN3(VAR9->VAR3) == VAR10)
    {
        VAR9->VAR11 = 4;
    }
    else
    {
        VAR9->VAR11 = 1;
    }
    FUN4(VAR9->VAR3, &VAR12);
    VAR12 /= VAR9->VAR11;
    if (VAR12)
        VAR12--;
    VAR9->VAR13 = VAR12;
    strncpy(VAR9->VAR14, FUN5(VAR9->VAR3), sizeof(VAR9->VAR14));
    if (strlen(VAR9->VAR14) == 0)
        FUN6(VAR9->VAR14, sizeof(VAR9->VAR14), "");
    FUN7(VAR15, VAR9);
    VAR7 = (VAR1 *)FUN2(sizeof(VAR1));
    VAR7->VAR16 = VAR9;
    VAR7->VAR17 = VAR18;
    VAR7->VAR19 = VAR20;
    VAR7->VAR21 = VAR22;
    VAR7->VAR23 = VAR24;
    VAR7->VAR25 = VAR26;
    VAR7->VAR27 = VAR28;
    return VAR7;