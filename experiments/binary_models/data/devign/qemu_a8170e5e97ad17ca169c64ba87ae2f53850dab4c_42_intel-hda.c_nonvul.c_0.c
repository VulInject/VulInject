static bool FUN1(VAR1 *VAR2, uint32_t VAR3, bool VAR4, VAR5 *VAR6, uint32_t VAR7)
{
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR2->VAR11.VAR12);
    VAR13 *VAR14 = FUN3(VAR9, VAR13, VAR15);
    hwaddr VAR16;
    uint32_t VAR17, copy, VAR18;
    VAR19 *VAR20;
    bool VAR21 = false;
    VAR20 = VAR4 ? VAR14->VAR20 + 4 : VAR14->VAR20;
    for (VAR17 = 0; VAR17 < 4; VAR17++)
    {
        if (VAR3 == ((VAR20[VAR17].VAR22 >> 20) & 0x0f))
        {
            VAR20 = VAR20 + VAR17;
            break;
        }
    }
    if (VAR17 == 4)
    {
        return false;
    }
    if (VAR20->VAR23 == NULL)
    {
        return false;
    }
    if (VAR20->VAR22 & (1 << 26))
    {
        return false;
    }
    VAR18 = VAR7;
    while (VAR18 > 0)
    {
        copy = VAR18;
        if (copy > VAR20->VAR24 - VAR20->VAR25)
            copy = VAR20->VAR24 - VAR20->VAR25;
        if (copy > VAR20->VAR23[VAR20->VAR26].VAR7 - VAR20->VAR27)
            copy = VAR20->VAR23[VAR20->VAR26].VAR7 - VAR20->VAR27;
        FUN4(VAR14, 3, "", VAR20->VAR26, VAR20->VAR27, VAR20->VAR23[VAR20->VAR26].VAR7, copy);
        FUN5(&VAR14->VAR28, VAR20->VAR23[VAR20->VAR26].VAR16 + VAR20->VAR27, VAR6, copy, !VAR4);
        VAR20->VAR25 += copy;
        VAR20->VAR27 += copy;
        VAR6 += copy;
        VAR18 -= copy;
        if (VAR20->VAR23[VAR20->VAR26].VAR7 == VAR20->VAR27)
        {
            if (VAR20->VAR23[VAR20->VAR26].VAR29 & 0x01)
            {
                VAR21 = true;
            }
            VAR20->VAR27 = 0;
            VAR20->VAR26++;
            if (VAR20->VAR26 == VAR20->VAR30)
            {
                VAR20->VAR26 = 0;
                VAR20->VAR25 = 0;
            }
        }
    }
    if (VAR14->VAR31 & 0x01)
    {
        VAR16 = FUN6(VAR14->VAR31 & ~0x01, VAR14->VAR32);
        FUN7(&VAR14->VAR28, VAR16 + 8 * VAR17, VAR20->VAR25);
    }
    FUN4(VAR14, 3, "");
    if (VAR21)
    {
        VAR20->VAR22 |= (1 << 26);
        FUN8(VAR14);
    }
    return true;
}