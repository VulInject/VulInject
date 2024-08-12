static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    char *VAR5 = VAR2->VAR6;
    const char *VAR7 = "";
    char VAR8;
    if (!VAR5)
        return VAR9;
    if (VAR4->VAR10 < 5 && VAR4->VAR10 > 0)
    {
        VAR8 = VAR7[VAR4->VAR10];
    }
    else
    {
        return VAR9;
    }
    snprintf(FUN2(VAR5), FUN3(VAR5), "", VAR8, VAR4->VAR11.VAR12, VAR4->VAR11.VAR13, VAR4->VAR11.VAR14, VAR4->VAR11.VAR15, VAR4->VAR11.VAR16, VAR4->VAR11.VAR17);
    return 0;
}