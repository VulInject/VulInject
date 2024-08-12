static bool FUN1(VAR1 *VAR2, unsigned int *VAR3, VAR4 *VAR5, struct VAR6 *VAR7, unsigned int VAR8, bool VAR9, hwaddr VAR10, size_t VAR11)
{
    bool VAR12 = false;
    unsigned VAR13 = *VAR3;
    assert(VAR13 <= VAR8);
    if (!VAR11)
    {
        FUN2(VAR2, "");
        goto VAR14;
    }
    while (VAR11)
    {
        hwaddr VAR15 = VAR11;
        if (VAR13 == VAR8)
        {
            FUN2(VAR2, ""
                               "");
            goto VAR14;
        }
        VAR7[VAR13].VAR16 = FUN3(VAR2->VAR17, VAR10, &VAR15, VAR9 ? VAR18 : VAR19);
        if (!VAR7[VAR13].VAR16)
        {
            FUN2(VAR2, "");
            goto VAR14;
        }
        VAR7[VAR13].VAR20 = VAR15;
        VAR5[VAR13] = VAR10;
        VAR11 -= VAR15;
        VAR10 += VAR15;
        VAR13++;
    }
    VAR12 = true;
VAR14:
    *VAR3 = VAR13;
    return VAR12;
}