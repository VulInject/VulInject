void FUN1(VAR1)(VAR2 *VAR3)
{
    VAR4 *VAR5;
    VAR5 = FUN2(VAR3);
    FUN3();
    memcpy(&VAR5->VAR6, VAR7, sizeof(VAR5->VAR6));
    FUN4(VAR5);
}