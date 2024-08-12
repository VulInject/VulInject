static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    uint32_t VAR7;
    int VAR8 = FUN2(VAR2, VAR9 + VAR6, &VAR7);
    if (VAR8 < 0)
    {
        fprintf(VAR10, "");
        return VAR8;
    }
    FUN3((void *)VAR2->VAR11[VAR6].VAR12);
    memcpy(VAR4, VAR2->VAR11[VAR6].VAR12, sizeof(VAR3));
    FUN4("", VAR13[VAR5]);
    if (VAR5 == VAR14)
    {
        FUN4("", VAR13[VAR4->VAR15], VAR4->VAR15);
    }
    else if (VAR4->VAR15 != VAR5 || VAR4->VAR15 == VAR16)
    {
        fprintf(VAR10, ""
                        "",
                VAR13[VAR5], VAR5, VAR13[VAR4->VAR15], VAR4->VAR15, VAR4->VAR17);
        return -VAR18;
    }
    if (VAR4->VAR17 > VAR19 - sizeof(*VAR4))
    {
        fprintf(VAR10, "", VAR4->VAR17);
        return -VAR20;
    }
    if (sizeof(*VAR4) + VAR4->VAR17 != VAR7)
    {
        fprintf(VAR10, "", VAR4->VAR17, VAR7);
        return -VAR20;
    }
    return 0;
}