static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
int VAR5;
int VAR6;

for (VAR6 = 0; VAR6 < VAR7; VAR6++) {
VAR4 = &VAR2->VAR4[VAR6];

switch (VAR6) {
case 0:
case 3:
VAR4->VAR8 = 8;
break;
case 1 ... 2:
VAR4->VAR8 = 64;
break;
case 4 ... 5:
VAR4->VAR8 = 256;
break;
}
}

if (!FUN2(VAR2->VAR9.VAR10)) {
FUN3("");
return -VAR11;
}

VAR5 = FUN4(&VAR2->VAR12->VAR13, VAR2->VAR9.VAR10,
"");
if (VAR5) {
FUN3("");
return VAR5;
}

FUN5(VAR2->VAR9.VAR10,
VAR2->VAR9.VAR14);

return 0;
}