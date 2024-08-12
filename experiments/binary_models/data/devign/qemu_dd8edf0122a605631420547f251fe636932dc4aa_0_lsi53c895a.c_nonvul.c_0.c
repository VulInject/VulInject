static void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4;
    target_phys_addr_t VAR5;
    if (!VAR2->VAR6)
    {
        FUN2("");
        return;
    }
    VAR4 = VAR2->VAR7;
    if (VAR4 > VAR2->VAR6)
        VAR4 = VAR2->VAR6;
    VAR5 = VAR2->VAR8;
    if (FUN3(VAR2) || FUN4(VAR2))
        VAR5 |= ((VAR9)VAR2->VAR10 << 32);
    else if (VAR2->VAR11)
        VAR5 |= ((VAR9)VAR2->VAR11 << 32);
    else if (VAR2->VAR12)
        VAR5 |= ((VAR9)VAR2->VAR12 << 32);
    FUN2("" VAR13 "", VAR5, VAR4);
    VAR2->VAR14 += VAR4;
    VAR2->VAR8 += VAR4;
    VAR2->VAR7 -= VAR4;
    if (VAR2->VAR15 == NULL)
    {
        VAR2->VAR15 = VAR2->VAR16->FUN5(VAR2->VAR16, VAR2->VAR17);
    }
    if (VAR3)
    {
        FUN6(VAR5, VAR2->VAR15, VAR4);
    }
    else
    {
        FUN7(VAR5, VAR2->VAR15, VAR4);
    }
    VAR2->VAR6 -= VAR4;
    if (VAR2->VAR6 == 0)
    {
        VAR2->VAR15 = NULL;
        if (VAR3)
        {
            VAR2->VAR16->FUN8(VAR2->VAR16, VAR2->VAR17);
        }
        else
        {
            VAR2->VAR16->FUN9(VAR2->VAR16, VAR2->VAR17);
        }
    }
    else
    {
        VAR2->VAR15 += VAR4;
        FUN10(VAR2);
    }
}