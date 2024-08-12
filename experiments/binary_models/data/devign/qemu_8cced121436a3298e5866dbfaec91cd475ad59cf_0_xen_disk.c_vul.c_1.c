static int FUN1(struct VAR1 *VAR1)
{
    struct VAR2 *VAR3 = VAR1->VAR3;
    int VAR4 = 0;
    int VAR5 = 0;
    blkif_response_t VAR6;
    void *VAR7;
    VAR6.VAR8 = VAR1->VAR9.VAR8;
    VAR6.VAR10 = VAR1->VAR9.VAR10;
    VAR6.VAR11 = VAR1->VAR11;
    switch (VAR3->VAR12)
    {
    case VAR13:
        VAR7 = FUN2(&VAR3->VAR14.VAR15, VAR3->VAR14.VAR15.VAR16);
        break;
    case VAR17:
        VAR7 = FUN2(&VAR3->VAR14.VAR18, VAR3->VAR14.VAR18.VAR16);
        break;
    case VAR19:
        VAR7 = FUN2(&VAR3->VAR14.VAR20, VAR3->VAR14.VAR20.VAR16);
        break;
    default:
        VAR7 = NULL;
    }
    memcpy(VAR7, &VAR6, sizeof(VAR6));
    VAR3->VAR14.VAR21.VAR16++;
    FUN3(&VAR3->VAR14.VAR21, VAR4);
    if (VAR3->VAR14.VAR21.VAR16 == VAR3->VAR14.VAR21.VAR22)
    {
        FUN4(&VAR3->VAR14.VAR21, VAR5);
    }
    else if (FUN5(&VAR3->VAR14.VAR21))
    {
        VAR5 = 1;
    }
    if (VAR5)
    {
        VAR3->VAR23++;
    }
    return VAR4;