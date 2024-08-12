static VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
int VAR6, VAR7 = -1;
bool VAR8;


for (VAR6 = 0; VAR6 < VAR5->VAR9; VAR6++)
if (VAR2 == VAR5->VAR10[VAR6].VAR11)
VAR7 = VAR5->VAR10[VAR6].VAR2;

switch (VAR5->VAR12->VAR13) {
case VAR14:
VAR8 = FUN2(VAR5, VAR7);
break;
case VAR15:
default:
VAR8 = FUN3(VAR5, VAR7);
break;
}

if (!VAR8) {
FUN4(VAR5->VAR16, "",
VAR7);
return VAR17;
}
FUN5(&VAR5->VAR18);

return VAR17;
}