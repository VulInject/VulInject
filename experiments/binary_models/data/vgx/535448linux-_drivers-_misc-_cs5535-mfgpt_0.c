}
FUN1(VAR1);

struct VAR2 *FUN2(int VAR3, int VAR4)
{
struct VAR5 *VAR6 = &VAR5;
struct VAR2 *VAR7 = NULL;
unsigned long VAR8;
int VAR9;

if (!VAR6->VAR10)
goto VAR11;


if (VAR4 == VAR12)
VAR9 = 6;
else
VAR9 = VAR13;

if (VAR3 >= VAR9) {

FUN3(1);
goto VAR11;
}

FUN4(&VAR6->VAR14, VAR8);
if (VAR3 < 0) {
unsigned long VAR15;


VAR15 = FUN5(VAR6->VAR16, VAR9);

VAR3 = VAR15 < VAR9 ? (int) VAR15 : -1;
} else {

if (!FUN6(VAR3, VAR6->VAR16))
VAR3 = -1;
}

if (VAR3 >= 0)

FUN7(VAR3, VAR6->VAR16);
FUN8(&VAR6->VAR14, VAR8);

if (VAR3 < 0)
goto VAR11;

VAR7 = FUN9(sizeof(*VAR7), VAR17);
if (!VAR7) {

FUN4(&VAR6->VAR14, VAR8);
FUN10(VAR3, VAR6->VAR16);
FUN8(&VAR6->VAR14, VAR8);
goto VAR11;
}
VAR7->VAR18 = VAR6;
VAR7->VAR19 = VAR3;
FUN11(&VAR6->VAR20->VAR21, "", VAR3);

VAR11:
return VAR7;
}