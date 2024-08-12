static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR6;
    VAR7 *VAR8 = VAR6->VAR9;
    VAR10 *VAR11 = VAR8->VAR11[VAR6->VAR12];
    FUN2(FUN3(VAR8->VAR13.VAR14), &VAR4->VAR15);
    if (!VAR2)
    {
        VAR4->VAR16 = VAR17;
    }
    else
    {
        VAR4->VAR16 = VAR18;
    }
    FUN4(&VAR4->VAR19);
    FUN5(VAR11, VAR4);
}