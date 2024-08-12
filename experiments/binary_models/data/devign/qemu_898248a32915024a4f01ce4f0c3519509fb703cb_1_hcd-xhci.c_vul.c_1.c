static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    dma_addr_t VAR8;
    unsigned int VAR9;
    if (VAR5 >= VAR2->VAR10)
    {
        FUN2("", VAR5, VAR2->VAR10);
        return;
    }
    VAR7 = &VAR2->VAR7[VAR5];
    if (VAR7->VAR11)
    {
        FUN2("");
        if (((VAR7->VAR12 + 1) % VAR13) == VAR7->VAR14)
        {
            FUN2("");
            return;
        }
        VAR7->VAR15[VAR7->VAR12++] = *VAR4;
        if (VAR7->VAR12 == VAR13)
        {
            VAR7->VAR12 = 0;
        }
        return;
    }
    VAR8 = FUN3(VAR7->VAR16, VAR7->VAR17);
    if (VAR8 < VAR7->VAR18 || VAR8 >= (VAR7->VAR18 + VAR19 * VAR7->VAR20))
    {
        FUN2("" VAR21 "", VAR8);
        FUN2("" VAR21 "", VAR5, VAR7->VAR18, VAR7->VAR20);
        FUN4(VAR2);
        return;
    }
    VAR9 = (VAR8 - VAR7->VAR18) / VAR19;
    assert(VAR9 < VAR7->VAR20);
    if ((VAR7->VAR22 + 1) % VAR7->VAR20 == VAR9)
    {
        FUN2("");
        XHCIEvent VAR23 = {VAR24, VAR25};
        FUN5(VAR2, &VAR23);
        VAR7->VAR11 = 1;
        if (((VAR7->VAR12 + 1) % VAR13) == VAR7->VAR14)
        {
            FUN2("");
            return;
        }
        VAR7->VAR15[VAR7->VAR12++] = *VAR4;
        if (VAR7->VAR12 == VAR13)
        {
            VAR7->VAR12 = 0;
        }
    }
    else
    {
        FUN5(VAR2, VAR4, VAR5);
    }
    FUN6(VAR2, VAR5);
}