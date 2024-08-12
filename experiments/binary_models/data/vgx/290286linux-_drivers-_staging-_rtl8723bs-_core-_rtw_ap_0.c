void FUN1(struct VAR1 *VAR2, u8 VAR3, VAR4 *VAR5, u8 VAR6)
{
struct VAR7 *VAR8;
struct VAR9 *VAR10;


if (!VAR2)
return;

VAR8 = &(VAR2->VAR11);
VAR10 = &(VAR2->VAR12);


if (!VAR10->VAR13)
return;

FUN2(&VAR8->VAR14);

switch (VAR3) {
case 0xFF:

FUN3(VAR2);

break;

case VAR15:

FUN4(VAR2);

break;

case VAR16:

FUN5(VAR2);

break;

case VAR17:

FUN6(VAR2);

break;

case VAR18:

FUN7(VAR2);

break;

case VAR19:

FUN8(VAR2);

break;

case VAR20:

FUN9(VAR2, VAR5);

break;

default:
break;
}

VAR8->VAR21 = true;

FUN10(&VAR8->VAR14);

if (VAR6) {

FUN11(VAR2);
}
}