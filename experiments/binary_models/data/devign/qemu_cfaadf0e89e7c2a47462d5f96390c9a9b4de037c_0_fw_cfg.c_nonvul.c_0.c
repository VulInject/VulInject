static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    const VAR9 *VAR10 = &VAR11;
    FUN4(&VAR6->VAR12, FUN5(VAR6), &VAR13, FUN6(VAR6), "", VAR14);
    FUN7(VAR8, &VAR6->VAR12);
    if (VAR6->VAR15 > VAR10->VAR16.VAR17)
    {
        VAR6->VAR18.read = VAR10->read;
        VAR6->VAR18.write = VAR10->write;
        VAR6->VAR18.VAR19 = VAR10->VAR19;
        VAR6->VAR18.VAR16 = VAR10->VAR16;
        VAR6->VAR18.VAR20 = VAR10->VAR20;
        VAR6->VAR18.VAR16.VAR17 = VAR6->VAR15;
        VAR6->VAR18.VAR20.VAR17 = VAR6->VAR15;
        VAR10 = &VAR6->VAR18;
    }
    FUN4(&VAR6->VAR21, FUN5(VAR6), VAR10, FUN6(VAR6), "", VAR10->VAR16.VAR17);
    FUN7(VAR8, &VAR6->VAR21);
}