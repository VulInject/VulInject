static void FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5, VAR6 **VAR7)
{
    VAR6 *VAR8 = NULL;
    FUN2(VAR2, (void **)VAR4, "", VAR5, sizeof(VAR3), &VAR8);
    if (VAR8)
    {
        goto VAR9;
    }
    FUN3(VAR2, &(*VAR4)->VAR10, "", &VAR8);
    FUN4(VAR2, &(*VAR4)->VAR11, "", &VAR8);
    FUN5(VAR2, &(*VAR4)->VAR12, "", &VAR8);
    FUN6(VAR2, &VAR8);
VAR9:
    FUN7(VAR7, VAR8);
}