static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    int VAR6, VAR7, VAR8;
    char *VAR9;
    VAR6 = FUN3(VAR3, "");
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR9 = FUN4(VAR2);
    if (!VAR9)
    {
        return -VAR10;
    }
    VAR7 = FUN5(VAR3, VAR6, VAR9);
    free(VAR9);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    VAR8 = FUN6(VAR3, VAR7, "", VAR2->VAR11);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    if (VAR5->VAR12)
    {
        VAR8 = FUN7(VAR3, VAR7, "", VAR5->VAR12);
        if (VAR8 < 0)
        {
            return VAR8;
        }
    }
    if (VAR5->VAR13)
    {
        VAR8 = FUN7(VAR3, VAR7, "", VAR5->VAR13);
        if (VAR8 < 0)
        {
            return VAR8;
        }
    }
    if (VAR2->VAR14)
    {
        uint32_t VAR15[] = {FUN8(VAR2->VAR16), 0};
        VAR8 = FUN9(VAR3, VAR7, "", VAR15, sizeof(VAR15));
        if (VAR8 < 0)
        {
            return VAR8;
        }
    }
    if (VAR2->VAR17)
    {
        uint32_t VAR18[] = {FUN8(VAR2->VAR11), 0, 0, 0, FUN8(VAR2->VAR17)};
        VAR8 = FUN6(VAR3, VAR7, "", 2);
        if (VAR8 < 0)
        {
            return VAR8;
        }
        VAR8 = FUN6(VAR3, VAR7, "", 2);
        if (VAR8 < 0)
        {
            return VAR8;
        }
        VAR8 = FUN9(VAR3, VAR7, "", VAR18, sizeof(VAR18));
        if (VAR8 < 0)
        {
            return VAR8;
        }
    }
    if (VAR5->VAR19)
    {
        VAR8 = (VAR5->VAR19)(VAR2, VAR3, VAR7);
        if (VAR8 < 0)
        {
            return VAR8;
        }
    }
    return VAR7;
}