FUN1(void *VAR1, hwaddr VAR2, unsigned int VAR3)
{
    int VAR4;
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = VAR1;
    uint32_t VAR9;
    if (VAR2 >= VAR6->VAR10 && VAR2 <= VAR6->VAR10 + VAR11 - 4)
    {
        VAR9 = VAR6->VAR12[(VAR2 - VAR6->VAR10) >> 2];
        FUN2("", (unsigned)VAR2, (unsigned)VAR9);
        return VAR9;
    }
    else
    {
        int VAR13 = (VAR2 / FUN3(VAR8));
        int VAR14 = VAR13 >> VAR15;
        int VAR16 = 0;
        uint32_t VAR17 = VAR8->VAR18[VAR19] & ~VAR20;
        VAR8->VAR18[VAR19] &= ~VAR20;
        VAR8->VAR18[VAR19] |= VAR14 ? VAR20 : 0;
        FUN2("", VAR8->VAR18[VAR21]);
        FUN4(&VAR8->VAR22);
        FUN4(&VAR8->VAR23);
        FUN2("", (VAR24)(VAR8->VAR18[VAR21] & VAR25));
        FUN5(&VAR8->VAR22, VAR8->VAR18[VAR21] & VAR25);
        FUN2("", VAR13);
        FUN5(&VAR8->VAR22, (VAR24)(VAR13 >> 16));
        FUN5(&VAR8->VAR22, (VAR24)(VAR13 >> 8));
        FUN5(&VAR8->VAR22, (VAR24)VAR13);
        if (VAR8->VAR18[VAR21] & VAR26)
        {
            FUN5(&VAR8->VAR22, FUN6(VAR8->VAR18[VAR21], VAR27, VAR28));
        }
        for (VAR4 = 0; VAR4 < (FUN6(VAR8->VAR18[VAR21], VAR29, VAR30)); ++VAR4)
        {
            FUN2("");
            FUN5(&VAR8->VAR22, 0);
        }
        FUN7(VAR8);
        FUN8(VAR8);
        FUN4(&VAR8->VAR23);
        FUN2("");
        for (VAR4 = 0; VAR4 < VAR11 / 4; ++VAR4)
        {
            FUN9(VAR8, 0, 4);
            FUN8(VAR8);
            FUN10(VAR8, &VAR6->VAR12[VAR16], 4);
            VAR16++;
        }
        VAR8->VAR18[VAR19] &= ~VAR20;
        VAR8->VAR18[VAR19] |= VAR17;
        FUN7(VAR8);
        VAR6->VAR10 = VAR2;
        return FUN1(VAR1, VAR2, VAR3);
    }
}