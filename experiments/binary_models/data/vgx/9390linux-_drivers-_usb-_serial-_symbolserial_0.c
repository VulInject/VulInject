static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = VAR1->VAR4;
struct VAR5 *VAR6 = FUN2(VAR3);
unsigned char *VAR7 = VAR1->VAR8;
int VAR9 = VAR1->VAR9;
unsigned long VAR10;
int VAR11;
int VAR12;

switch (VAR9) {
case 0:

break;
case -VAR13:
case -VAR14:
case -VAR15:

FUN3(&VAR3->VAR16, "",
VAR17, VAR9);
return;
default:
FUN3(&VAR3->VAR16, "",
VAR17, VAR9);
goto VAR18;
}

FUN4(&VAR3->VAR16, VAR17, VAR1->VAR19, VAR7);


if (VAR1->VAR19 > 1) {
VAR12 = VAR7[0];
if (VAR12 > (VAR1->VAR19 - 1))
VAR12 = VAR1->VAR19 - 1;
FUN5(&VAR3->VAR3, &VAR7[1], VAR12);
FUN6(&VAR3->VAR3);
} else {
FUN3(&VAR3->VAR16, "", VAR17);
}

VAR18:
FUN7(&VAR6->VAR20, VAR10);


if (!VAR6->VAR21) {
VAR11 = FUN8(VAR3->VAR22, VAR23);
if (VAR11)
FUN9(&VAR3->VAR16,
"",
VAR17, VAR11);
} else
VAR6->VAR24 = true;
FUN10(&VAR6->VAR20, VAR10);
}