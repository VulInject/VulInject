static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
struct VAR5 *VAR6 = &VAR2->VAR7;
enum cpumf_ctr_set VAR8;
int VAR9;
u64 VAR10;

switch (VAR4->VAR11) {
case VAR12:

if (VAR4->VAR13 || VAR4->VAR14 ||
VAR4->VAR15)
return -VAR16;
VAR10 = VAR4->VAR17;
break;

case VAR18:
VAR10 = VAR4->VAR17;

if (!VAR4->VAR14 && VAR4->VAR13) {
if (VAR10 >= FUN2(VAR19))
return -VAR16;
VAR10 = VAR19[VAR10];


} else if (!VAR4->VAR13 && VAR4->VAR14) {
return -VAR16;


} else {
if (VAR10 >= FUN2(VAR20))
return -VAR16;
VAR10 = VAR20[VAR10];
}
break;

default:
return -VAR21;
}

if (VAR10 == -1)
return -VAR21;

if (VAR10 > VAR22)
return -VAR23;


VAR8 = FUN3(VAR10);
switch (VAR8) {
case VAR24:
case VAR25:
case VAR26:
case VAR27:
case VAR28:

VAR6->VAR17 = VAR10;
VAR6->VAR29 = VAR8;
break;
case VAR30:

return -VAR23;
};


if (!FUN4(&VAR31)) {
FUN5(&VAR32);
if (FUN6(&VAR31) == 0 && FUN7())
VAR9 = -VAR33;
else
FUN8(&VAR31);
FUN9(&VAR32);
}
VAR2->VAR34 = VAR35;


VAR9 = FUN10(VAR6);
if (!VAR9)
VAR9 = FUN11(VAR6);

return VAR9;
}