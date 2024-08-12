static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
int VAR5, VAR6;

if (FUN2(VAR4)) {
VAR6 = FUN3(VAR2, VAR4, FUN2(VAR4)->VAR7,
"", false);
if (VAR6)
return VAR6;


VAR6 = FUN3(VAR2, VAR4, VAR4->VAR8, "",
false);
if (VAR6)
return VAR6;
}

for (VAR5 = 1; VAR5 < VAR4->VAR9; VAR5++) {
VAR6 = FUN3(VAR2, VAR4,
VAR4->VAR10[VAR5].VAR11->VAR7,
"", true);
if (VAR6)
return VAR6;
}

return 0;
}