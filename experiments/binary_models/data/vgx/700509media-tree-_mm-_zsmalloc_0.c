void FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
struct VAR4 *VAR4;
struct VAR5 *VAR6;
unsigned long VAR7;
unsigned int VAR8;
int VAR9;
struct VAR10 *class;
enum fullness_group VAR11;
bool VAR12;

if (FUN2(!VAR3))
return;

FUN3(VAR3);
VAR7 = FUN4(VAR3);
FUN5(VAR7, &VAR6, &VAR8);
VAR4 = FUN6(VAR6);

FUN7(VAR4);

FUN8(VAR4, &VAR9, &VAR11);
class = VAR2->VAR10[VAR9];

FUN9(&class->VAR13);
FUN10(class, VAR7);
VAR11 = FUN11(class, VAR4);
if (VAR11 != VAR14) {
FUN12(VAR4);
goto VAR15;
}

VAR12 = FUN13(VAR4);
FUN12(VAR4);

if (FUN14(!VAR12))
FUN15(VAR2, class, VAR4);
VAR15:

FUN16(&class->VAR13);
FUN17(VAR3);
FUN18(VAR2, VAR3);
}