void FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3)
{

for (unsigned int VAR4 = FUN2(VAR3->VAR2); VAR4--; )
if (FUN3(VAR3->VAR2, VAR4) == VAR2) {
FUN4(VAR3->VAR2, VAR4);
break;
}

for (unsigned int VAR4 = FUN2(VAR2->VAR3); VAR4--; )
if (FUN3(VAR2->VAR3, VAR4) == VAR3) {
FUN4(VAR2->VAR3, VAR4);
break;
}
}