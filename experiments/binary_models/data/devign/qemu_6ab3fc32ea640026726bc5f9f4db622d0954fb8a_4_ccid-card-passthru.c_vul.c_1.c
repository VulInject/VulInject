static void FUN1(VAR1 *VAR2, VSCMsgType VAR3, uint32_t VAR4, const VAR5 *VAR6, uint32_t VAR7)
{
    VSCMsgHeader VAR8;
    VAR8.VAR3 = FUN2(VAR3);
    VAR8.VAR4 = FUN2(VAR4);
    VAR8.VAR7 = FUN2(VAR7);
    FUN3(VAR2->VAR9, (VAR5 *)&VAR8, sizeof(VAR10));
    FUN3(VAR2->VAR9, VAR6, VAR7);
}