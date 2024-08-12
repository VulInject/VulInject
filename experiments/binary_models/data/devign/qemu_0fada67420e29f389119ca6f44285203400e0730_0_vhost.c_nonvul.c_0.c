int FUN1(struct VAR1 *VAR2, int VAR3, const char *VAR4, bool VAR5)
{
    uint64_t VAR6;
    int VAR7;
    if (VAR3 >= 0)
    {
        VAR2->VAR8 = VAR3;
    }
    else
    {
        VAR2->VAR8 = open(VAR4, VAR9);
        if (VAR2->VAR8 < 0)
        {
            return -VAR10;
        }
    }
    VAR7 = FUN2(VAR2->VAR8, VAR11, NULL);
    if (VAR7 < 0)
    {
        goto VAR12;
    }
    VAR7 = FUN2(VAR2->VAR8, VAR13, &VAR6);
    if (VAR7 < 0)
    {
        goto VAR12;
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR14 = (VAR15){.VAR16 = VAR17, .VAR18 = VAR19, .VAR20 = VAR21, .VAR22 = VAR23, .VAR24 = VAR25, .VAR26 = VAR27, .VAR28 = VAR29, .VAR30 = VAR31, .VAR32 = VAR33, .VAR34 = VAR35, .VAR36 = VAR37, .VAR38 = VAR39, .VAR40 = 10};
    VAR2->VAR41 = FUN3(FUN4(struct VAR42, VAR43));
    VAR2->VAR44 = 0;
    VAR2->VAR45 = NULL;
    VAR2->VAR46 = NULL;
    VAR2->VAR47 = 0;
    VAR2->VAR48 = false;
    VAR2->VAR49 = false;
    FUN5(&VAR2->VAR14, FUN6());
    VAR2->VAR5 = VAR5;
    return 0;
VAR12:
    VAR7 = -VAR10;
    close(VAR2->VAR8);
    return VAR7;
}