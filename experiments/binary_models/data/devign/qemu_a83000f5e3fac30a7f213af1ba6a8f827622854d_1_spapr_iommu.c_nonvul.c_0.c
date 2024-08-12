static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3, VAR5, VAR3);
    uint64_t VAR7;
    fprintf(VAR8, "" VAR9 "" VAR10 "", VAR6->VAR11, VAR4);
    if (VAR6->VAR12)
    {
        return (VAR1){
            .VAR13 = &VAR14,
            .VAR15 = 0,
            .VAR16 = 0,
            .VAR17 = ~(VAR18)0,
            .VAR19 = VAR20,
        };
    }
    if (VAR4 >= VAR6->VAR21)
    {
        fprintf(VAR8, "");
        return (VAR1){.VAR19 = VAR22};
    }
    VAR7 = VAR6->VAR23[VAR4 >> VAR24];
    fprintf(VAR8, "", (VAR7 & ~VAR25), VAR25 + 1);
    return (VAR1){
        .VAR13 = &VAR14,
        .VAR15 = VAR4 & ~VAR25,
        .VAR16 = VAR7 & ~VAR25,
        .VAR17 = VAR25,
        .VAR19 = VAR7,
    };
}