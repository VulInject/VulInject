void FUN1(target_phys_addr_t VAR1, ram_addr_t VAR2, ram_addr_t VAR3)
{
    VAR4 *VAR5 = VAR6;
    ram_addr_t VAR7 = VAR3 & ~VAR8;
    VAR9 *VAR10;
    if (VAR1 & ~VAR8)
    {
        fprintf(VAR11, "");
        FUN2();
    }
    VAR3 &= ~VAR12;
    VAR10 = FUN3(VAR5, VAR1);
    if (VAR10)
    {
        if (VAR7 >= VAR13)
        {
            VAR10->VAR14 = 0;
            VAR10->VAR1 = VAR1;
            VAR10->VAR3 = 0;
            VAR10->VAR7 = 0;
            FUN4(VAR5, VAR10);
        }
        else if (VAR1 >= VAR10->VAR1 && (VAR1 + VAR2) <= (VAR10->VAR1 + VAR10->VAR14))
        {
            KVMSlot VAR15;
            target_phys_addr_t VAR16;
            ram_addr_t VAR17, VAR18;
            if ((VAR3 - (VAR1 - VAR10->VAR1)) == VAR10->VAR3)
                return;
            memcpy(&VAR15, VAR10, sizeof(VAR15));
            VAR10->VAR14 = 0;
            FUN4(VAR5, VAR10);
            VAR16 = VAR15.VAR1;
            VAR17 = VAR1 - VAR15.VAR1;
            VAR18 = VAR15.VAR3;
            if (VAR17)
                FUN1(VAR16, VAR17, VAR18);
            FUN1(VAR1, VAR2, VAR3);
            VAR16 = VAR1 + VAR2;
            VAR18 += VAR17 + VAR2;
            VAR17 = VAR15.VAR14 - VAR17 - VAR2;
            if (VAR17)
                FUN1(VAR16, VAR17, VAR18);
            return;
        }
        else
        {
            FUN5("");
            FUN2();
        }
    }
    if (VAR7 >= VAR13)
        return;
    VAR10 = FUN6(VAR5);
    VAR10->VAR14 = VAR2;
    VAR10->VAR1 = VAR1;
    VAR10->VAR3 = VAR3;
    VAR10->VAR7 = 0;
    FUN4(VAR5, VAR10);
}