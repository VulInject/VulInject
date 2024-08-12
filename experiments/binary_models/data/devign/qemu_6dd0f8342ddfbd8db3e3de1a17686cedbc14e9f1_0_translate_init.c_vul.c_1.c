static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = FUN4(VAR6);
    VAR9 *VAR10 = &VAR6->VAR10;
    VAR4->VAR11 = VAR10;
    FUN5(VAR10, &VAR12);
    VAR6->VAR13 = VAR4->VAR14;
    VAR10->VAR15 = VAR8->VAR15;
    VAR10->VAR16 = VAR8->VAR16;
    VAR10->VAR17 = VAR8->VAR17;
    VAR10->VAR18 = VAR8->VAR18;
    VAR10->VAR19 = VAR8->VAR19;
    VAR10->VAR20 = VAR8->VAR20;
    VAR10->VAR21 = VAR8->VAR21;
    VAR10->VAR22 = VAR8->VAR22;
    VAR10->VAR23 = VAR8->VAR23;
    if (VAR8->VAR24)
    {
        VAR10->VAR24 = *VAR8->VAR24;
    }
    else if (VAR10->VAR16 & VAR25)
    {
        static const struct ppc_segment_page_sizes VAR26 = {
            .VAR24 = {
                {.VAR27 = 12, .VAR28 = 0, .VAR29 = {{.VAR27 = 12, .VAR30 = 0}}},
                {.VAR27 = 24, .VAR28 = 0x100, .VAR29 = {{.VAR27 = 24, .VAR30 = 0}}},
            },
        };
        VAR10->VAR24 = VAR26;
    }
    if (FUN6())
    {
        FUN7();
    }
}