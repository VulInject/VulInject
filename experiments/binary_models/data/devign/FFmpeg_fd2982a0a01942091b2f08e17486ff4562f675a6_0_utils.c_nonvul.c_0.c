int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3->VAR4)
        return VAR2->VAR3->FUN2(VAR2);
    if (VAR2->VAR5)
        return FUN3(VAR2->VAR5, 0);
    return FUN4(VAR6);
}