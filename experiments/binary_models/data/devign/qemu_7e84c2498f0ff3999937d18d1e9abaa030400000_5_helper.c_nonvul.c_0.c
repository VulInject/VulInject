void FUN1(int VAR1)
{
    int VAR2, VAR3;
    uint32_t VAR4, VAR5;
    if (VAR6->VAR7 & VAR8)
    {
        VAR2 = FUN2(VAR6->VAR9.VAR10 + 0);
        if (VAR2 & 4)
            FUN3(VAR11, VAR2 & 0xfffc);
        if (FUN4(&VAR4, &VAR5, VAR2) != 0)
            FUN3(VAR11, VAR2 & 0xfffc);
        VAR3 = (VAR5 >> VAR12) & 0x17;
        if (VAR3 != 3)
            FUN3(VAR11, VAR2 & 0xfffc);
        FUN5(VAR2, VAR4, VAR5, VAR13);
    }
    else
    {
        FUN6(VAR1, 1, 0);
    }
}