static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5[VAR3];
    XHCIEvRingSeg VAR6;
    if (VAR5->VAR7 == 0)
    {
        VAR5->VAR8 = 0;
        VAR5->VAR9 = 0;
        return;
    }
    if (VAR5->VAR7 != 1)
    {
        FUN2("", VAR5->VAR7);
        FUN3(VAR2);
        return;
    }
    dma_addr_t VAR10 = FUN4(VAR5->VAR11, VAR5->VAR12);
    FUN5(FUN6(VAR2), VAR10, &VAR6, sizeof(VAR6));
    FUN7(&VAR6.VAR13);
    FUN7(&VAR6.VAR14);
    FUN7(&VAR6.VAR15);
    if (VAR6.VAR15 < 16 || VAR6.VAR15 > 4096)
    {
        FUN2("", VAR6.VAR15);
        FUN3(VAR2);
        return;
    }
    VAR5->VAR8 = FUN4(VAR6.VAR13, VAR6.VAR14);
    VAR5->VAR9 = VAR6.VAR15;
    VAR5->VAR16 = 0;
    VAR5->VAR17 = 1;
    VAR5->VAR18 = 0;
    FUN2("" VAR19 "", VAR3, VAR5->VAR8, VAR5->VAR9);
}