static void FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
const struct VAR3 *VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR8;
u32 VAR9;
int VAR10;
int VAR11;

FUN2("");

FUN3(&VAR7->VAR4, VAR4);

if (!FUN4(VAR7->VAR4, &VAR9)) {
FUN5("");
return;
}

switch (VAR12[VAR9].VAR13) {
case VAR14:

VAR10 = VAR4->VAR15 * 1000 * 2;
break;
case VAR16:

VAR10 = VAR4->VAR15 * 1000 * 4;
break;
default:
FUN5("");
return;
}


VAR11 = FUN6(VAR7->VAR17, VAR10);
if (VAR11 < 0)
FUN5("",
VAR10);


VAR11 = FUN6(VAR7->VAR18, VAR4->VAR15 * 1000);
if (VAR11 < 0)
FUN5("",
VAR4->VAR15 * 1000);
}