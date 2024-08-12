static void FUN1(struct VAR1 *VAR2,
bool VAR3, bool VAR4,
u8 VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR8;
static int VAR9, VAR10, VAR11, VAR12, VAR13;
u8 VAR14 = 0;

FUN2(VAR7, VAR15, VAR16,
"");

if (!VAR17->VAR18) {
VAR17->VAR18 = true;
FUN2(VAR7, VAR15, VAR16,
"");
if (VAR3) {
if (VAR4) {
if (VAR5 == 1) {
FUN3(VAR2,
VAR19,
true, 13);
VAR17->VAR20 = 13;
} else if (VAR5 == 2) {
FUN3(VAR2,
VAR19,
true, 14);
VAR17->VAR20 = 14;
} else {
FUN3(VAR2,
VAR19,
true, 15);
VAR17->VAR20 = 15;
}
} else {
if (VAR5 == 1) {
FUN3(VAR2,
VAR19,
true, 9);
VAR17->VAR20 = 9;
} else if (VAR5 == 2) {
FUN3(VAR2,
VAR19,
true, 10);
VAR17->VAR20 = 10;
} else {
FUN3(VAR2,
VAR19,
true, 11);
VAR17->VAR20 = 11;
}
}
} else {
if (VAR4) {
if (VAR5 == 1) {
FUN3(VAR2,
VAR19,
true, 5);
VAR17->VAR20 = 5;
} else if (VAR5 == 2) {
FUN3(VAR2,
VAR19,
true, 6);
VAR17->VAR20 = 6;
} else {
FUN3(VAR2,
VAR19,
true, 7);
VAR17->VAR20 = 7;
}
} else {
if (VAR5 == 1) {
FUN3(VAR2,
VAR19,
true, 1);
VAR17->VAR20 = 1;
} else if (VAR5 == 2) {
FUN3(VAR2,
VAR19,
true, 2);
VAR17->VAR20 = 2;
} else {
FUN3(VAR2,
VAR19,
true, 3);
VAR17->VAR20 = 3;
}
}
}

VAR9 = 0;
VAR10 = 0;
VAR11 = 1;
VAR12 = 3;
VAR13 = 0;
} else {

VAR14 = VAR21->VAR22;
FUN2(VAR7, VAR15, VAR16,
"", VAR14);
FUN2(VAR7, VAR15, VAR16,
"",
VAR9, VAR10, VAR11, VAR12, VAR13);
VAR13++;

if (VAR14 == 0) {
VAR9++;
VAR10--;

if (VAR10 <= 0)
VAR10 = 0;

if (VAR9 >= VAR12) {
VAR13 = 0;
VAR12 = 3;
VAR9 = 0;
VAR10 = 0;
FUN2(VAR7, VAR15, VAR16,
"");
}
} else if (VAR14 <= 3) {
VAR9--;
VAR10++;

if (VAR9 <= 0)
VAR9 = 0;

if (VAR10 == 2) {
if (VAR13 <= 2)
VAR11++;
else
VAR11 = 1;

if (VAR11 >= 20)
VAR11 = 20;

VAR12 = 3 * VAR11;
VAR9 = 0;
VAR10 = 0;
VAR13 = 0;
FUN2(VAR7, VAR15, VAR16,
"");
}
} else {
if (VAR13 == 1)
VAR11++;
else
VAR11 = 1;

if (VAR11 >= 20)
VAR11 = 20;

VAR12 = 3*VAR11;
VAR9 = 0;
VAR10 = 0;
VAR13 = 0;
FUN2(VAR7, VAR15, VAR16,
"");
}

FUN2(VAR7, VAR15, VAR16,
"", VAR5);
}


if (VAR17->VAR23 != VAR17->VAR20) {
bool VAR24 = false, VAR25 = false, VAR26 = false;

FUN2(VAR7, VAR15, VAR16,
"");
FUN2(VAR7, VAR15, VAR16,
"",
VAR17->VAR23, VAR17->VAR20);

VAR2->FUN4(VAR2, VAR27, &VAR24);
VAR2->FUN4(VAR2, VAR28, &VAR25);
VAR2->FUN4(VAR2, VAR29, &VAR26);

if (!VAR24 && !VAR25 && !VAR26)
FUN3(VAR2, VAR19,
true, VAR17->VAR20);
else
FUN2(VAR7, VAR15, VAR16,
"");
}
}