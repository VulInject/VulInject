static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR5 = NULL;
int VAR6;
int VAR7;
int VAR8;

VAR8 = VAR9;
for (VAR7 = 0; VAR7 < VAR10; VAR7++) {
if (!strcmp(VAR4->VAR2->VAR11, VAR12[VAR7])) {
VAR8 = VAR4->VAR13;
break;
}
}

if (VAR8 == VAR9)
return -VAR14;

FUN2(&VAR15);
VAR5 = VAR16[VAR7][VAR8];
if (!VAR5) {
FUN3(&VAR15);
return -VAR14;
}

FUN4(&VAR5->VAR17);

VAR6 = FUN5(VAR2, VAR4);
if (VAR6) {
FUN6(&VAR5->VAR17);
FUN3(&VAR15);
return VAR6;
}

VAR4->VAR18 = VAR5;
FUN3(&VAR15);

return 0;
}