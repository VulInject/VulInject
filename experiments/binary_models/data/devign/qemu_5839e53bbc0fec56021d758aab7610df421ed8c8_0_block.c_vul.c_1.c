VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    VAR1 *VAR6 = NULL;
    VAR1 **VAR7 = &VAR6;
    FUN2(VAR5, &VAR3->VAR8, VAR6)
    {
        VAR9 *VAR10 = FUN3(sizeof(VAR9));
        VAR1 *VAR11 = FUN3(sizeof(VAR1));
        VAR10->VAR12 = FUN4(VAR3, VAR5);
        VAR10->VAR13 = ((VAR14)VAR15 << FUN5(VAR5->VAR16));
        VAR11->VAR17 = VAR10;
        *VAR7 = VAR11;
        VAR7 = &VAR11->VAR18;
    }
    return VAR6;
}