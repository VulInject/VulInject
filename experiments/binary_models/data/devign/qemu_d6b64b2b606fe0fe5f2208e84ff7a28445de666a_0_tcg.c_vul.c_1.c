void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = VAR2->VAR4;
    VAR2->VAR5 = VAR2->VAR3;
    FUN2(VAR2);
    FUN3((VAR6)VAR2->VAR3, (VAR6)VAR2->VAR5)