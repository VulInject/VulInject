static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR1 *VAR5;
    VAR6 *VAR7;
    VAR7 = FUN2("", "", NULL);
    if (!VAR7)
        return NULL;
    VAR5 = FUN3(VAR3, "");
    FUN4(&VAR5->VAR8, "", VAR7);
    FUN5(&VAR5->VAR8);
    return VAR5;
}