static void FUN1(const VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    uint32_t VAR7 = VAR8;
    FUN2(VAR4)
    {
        VAR6 = FUN3(VAR4);
        if (!FUN4(&VAR6->VAR9, VAR10) || (FUN5() && !FUN6(VAR4, FUN7(VAR11))))
        {
            return;
        }
    }
    if (VAR2->VAR12 == 2)
    {
        VAR7 = FUN8(VAR7, VAR13, VAR14, (1 << VAR2->VAR15) - 1);
    }
    VAR6 = FUN3(FUN9(0));
    FUN10(VAR2->VAR16, "");
    if (FUN4(&VAR6->VAR9, VAR17))
    {
        const char VAR18[] = "";
        FUN11(VAR2->VAR16, "", "", VAR18, sizeof(VAR18));
        FUN12(VAR2->VAR16, "", "", VAR19, VAR11, VAR7);
    }
}