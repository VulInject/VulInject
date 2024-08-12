static void FUN1(void *VAR1, const char *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    if (!(VAR4->VAR5 & 0x20))
        FUN2(VAR4, VAR2);
    else if (VAR4->VAR6[6] & 1)
        FUN3(VAR4, VAR2);
    else
        FUN4(VAR4, VAR2);
}