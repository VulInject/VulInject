static int FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4;
    EHCIsitd VAR5;
    assert(!VAR3);
    VAR4 = FUN2(VAR2, VAR3);
    FUN3(VAR2, FUN4(VAR4), (VAR6 *)&VAR5, sizeof(VAR7) >> 2);
    FUN5(VAR2, VAR4, &VAR5);
    if (!(VAR5.VAR8 & VAR9))
    {
        ;
    }
    else
    {
        fprintf(VAR10, "");
    }
    FUN6(VAR2, VAR3, VAR5.VAR11);
    FUN7(VAR2, VAR3, VAR12);
    return 1;
}