static void FUN1(void *VAR1, VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = &VAR9;
    VAR10 *VAR11 = &VAR6->VAR11;
    int VAR12 = VAR4 >> VAR11->VAR13.VAR14;
    if (VAR8->VAR15)
    {
        return;
    }
    while (VAR12)
    {
        int VAR16, VAR17;
        FUN2(VAR8, "");
        if (VAR8->VAR15)
        {
            return;
        }
        if (FUN3(VAR8, ""))
        {
            return;
        }
        if (FUN4(VAR18, VAR6->VAR19 < 0 || VAR6->VAR19 > VAR11->VAR12))
        {
            FUN5("", VAR6->VAR19, VAR11->VAR12);
            return;
        }
        if (!VAR6->VAR19)
        {
            goto VAR20;
        }
        VAR16 = FUN6(VAR12, VAR6->VAR19);
        VAR17 = VAR16;
        while (VAR16)
        {
            int VAR21 = FUN6(VAR16, VAR11->VAR12 - VAR11->VAR22);
            struct VAR23 *VAR24 = VAR11->VAR25 + VAR11->VAR22;
            VAR11->FUN7(VAR3, VAR24, VAR21);
            VAR6->VAR22 = (VAR6->VAR22 + VAR21) % VAR11->VAR12;
            VAR16 -= VAR21;
            VAR3 += VAR21 << VAR11->VAR13.VAR14;
        }
        VAR12 -= VAR17;
        VAR6->VAR19 -= VAR17;
        VAR6->VAR17 += VAR17;
    VAR20:
        if (FUN8(VAR8, ""))
        {
            return;
        }
    }
}