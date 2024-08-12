static bool FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3 = FUN2(FUN3(VAR2));
    return VAR3 && FUN4(VAR3) && VAR3->VAR4.VAR5 && (FUN5(VAR3) == VAR6 || FUN5(VAR3) == VAR7);
}