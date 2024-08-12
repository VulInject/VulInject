static int
FUN1(const struct VAR1 *VAR2)
{
int VAR3 = 0;
int VAR4;

assert(VAR2);

if (VAR2->VAR5)
VAR3 = FUN2(VAR2->VAR5);
if (!VAR3 && VAR2->VAR6)
VAR3 = FUN3(VAR2->VAR6);
for (VAR4 = 0; VAR4 < VAR7; VAR4++) {
if (!VAR3 && VAR2->VAR8[VAR4])
VAR3 = FUN4(VAR2->VAR8[VAR4], VAR4);
}


if (VAR3) assert(false);
return VAR3;
}