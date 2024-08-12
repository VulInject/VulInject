void FUN1(target_phys_addr_t VAR1, ram_addr_t VAR2, ram_addr_t VAR3)
{
    VAR4 *VAR5 = VAR6;
    ram_addr_t VAR7 = VAR3 & ~VAR8;
    VAR9 *VAR10;
    VAR3 &= ~VAR11;
    VAR10 = FUN2(VAR5, VAR1);
    if (VAR10)
    {
        if (VAR7 == VAR12)
        {
            VAR10->VAR13 = 0;
            VAR10->VAR14 = VAR1;
            VAR10->VAR15 = 0;
            VAR10->VAR7 = 0;
            FUN3(VAR5, VAR16, VAR10);
        }
        else if (VAR1 >= VAR10->VAR14 && (VAR1 + VAR2) <= (VAR10->VAR14 + VAR10->VAR13))
        {
            KVMSlot VAR17;
            target_phys_addr_t VAR18;
            ram_addr_t VAR19, VAR20;
            if ((VAR3 - (VAR1 - VAR10->VAR14)) == ((VAR21 *)VAR10->VAR15 - VAR22))
                return;
            memcpy(&VAR17, VAR10, sizeof(VAR17));
            VAR10->VAR13 = 0;
            FUN3(VAR5, VAR16, VAR10);
            VAR18 = VAR17.VAR14;
            VAR19 = VAR1 - VAR17.VAR14;
            VAR20 = (VAR21 *)VAR17.VAR15 - VAR22;
            if (VAR19)
                FUN1(VAR18, VAR19, VAR20);
            FUN1(VAR1, VAR2, VAR3);
            VAR18 = VAR1 + VAR2;
            VAR20 += VAR19 + VAR2;
            VAR19 = VAR17.VAR13 - VAR19 - VAR2;
            if (VAR19)
                FUN1(VAR18, VAR19, VAR20);
            return;
        }
        else
        {
            FUN4("");
            FUN5();
        }
    }
    if (VAR7 >= VAR12)
        return;
    VAR10 = FUN6(VAR5);
    VAR10->VAR13 = VAR2;
    VAR10->VAR14 = VAR1;
    VAR10->VAR15 = (unsigned long)(VAR22 + VAR3);
    VAR10->VAR7 = 0;
    FUN3(VAR5, VAR16, VAR10);
}