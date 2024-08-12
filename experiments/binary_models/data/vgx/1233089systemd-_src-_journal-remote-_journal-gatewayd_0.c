static int FUN1(
VAR1 *VAR2,
struct VAR3 *VAR4) {

const char *VAR5;

assert(VAR2);
assert(VAR4);

VAR5 = FUN2(VAR4, VAR6, "");
if (!VAR5)
return 0;

if (FUN3(VAR5, VAR7[VAR8]))
VAR2->VAR9 = VAR8;
else if (FUN3(VAR5, VAR7[VAR10]))
VAR2->VAR9 = VAR10;
else if (FUN3(VAR5, VAR7[VAR11]))
VAR2->VAR9 = VAR11;
else if (FUN3(VAR5, VAR7[VAR12]))
VAR2->VAR9 = VAR12;
else
VAR2->VAR9 = VAR13;

return 0;
}