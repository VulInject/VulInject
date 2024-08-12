static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5, VAR2);
    int VAR6;
    struct sg_scsi_id VAR7;
    if (!VAR4->VAR5.VAR8.VAR9)
    {
        FUN3("");
        return -1;
    }
    VAR4->VAR9 = VAR4->VAR5.VAR8.VAR9;
    if (!FUN4(VAR4->VAR9))
    {
        FUN3("");
        return -1;
    }
    if (FUN5(VAR4->VAR9, VAR10, &VAR6) < 0 || VAR6 < 30000)
    {
        FUN3("");
        return -1;
    }
    if (FUN5(VAR4->VAR9, VAR11, &VAR7))
    {
        FUN3("");
        return -1;
    }
    VAR4->VAR12 = VAR7.VAR12;
    FUN6("", VAR4->VAR12);
    VAR4->VAR5.VAR13 = VAR7.VAR14;
    FUN6("", VAR4->VAR5.VAR13);
    if (VAR4->VAR5.VAR13 == VAR15)
    {
        VAR4->VAR5.VAR16 = FUN7(VAR4->VAR9);
        if (VAR4->VAR5.VAR16 == -1)
            VAR4->VAR5.VAR16 = 0;
    }
    else
    {
        VAR4->VAR5.VAR16 = FUN8(VAR4->VAR9);
        if (VAR4->VAR5.VAR16 <= 0)
        {
            if (VAR4->VAR5.VAR13 == VAR17 || VAR4->VAR5.VAR13 == VAR18)
                VAR4->VAR5.VAR16 = 2048;
            else
                VAR4->VAR5.VAR16 = 512;
        }
    }
    FUN6("", VAR4->VAR5.VAR16);
    VAR4->VAR19 = 0;
    memset(VAR4->VAR20, 0, sizeof(VAR4->VAR20));
    return 0;
}