void FUN1(VAR1 *VAR2)
{
khiter_t VAR3;
for (VAR3 = FUN2(VAR2->VAR4); VAR3 != FUN3(VAR2->VAR4); ++VAR3) {
if (!FUN4(VAR2->VAR4, VAR3))
continue;
FUN5(VAR2, VAR3);
}
assert(FUN6(VAR2->VAR4) == 0);
}