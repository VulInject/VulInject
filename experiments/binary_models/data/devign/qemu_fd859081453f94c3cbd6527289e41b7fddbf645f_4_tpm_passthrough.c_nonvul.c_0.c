static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint32_t VAR5, VAR3 *VAR6, uint32_t VAR7, bool *VAR8)
{
    int VAR9;
    bool VAR10;
    const struct VAR11 *VAR12;
    VAR2->VAR13 = false;
    VAR2->VAR14 = true;
    *VAR8 = false;
    VAR10 = FUN2(VAR4, VAR5);
    VAR9 = FUN3(VAR2->VAR15, VAR4, VAR5);
    if (VAR9 != VAR5)
    {
        if (!VAR2->VAR13 || (VAR2->VAR13 && VAR16 != VAR17))
        {
            FUN4(""
                         "",
                         strerror(VAR16), VAR16);
        }
        goto VAR18;
    }
    VAR2->VAR14 = false;
    VAR9 = FUN5(VAR2->VAR15, VAR6, VAR7);
    if (VAR9 < 0)
    {
        if (!VAR2->VAR13 || (VAR2->VAR13 && VAR16 != VAR17))
        {
            FUN4(""
                         "",
                         strerror(VAR16), VAR16);
        }
    }
    else if (VAR9 < sizeof(struct VAR11) || FUN6(VAR6) != VAR9)
    {
        VAR9 = -1;
        FUN4(""
                     "");
    }
    if (VAR10 && (VAR9 >= sizeof(struct VAR11)))
    {
        VAR12 = (struct VAR11 *)VAR6;
        *VAR8 = (FUN7(VAR12->VAR19) == 0);
    }
VAR18:
    if (VAR9 < 0)
    {
        FUN8(VAR6, VAR7);
    }
    VAR2->VAR14 = false;
    return VAR9;
}