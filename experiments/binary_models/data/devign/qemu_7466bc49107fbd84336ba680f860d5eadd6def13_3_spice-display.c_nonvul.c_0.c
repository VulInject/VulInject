void FUN1(VAR1 *VAR2)
{
    FUN2(1, "", VAR3);
    memset(&VAR2->VAR4, 0, sizeof(VAR2->VAR4));
    FUN3(VAR2->VAR5);
    VAR2->VAR5 = NULL;
    FUN4(VAR2);
    FUN5(VAR2);
    memset(&VAR2->VAR4, 0, sizeof(VAR2->VAR4));
    VAR2->VAR6++;
}