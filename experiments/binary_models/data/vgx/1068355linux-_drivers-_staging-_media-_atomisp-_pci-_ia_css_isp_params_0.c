void
FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
if (!VAR4)
return;

assert(VAR2);
FUN2(VAR5, "");
FUN3(VAR4, VAR5);
VAR2->VAR6 = *VAR4;
VAR2->VAR7[VAR8] = true;
FUN2(VAR9,
"");
}