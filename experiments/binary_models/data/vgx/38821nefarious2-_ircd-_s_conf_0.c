static void FUN1(struct VAR1* VAR2, struct VAR3* VAR4)
{
struct VAR5** VAR6;
struct VAR5*  VAR7;

assert(0 != VAR4);
assert(0 != VAR2);
assert(0 < VAR4->VAR8);

VAR6 = &(FUN2(VAR2));

while (*VAR6) {
if ((*VAR6)->VAR9.VAR4 == VAR4) {
if (VAR4->VAR10 && (VAR4->VAR11 & VAR12) && FUN3(VAR4) > 0)
--FUN3(VAR4);

assert(0 < VAR4->VAR8);
if (0 == --VAR4->VAR8 && FUN4(VAR4))
FUN5(VAR4);
VAR7 = *VAR6;
*VAR6 = VAR7->VAR13;
FUN6(VAR7);
return;
}
VAR6 = &((*VAR6)->VAR13);
}
}