static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VirtQueueElement VAR6;
    int32_t VAR7 = 0;
    if (!(VAR3->VAR8.VAR9 & VAR10))
    {
        return VAR7;
    }
    if (VAR3->VAR11.VAR6.VAR12)
    {
        FUN2(VAR3->VAR13, 0);
        return VAR7;
    }
    while (FUN3(VAR5, &VAR6))
    {
        ssize_t VAR14, VAR15 = 0;
        unsigned int VAR12 = VAR6.VAR12;
        struct VAR16 *VAR17 = &VAR6.VAR17[0];
        unsigned VAR18;
        VAR18 = VAR3->VAR19 ? sizeof(struct VAR20) : sizeof(struct VAR21);
        if (VAR12 < 1 || VAR17->VAR22 != VAR18)
        {
            FUN4("");
            FUN5(1);
        }
        if (!VAR3->VAR23)
        {
            VAR12--;
            VAR17++;
            VAR15 += VAR18;
        }
        else if (VAR3->VAR19)
        {
            VAR18 -= sizeof(struct VAR21);
            VAR17->VAR22 -= VAR18;
            VAR15 += VAR18;
        }
        VAR14 = FUN6(&VAR3->VAR24->VAR25, VAR17, VAR12, VAR26);
        if (VAR14 == 0)
        {
            FUN2(VAR3->VAR13, 0);
            VAR3->VAR11.VAR6 = VAR6;
            VAR3->VAR11.VAR15 = VAR15;
            return -VAR27;
        }
        VAR15 += VAR14;
        FUN7(VAR5, &VAR6, VAR15);
        FUN8(&VAR3->VAR8, VAR5);
        if (++VAR7 >= VAR3->VAR28)
        {
            break;
        }
    }
    return VAR7;
}