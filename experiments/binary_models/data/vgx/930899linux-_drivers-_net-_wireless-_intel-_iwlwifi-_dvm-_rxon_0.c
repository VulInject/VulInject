static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = VAR4->VAR8;
struct VAR3 *VAR9;
struct VAR10 *VAR11;
struct VAR12 *VAR13 = &VAR2->VAR14;
struct VAR15 *VAR16;
bool VAR17;

FUN2(&VAR2->mutex);

switch (VAR8->VAR18) {
case VAR19:
FUN3();
VAR11 = FUN4(VAR8, VAR6->VAR20);
if (!VAR11) {

VAR17 = false;
FUN5();
break;
}

VAR16 = &VAR11->VAR21.VAR16;

VAR17 = true;


if (VAR16->VAR22.VAR23[1] == 0 &&
VAR16->VAR22.VAR23[2] == 0) {
VAR17 = false;
} else if (!(VAR16->VAR22.VAR24 &
VAR25)) {

VAR17 = false;
} else if (VAR16->VAR22.VAR24 &
VAR26) {
int VAR27;



VAR27 = (VAR16->VAR22.VAR24 &
VAR28);
VAR27 >>=
VAR29;
VAR27 += 1;

if (VAR27 <= 1)
VAR17 = false;
}

FUN5();
break;
case VAR30:

VAR17 = false;
break;
default:

VAR17 = true;
break;
}

VAR4->VAR31 = VAR17;

if (!VAR17) {

FUN6(VAR2, VAR9) {
if (!VAR9->VAR8)
continue;
if (VAR9->VAR31) {
VAR17 = true;
break;
}
}
}

VAR13->VAR32 = !VAR17;
}