static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct mfi_ctrl_props VAR5;
    size_t VAR6 = sizeof(VAR5);
    if (VAR4->VAR7 < VAR6)
    {
        FUN2(VAR4->VAR8, VAR4->VAR7, VAR6);
        return VAR9;
    }
    FUN3((VAR10 *)&VAR5, VAR6, &VAR4->VAR11);
    FUN4(VAR4->VAR8, VAR4->VAR7);
    return VAR12;
}