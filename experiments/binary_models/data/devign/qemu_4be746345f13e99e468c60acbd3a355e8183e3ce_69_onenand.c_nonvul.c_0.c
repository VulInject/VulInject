static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    uint32_t VAR7 = 1 << (24 + ((VAR6->VAR8.VAR4 >> 4) & 7));
    void *VAR9;
    VAR6->VAR10 = (VAR11)-1;
    VAR6->VAR12 = NULL;
    VAR6->VAR13 = VAR7 >> VAR14;
    VAR6->VAR15 = VAR7 >> 9;
    VAR6->VAR16 = FUN4(VAR6->VAR13);
    VAR6->VAR17 = (VAR6->VAR8.VAR4 & 0x08) ? (1 << (6 + ((VAR6->VAR8.VAR4 >> 4) & 7))) : 0;
    FUN5(&VAR6->VAR18, FUN6(VAR6), &VAR19, VAR6, "", 0x10000 << VAR6->VAR20);
    if (!VAR6->VAR21)
    {
        VAR6->VAR22 = memset(FUN4(VAR7 + (VAR7 >> 5)), 0xff, VAR7 + (VAR7 >> 5));
    }
    else
    {
        if (FUN7(VAR6->VAR21))
        {
            FUN8("");
            return -1;
        }
        VAR6->VAR23 = VAR6->VAR21;
    }
    VAR6->VAR24 = memset(FUN4((64 + 2) << VAR25), 0xff, (64 + 2) << VAR25);
    FUN9(&VAR6->VAR9, FUN6(VAR6), "", 0xc000 << VAR6->VAR20, &VAR26);
    FUN10(&VAR6->VAR9);
    VAR9 = FUN11(&VAR6->VAR9);
    VAR6->VAR27[0] = VAR9 + (0x0000 << VAR6->VAR20);
    VAR6->VAR27[1] = VAR9 + (0x8000 << VAR6->VAR20);
    VAR6->VAR28[0][0] = VAR9 + ((0x0200 + (0 << (VAR25 - 1))) << VAR6->VAR20);
    VAR6->VAR28[0][1] = VAR9 + ((0x8010 + (0 << (VAR25 - 6))) << VAR6->VAR20);
    VAR6->VAR28[1][0] = VAR9 + ((0x0200 + (1 << (VAR25 - 1))) << VAR6->VAR20);
    VAR6->VAR28[1][1] = VAR9 + ((0x8010 + (1 << (VAR25 - 6))) << VAR6->VAR20);
    FUN12(VAR6);
    FUN13(VAR2, &VAR6->VAR29);
    FUN14(VAR2, &VAR6->VAR30);
    FUN15(VAR4, ((VAR6->VAR20 & 0x7f) << 24) | ((VAR6->VAR8.VAR31 & 0xff) << 16) | ((VAR6->VAR8.VAR4 & 0xff) << 8) | (VAR6->VAR8.VAR32 & 0xff), &VAR33, VAR6);
    return 0;
}