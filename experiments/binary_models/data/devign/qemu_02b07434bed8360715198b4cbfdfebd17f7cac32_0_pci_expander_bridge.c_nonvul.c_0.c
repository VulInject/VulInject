static const char *FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR4) ? FUN3(VAR4) : FUN4(VAR4);
    snprintf(VAR6->VAR7, 8, "", FUN5(VAR4));
    return VAR6->VAR7;
}