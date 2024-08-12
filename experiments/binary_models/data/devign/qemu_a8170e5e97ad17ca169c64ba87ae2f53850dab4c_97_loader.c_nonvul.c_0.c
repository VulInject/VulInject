int FUN1(void)
{
    hwaddr VAR1 = 0;
    MemoryRegionSection VAR2;
    VAR3 *VAR4;
    FUN2(VAR4, &VAR5, VAR6)
    {
        if (VAR4->VAR7)
        {
            continue;
        }
        if (VAR1 > VAR4->VAR1)
        {
            fprintf(VAR8, ""
                            "" VAR9 "" VAR9 "",
                    VAR4->VAR10, VAR1, VAR4->VAR1);
            return -1;
        }
        VAR1 = VAR4->VAR1;
        VAR1 += VAR4->VAR11;
        VAR2 = FUN3(FUN4(), VAR4->VAR1, 1);
        VAR4->VAR12 = VAR2.VAR13 && FUN5(VAR2.VAR14);
    }
    FUN6(VAR15, NULL);
    VAR16 = 1;
    return 0;
}