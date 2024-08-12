static void FUN1(VAR1 *VAR2, TCGv_i32 VAR3, uint32_t VAR4)
{
    static void (*const VAR5[256])(VAR1 * VAR2, TCGv_i32 VAR3, uint32_t VAR4) = {
        [VAR6] = VAR7,
        [VAR8] = VAR9,
    };
    if (VAR10[VAR4])
    {
        if (VAR5[VAR4])
        {
            VAR5[VAR4](VAR2, VAR3, VAR4);
        }
        else
        {
            FUN2(VAR3, VAR11[VAR4]);
        }
    }
    else
    {
        FUN3("", VAR4);
    }
}