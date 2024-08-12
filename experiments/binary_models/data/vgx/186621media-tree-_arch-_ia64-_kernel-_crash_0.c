static int
FUN1(struct VAR1 *VAR2, unsigned long VAR3, void *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8 = VAR4;

if (FUN2(&VAR9)) {
switch (VAR3) {
case VAR10:
if (!VAR11)
break;

case VAR12:
case VAR13:
case VAR14:
FUN3(VAR15, NULL);
break;
}
}

if (!VAR16 && !VAR17)
return VAR18;

if (!VAR19) {
if (VAR3 == VAR10)
FUN4(VAR20
"",
VAR21);
return VAR18;
}

if (VAR3 != VAR10 &&
VAR3 != VAR22 &&
VAR3 != VAR23)
return VAR18;

VAR6 = (struct VAR5 *)VAR8->VAR24;

switch (VAR3) {
case VAR22:

if (VAR16 && (VAR6->VAR25->VAR26 != 1)) {
if (FUN5(&VAR9) != 1)
VAR11 = 1;
}
break;
case VAR10:

if (VAR16 && (VAR6->VAR25->VAR26 != 1))
FUN6();
break;
case VAR23:

if (VAR17 && !(*(VAR6->VAR4))) {
if (FUN5(&VAR9) == 1)
FUN6();

}
break;
}
return VAR18;
}