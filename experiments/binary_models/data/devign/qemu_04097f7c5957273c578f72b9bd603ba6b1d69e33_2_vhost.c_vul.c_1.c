int FUN1(struct VAR1 *VAR2, int VAR3, bool VAR4)
{
    uint64_t VAR5;
    int VAR6;
    if (VAR3 >= 0)
    {
        VAR2->VAR7 = VAR3;
    }
    else
    {
        VAR2->VAR7 = open("", VAR8);
        if (VAR2->VAR7 < 0)
        {
            return -VAR9;
        }
    }
    VAR6 = FUN2(VAR2->VAR7, VAR10, NULL);
    if (VAR6 < 0)
    {
        goto VAR11;
    }
    VAR6 = FUN2(VAR2->VAR7, VAR12, &VAR5);
    if (VAR6 < 0)
    {
        goto VAR11;
    }
    VAR2->VAR5 = VAR5;
    VAR2->VAR13.VAR14 = VAR15;
    VAR2->VAR13.VAR16 = VAR17;
    VAR2->VAR13.VAR18 = VAR19;
    VAR2->VAR13.VAR20 = NULL;
    VAR2->VAR13.VAR21 = NULL;
    VAR2->VAR22 = FUN3(FUN4(struct VAR23, VAR24));
    VAR2->VAR25 = NULL;
    VAR2->VAR26 = 0;
    VAR2->VAR27 = false;
    VAR2->VAR28 = false;
    FUN5(&VAR2->VAR13);
    VAR2->VAR4 = VAR4;
    return 0;
VAR11:
    VAR6 = -VAR9;
    close(VAR2->VAR7);
    return VAR6;
}