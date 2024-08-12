static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    int VAR6;
    struct sg_scsi_id VAR7;
    if (!VAR2->VAR8.VAR9)
    {
        FUN2(VAR4, "");
        return;
    }
    if (FUN3(VAR2->VAR8.VAR9, 0) != VAR10)
    {
        FUN2(VAR4, "");
        return;
    }
    if (FUN3(VAR2->VAR8.VAR9, 1) != VAR11)
    {
        FUN2(VAR4, "");
        return;
    }
    VAR5 = FUN4(VAR2->VAR8.VAR9, VAR12, &VAR6);
    if (VAR5 < 0)
    {
        FUN2(VAR4, ""
                         "",
                   strerror(-VAR5));
        return;
    }
    if (VAR6 < 30000)
    {
        FUN2(VAR4, "");
        return;
    }
    if (FUN4(VAR2->VAR8.VAR9, VAR13, &VAR7))
    {
        FUN2(VAR4, "");
        return;
    }
    VAR2->VAR14 = VAR7.VAR15;
    FUN5("", VAR2->VAR14);
    switch (VAR2->VAR14)
    {
    case VAR16:
        VAR2->VAR17 = FUN6(VAR2->VAR8.VAR9);
        if (VAR2->VAR17 == -1)
        {
            VAR2->VAR17 = 0;
        }
        break;
    case VAR18:
    case VAR19:
        VAR2->VAR17 = 2048;
        break;
    default:
        VAR2->VAR17 = 512;
        break;
    }
    FUN5("", VAR2->VAR17);
}