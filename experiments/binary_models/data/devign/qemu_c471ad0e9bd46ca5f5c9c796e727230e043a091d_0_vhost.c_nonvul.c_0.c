static int FUN1(struct VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    int VAR5, VAR6;
    int VAR7 = 0;
    const char *VAR8[] = {"", "", ""};
    for (VAR5 = 0; VAR5 < VAR2->VAR9; ++VAR5)
    {
        struct VAR10 *VAR11 = VAR2->VAR12 + VAR5;
        VAR6 = 0;
        VAR7 = FUN2(VAR2, VAR11->VAR13, VAR11->VAR14, VAR11->VAR15, VAR3, VAR4);
        if (!VAR7)
        {
            break;
        }
        VAR6++;
        VAR7 = FUN2(VAR2, VAR11->VAR16, VAR11->VAR17, VAR11->VAR18, VAR3, VAR4);
        if (!VAR7)
        {
            break;
        }
        VAR6++;
        VAR7 = FUN2(VAR2, VAR11->VAR19, VAR11->VAR20, VAR11->VAR21, VAR3, VAR4);
        if (!VAR7)
        {
            break;
        }
    }
    if (VAR7 == -VAR22)
    {
        FUN3("", VAR8[VAR6], VAR5);
    }
    else if (VAR7 == -VAR23)
    {
        FUN3("", VAR8[VAR6], VAR5);
    }
    return VAR7;
}