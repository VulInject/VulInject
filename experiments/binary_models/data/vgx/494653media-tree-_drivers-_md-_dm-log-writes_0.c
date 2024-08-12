static int FUN1(void *VAR1)
{
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
sector_t VAR4 = 0;

while (!FUN2()) {
bool VAR5 = false;
bool VAR6;
struct VAR7 *VAR8 = NULL;
int VAR9;

FUN3(&VAR3->VAR10);
if (!FUN4(&VAR3->VAR11)) {
VAR8 = FUN5(&VAR3->VAR11,
struct VAR7, VAR12);
FUN6(&VAR8->VAR12);
if (!VAR3->VAR6)
goto VAR13;

VAR4 = VAR3->VAR14;
if (VAR8->VAR15 & VAR16)
VAR3->VAR14++;
else
VAR3->VAR14 += VAR8->VAR17 + 1;


if (!VAR3->VAR18)
VAR3->VAR18 = FUN7(VAR3);
if (VAR3->VAR18 &&
VAR3->VAR14 >= VAR3->VAR18) {
FUN8("");
VAR3->VAR6 = false;
goto VAR13;
}
VAR3->VAR19++;
FUN9(&VAR3->VAR20);

VAR5 = (VAR8->VAR15 & (VAR21 | VAR22));
if (VAR5)
FUN9(&VAR3->VAR20);
}
VAR13:
VAR6 = VAR3->VAR6;
FUN10(&VAR3->VAR10);
if (VAR8) {
if (VAR6) {
VAR9 = FUN11(VAR3, VAR8, VAR4);
if (!VAR9 && VAR5)
VAR9 = FUN12(VAR3);
if (VAR9) {
FUN3(&VAR3->VAR10);
VAR3->VAR6 = false;
FUN10(&VAR3->VAR10);
}
} else
FUN13(VAR3, VAR8);
continue;
}

if (!FUN14()) {
FUN15(VAR23);
if (!FUN2() &&
!FUN16(&VAR3->VAR24))
FUN17();
FUN18(VAR25);
}
}
return 0;
}