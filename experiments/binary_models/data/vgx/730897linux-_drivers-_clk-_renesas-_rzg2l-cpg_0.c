static struct VAR1
*FUN1(struct VAR2 *VAR3,
void *VAR4)
{
unsigned int VAR5 = VAR3->VAR6[1];
struct VAR7 *VAR8 = VAR4;
struct VAR9 *VAR10 = VAR8->VAR10;
const char *VAR11;
struct VAR1 *VAR1;

switch (VAR3->VAR6[0]) {
case VAR12:
VAR11 = "";
if (VAR5 > VAR8->VAR13) {
FUN2(VAR10, "", VAR11, VAR5);
return FUN3(-VAR14);
}
VAR1 = VAR8->VAR15[VAR5];
break;

case VAR16:
VAR11 = "";
if (VAR5 >= VAR8->VAR17) {
FUN2(VAR10, "", VAR11,
VAR5);
return FUN3(-VAR14);
}
VAR1 = VAR8->VAR15[VAR8->VAR18 + VAR5];
break;

default:
FUN2(VAR10, "", VAR3->VAR6[0]);
return FUN3(-VAR14);
}

if (FUN4(VAR1))
FUN2(VAR10, "", VAR11, VAR5,
FUN5(VAR1));
else
FUN6(VAR10, "",
VAR3->VAR6[0], VAR3->VAR6[1], VAR1,
FUN7(VAR1));
return VAR1;
}