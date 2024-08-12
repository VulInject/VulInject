static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    if (VAR2->VAR10 != VAR11)
    {
        FUN2(VAR7, "", VAR2->VAR10);
        return -1;
    }
    VAR9 = FUN3(VAR8, 1);
    VAR9->VAR12.VAR13.VAR4 = FUN3(VAR3, VAR5);
    memcpy(VAR9->VAR12.VAR13.VAR4, VAR4, VAR5);
    VAR9->VAR12.VAR13.VAR5 = VAR5;
    VAR9->free = VAR14;
    VAR9->VAR15 = VAR16;
    VAR9->VAR17 = VAR18;
    VAR9->VAR19 = VAR20;
    VAR2->VAR21 = VAR9;
    return 0;