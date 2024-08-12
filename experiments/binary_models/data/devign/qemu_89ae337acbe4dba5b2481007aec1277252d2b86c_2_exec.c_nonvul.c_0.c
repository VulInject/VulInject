void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, 1);
    VAR4->VAR5 = (VAR6){.VAR7 = VAR8, .VAR9 = 0};
    VAR4->VAR2 = VAR2;
    VAR2->VAR10 = VAR4;
    VAR2->VAR11 = (VAR12){
        .VAR13 = VAR14,
        .VAR15 = VAR16,
        .VAR17 = VAR16,
        .VAR18 = 0,
    };
    FUN3(&VAR2->VAR11, VAR2);
}