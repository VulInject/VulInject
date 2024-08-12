void FUN1(phys_offset_to_gaddr_t VAR1, void *VAR2)
{
    unsigned long VAR3;
    struct rlimit VAR4;
    VAR5 = FUN2(sizeof(VAR6));
    VAR5->VAR7 = VAR1;
    VAR5->VAR2 = VAR2;
    FUN3(&VAR5->VAR8);
    FUN4(&VAR5->VAR9);
    if (FUN5() == 0)
    {
        VAR4.VAR10 = VAR11;
        VAR4.VAR12 = VAR11;
        VAR5->VAR13 = VAR14;
    }
    else
    {
        FUN6(VAR15, &VAR4);
        VAR4.VAR10 = VAR4.VAR12;
        if (VAR4.VAR12 != VAR11)
        {
            FUN7(""
                        "");
        }
        if (VAR4.VAR12 < VAR14 + VAR16)
        {
            VAR5->VAR13 = VAR4.VAR12 - VAR16;
        }
        else
        {
            VAR5->VAR13 = VAR14;
        }
    }
    FUN8(VAR15, &VAR4);
    VAR5->VAR17 = (((VAR5->VAR13 >> VAR18) + (1UL << (VAR19 - VAR18)) - 1) >> (VAR19 - VAR18));
    VAR3 = VAR5->VAR17 * sizeof(VAR20);
    VAR3 = (VAR3 + VAR21 - 1) & ~(VAR21 - 1);
    FUN9("", VAR22, VAR5->VAR17, VAR3);
    VAR5->VAR23 = FUN2(VAR3);
}