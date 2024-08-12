static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2->VAR6->VAR7.VAR8);
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    int VAR14 = 0;
    FUN3("", VAR2->VAR15, VAR3, VAR10);
    if (VAR10 == NULL)
    {
        fprintf(VAR16, "", VAR2->VAR15);
        return;
    }
    if (VAR3)
    {
        VAR13 = FUN4(VAR2);
        VAR14 = FUN5(VAR5, VAR10, VAR10->VAR17, VAR13, VAR3);
    }
    if (VAR14 < 0)
    {
        fprintf(VAR16, "", VAR14);
        VAR10->VAR18 = true;
        FUN6(VAR10->VAR2);
        return;
    }
    VAR10->VAR19 -= VAR14;
    FUN7(VAR2);
}