static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    BlkdebugSuspendedReq VAR8;
    VAR8 = (VAR9){
        .VAR10 = FUN2(),
        .VAR11 = FUN3(VAR4->VAR12.VAR13.VAR11),
    };
    FUN4(VAR4);
    FUN5(&VAR6->VAR14, &VAR8, VAR15);
    if (!FUN6())
    {
        FUN7("", VAR8.VAR11);
    }
    FUN8();
    if (!FUN6())
    {
        FUN7("", VAR8.VAR11);
    }
    FUN9(&VAR8, VAR15);
    FUN10(VAR8.VAR11);
}