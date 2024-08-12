static int FUN1(VAR1 *VAR2, IDEDriveKind VAR3)
{
    VAR4 *VAR5 = FUN2(VAR4, VAR6, VAR2->VAR7.VAR8);
    VAR9 *VAR10 = VAR5->VAR11 + VAR2->VAR12;
    const char *VAR13;
    VAR14 *VAR15;
    if (VAR2->VAR16.VAR17 && VAR2->VAR16.VAR17 != 512)
    {
        FUN3("");
        return -1;
    }
    VAR13 = VAR2->VAR13;
    if (!VAR13)
    {
        VAR15 = FUN4(VAR2->VAR16.VAR18);
        if (*VAR15->VAR13)
        {
            VAR13 = VAR15->VAR13;
        }
    }
    if (FUN5(VAR10, VAR2->VAR16.VAR18, VAR3, VAR2->VAR19, VAR13, VAR2->VAR20) < 0)
    {
        return -1;
    }
    if (!VAR2->VAR19)
    {
        VAR2->VAR19 = FUN6(VAR10->VAR19);
    }
    if (!VAR2->VAR13)
    {
        VAR2->VAR13 = FUN6(VAR10->VAR21);
    }
    FUN7(VAR2->VAR16.VAR22, &VAR2->VAR7, VAR2->VAR12 ? "" : "");
    return 0;
}