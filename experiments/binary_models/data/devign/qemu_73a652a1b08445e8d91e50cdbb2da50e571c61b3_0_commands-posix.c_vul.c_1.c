void FUN1(bool VAR1, int64_t VAR2, VAR3 **VAR4)
{
    int VAR5 = 0;
    FsMountList VAR6;
    struct VAR7 *VAR8;
    int VAR9;
    VAR3 *VAR10 = NULL;
    struct fstrim_range VAR11 = {
        .VAR12 = 0,
        .VAR13 = -1,
        .VAR14 = VAR1 ? VAR2 : 0,
    };
    FUN2("");
    FUN3(&VAR6);
    FUN4(&VAR6, &VAR10);
    if (VAR10)
    {
        FUN5(VAR4, VAR10);
        return;
    }
    FUN6(VAR8, &VAR6, VAR15)
    {
        VAR9 = FUN7(VAR8->VAR16, VAR17);
        if (VAR9 == -1)
        {
            FUN8(VAR4, VAR18, "", VAR8->VAR16);
            goto VAR19;
        }
        VAR5 = FUN9(VAR9, VAR20, &VAR11);
        if (VAR5 == -1)
        {
            if (VAR18 != VAR21 && VAR18 != VAR22)
            {
                FUN8(VAR4, VAR18, "", VAR8->VAR16);
                close(VAR9);
                goto VAR19;
            }
        }
        close(VAR9);
    }
VAR19:
    FUN10(&VAR6);
}