FUN1(VSCMsgType VAR1, uint32_t VAR2, const void *VAR3, unsigned int VAR4)
{
    VSCMsgHeader VAR5;
    FUN2(&VAR6);
    if (VAR7 > 10)
    {
        FUN3("", VAR1, VAR2, VAR4, VAR4);
    }
    VAR5.VAR1 = FUN4(VAR1);
    VAR5.VAR2 = 0;
    VAR5.VAR4 = FUN4(VAR4);
    FUN5(VAR8, (VAR9 *)&VAR5, sizeof(VAR5));
    FUN5(VAR8, (VAR9 *)VAR3, VAR4);
    FUN6(VAR10, NULL);
    FUN7(&VAR6);
    return 0;
}