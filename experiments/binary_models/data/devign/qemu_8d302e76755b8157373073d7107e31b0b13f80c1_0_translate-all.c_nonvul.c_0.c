void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR4 = FUN2(VAR2->VAR5);
    if (VAR4)
    {
        FUN3(VAR2, VAR4, VAR2->VAR5);
        FUN4(VAR4, -1);
    }
    else
    {
        VAR6 *VAR7 = VAR2->VAR8;
        target_ulong VAR9, VAR10;
        tb_page_addr_t VAR11;
        int VAR12;
        FUN5(VAR7, &VAR9, &VAR10, &VAR12);
        VAR11 = FUN6(VAR7, VAR9);
        FUN7(VAR11, VAR11 + 1);
    }
}