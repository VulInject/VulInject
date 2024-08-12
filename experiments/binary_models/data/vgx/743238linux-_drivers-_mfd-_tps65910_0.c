static int FUN1(struct VAR1 *VAR1, int VAR2,
struct VAR3 *VAR4)
{
int VAR5;
static struct VAR6 *VAR7;

if (!VAR2) {
FUN2(VAR1->VAR8, "");
return -VAR9;
}

if (!VAR4) {
FUN2(VAR1->VAR8, "");
return -VAR9;
}

switch (FUN3(VAR1)) {
case VAR10:
VAR7 = &VAR11;
break;
case VAR12:
VAR7 = &VAR13;
break;
}

VAR1->VAR14 = VAR2;
VAR5 = FUN4(VAR1->VAR8, VAR1->VAR15,
VAR1->VAR14,
VAR16, VAR4->VAR17,
VAR7, &VAR1->VAR18);
if (VAR5 < 0) {
FUN2(VAR1->VAR8, "", VAR5);
VAR1->VAR14 = 0;
}
return VAR5;
}