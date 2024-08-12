bool FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR3;

if (FUN2(VAR2))
return false;

do {
for (VAR2->VAR5++; VAR2->VAR5 < VAR4->VAR6; VAR2->VAR5++) {
unsigned long VAR7 = FUN3(*VAR2->VAR5);

if (FUN4(VAR7))
return true;
}

VAR2->VAR5 = FUN5(VAR4->VAR8, sizeof(long));

} while (!FUN6(VAR2->VAR5, VAR2->VAR9, VAR4,
&VAR2->VAR10));

return false;
}