static void
FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3;
struct VAR4 *VAR5;
u_int VAR6, VAR7;
int VAR8;
char *VAR9;


if (VAR1->VAR10 & VAR11)
return;

if ((VAR3 = FUN2()) == NULL)
FUN3("");
for (VAR6 = VAR7 = 0; VAR6 < VAR12.VAR13; VAR6++) {
VAR5 = FUN4(VAR6, VAR1);
if (VAR5 == NULL || VAR5->VAR14 == VAR15 ||
FUN5(VAR5))
continue;
VAR9 = FUN6(VAR5, VAR12.VAR16,
VAR17);
FUN7("", VAR6, FUN8(VAR5), VAR9);
free(VAR9);
if (VAR7 == 0) {

if ((VAR8 = FUN9(VAR1, VAR18)) != 0 ||
(VAR8 = FUN10(VAR1, "")) != 0 ||
(VAR8 = FUN11(VAR1, 0)) != 0) 
FUN12(VAR1, VAR8, "", VAR19);
}

FUN13(VAR3);
if ((VAR8 = FUN14(VAR5, VAR3)) != 0)
FUN15(VAR8, "", VAR6);
if ((VAR8 = FUN16(VAR1, VAR3)) != 0)
FUN12(VAR1, VAR8, "", VAR19);
VAR7++;
}
FUN7("", VAR7);
if (VAR7 == 0)
FUN3("");
if ((VAR8 = FUN17(VAR1)) != 0)
FUN12(VAR1, VAR8, "", VAR19);
FUN18(VAR3);
}