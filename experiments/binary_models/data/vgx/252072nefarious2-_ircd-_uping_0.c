static void FUN1(struct VAR1* VAR2)
{
struct VAR3 *VAR4;

assert(0 != FUN2(VAR2));
assert(0 != FUN3(FUN2(VAR2)));

VAR4 = (struct VAR3*) FUN3(FUN2(VAR2));

FUN4((VAR5, "", VAR4,
FUN5(VAR2)));

if (FUN5(VAR2) == VAR6) { 
VAR4->VAR7 &= ~VAR8;

if (!VAR4->VAR7)
FUN6(VAR4); 
} else {
assert(FUN5(VAR2) == VAR9);

FUN7(VAR4); 
}
}