static int FUN1(VAR1 *VAR2, CCW1 VAR3, bool VAR4, bool VAR5)
{
    int VAR6;
    VqInfoBlock VAR7;
    VqInfoBlockLegacy VAR8;
    size_t VAR9 = VAR5 ? sizeof(VAR8) : sizeof(VAR7);
    if (VAR4)
    {
        if (VAR3.VAR10 != VAR9)
        {
            return -VAR11;
        }
    }
    else if (VAR3.VAR10 < VAR9)
    {
        return -VAR11;
    }
    if (!VAR3.VAR12)
    {
        return -VAR13;
    }
    if (VAR5)
    {
        FUN2(&VAR2->VAR14, VAR8);
        FUN3(&VAR8.VAR15);
        FUN4(&VAR8.VAR16);
        FUN5(&VAR8.VAR17);
        FUN5(&VAR8.VAR18);
        VAR6 = FUN6(VAR2, NULL, &VAR8);
    }
    else
    {
        FUN2(&VAR2->VAR14, VAR7);
        FUN3(&VAR7.VAR19);
        FUN5(&VAR7.VAR17);
        FUN5(&VAR7.VAR18);
        FUN3(&VAR7.VAR20);
        FUN3(&VAR7.VAR21);
        VAR6 = FUN6(VAR2, &VAR7, NULL);
    }
    VAR2->VAR22.VAR23.VAR10 = 0;
    return VAR6;
}