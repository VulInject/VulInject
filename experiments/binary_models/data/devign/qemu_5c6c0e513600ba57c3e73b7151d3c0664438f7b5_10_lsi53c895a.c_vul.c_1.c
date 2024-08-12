static void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4, VAR5;
    target_phys_addr_t VAR6;
    VAR7 *VAR8;
    assert(VAR2->VAR9);
    if (!VAR2->VAR9->VAR10)
    {
        FUN2("");
        return;
    }
    VAR5 = (VAR2->VAR9->VAR11 >> 8) & 0xf;
    VAR8 = VAR2->VAR12.VAR13[VAR5];
    if (!VAR8)
    {
        FUN3(VAR2, VAR5);
        return;
    }
    VAR4 = VAR2->VAR14;
    if (VAR4 > VAR2->VAR9->VAR10)
        VAR4 = VAR2->VAR9->VAR10;
    VAR6 = VAR2->VAR15;
    if (FUN4(VAR2) || FUN5(VAR2))
        VAR6 |= ((VAR16)VAR2->VAR17 << 32);
    else if (VAR2->VAR18)
        VAR6 |= ((VAR16)VAR2->VAR18 << 32);
    else if (VAR2->VAR19)
        VAR6 |= ((VAR16)VAR2->VAR19 << 32);
    FUN2("" VAR20 "", VAR6, VAR4);
    VAR2->VAR21 += VAR4;
    VAR2->VAR15 += VAR4;
    VAR2->VAR14 -= VAR4;
    if (VAR2->VAR9->VAR22 == NULL)
    {
        VAR2->VAR9->VAR22 = VAR8->VAR23->FUN6(VAR8, VAR2->VAR9->VAR11);
    }
    if (VAR3)
    {
        FUN7(VAR6, VAR2->VAR9->VAR22, VAR4);
    }
    else
    {
        FUN8(VAR6, VAR2->VAR9->VAR22, VAR4);
    }
    VAR2->VAR9->VAR10 -= VAR4;
    if (VAR2->VAR9->VAR10 == 0)
    {
        VAR2->VAR9->VAR22 = NULL;
        if (VAR3)
        {
            VAR8->VAR23->FUN9(VAR8, VAR2->VAR9->VAR11);
        }
        else
        {
            VAR8->VAR23->FUN10(VAR8, VAR2->VAR9->VAR11);
        }
    }
    else
    {
        VAR2->VAR9->VAR22 += VAR4;
        FUN11(VAR2);
    }
}