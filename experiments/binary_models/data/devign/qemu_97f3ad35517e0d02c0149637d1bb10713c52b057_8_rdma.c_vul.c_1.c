static int FUN1(VAR1 *VAR2, const char *VAR3, void *VAR4, ram_addr_t VAR5, uint64_t VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9;
    VAR10 *VAR11;
    VAR10 *VAR12 = VAR8->VAR11;
    VAR8->VAR11 = FUN2(sizeof(VAR10) * (VAR8->VAR13 + 1));
    if (VAR8->VAR13)
    {
        int VAR14;
        if (VAR2->VAR15)
        {
            for (VAR14 = 0; VAR14 < VAR8->VAR13; VAR14++)
            {
                FUN3(VAR2->VAR15, (void *)(VAR16)VAR12[VAR14].VAR17);
                FUN4(VAR2->VAR15, (void *)(VAR16)VAR12[VAR14].VAR17, &VAR8->VAR11[VAR14]);
            }
        }
        memcpy(VAR8->VAR11, VAR12, sizeof(VAR10) * VAR8->VAR13);
        FUN5(VAR12);
    }
    VAR11 = &VAR8->VAR11[VAR8->VAR13];
    VAR11->VAR3 = FUN6(VAR3);
    VAR11->VAR18 = VAR4;
    VAR11->VAR17 = VAR5;
    VAR11->VAR6 = VAR6;
    VAR11->VAR19 = VAR8->VAR13;
    VAR11->VAR20 = ~0U;
    VAR11->VAR21 = FUN7(VAR4, VAR4 + VAR6) + 1UL;
    VAR11->VAR22 = FUN8(VAR11->VAR21);
    FUN9(VAR11->VAR22, 0, VAR11->VAR21);
    VAR11->VAR23 = FUN8(VAR11->VAR21);
    FUN9(VAR11->VAR23, 0, VAR11->VAR21);
    VAR11->VAR24 = FUN2(VAR11->VAR21 * sizeof(VAR25));
    VAR11->VAR26 = VAR8->VAR27 ? false : true;
    if (VAR2->VAR15)
    {
        FUN4(VAR2->VAR15, (void *)VAR5, VAR11);
    }
    FUN10(VAR3, VAR8->VAR13, (VAR16)VAR11->VAR18, VAR11->VAR17, VAR11->VAR6, (VAR16)(VAR11->VAR18 + VAR11->VAR6), FUN11(VAR11->VAR21) * sizeof(unsigned long) * 8, VAR11->VAR21);
    VAR8->VAR13++;
    return 0;
}