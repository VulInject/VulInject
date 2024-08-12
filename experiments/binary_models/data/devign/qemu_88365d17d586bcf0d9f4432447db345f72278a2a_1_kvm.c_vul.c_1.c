static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = &VAR2->VAR8;
    struct VAR9 *VAR10 = &VAR4->VAR11.VAR12;
    int VAR13 = 0;
    if (FUN3(VAR6, VAR10->VAR14))
    {
        VAR13 = 1;
    }
    else
    {
        FUN4(VAR6);
        VAR8->VAR15 += 4;
        VAR6->VAR16 = VAR17;
        VAR8->VAR18 = VAR19;
        FUN5(VAR6);
    }
    return VAR13;
}