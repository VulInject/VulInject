static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2,
struct VAR3, VAR5);
struct VAR6 *VAR7 = VAR4->VAR7;
struct VAR8 *VAR9 = &VAR4->VAR9;
int VAR10, VAR11;
enum ep_partner_status VAR12;
int VAR13, VAR14, VAR15;
union VAR16 *VAR17;
int VAR18;

if (((long)VAR19 -
FUN3(VAR7)) > VAR20) {
FUN4(VAR7);
return;
}

VAR14 = VAR9->VAR14;
VAR13 = VAR9->VAR13;

for (VAR18 = 0; VAR18 < 5; VAR18++) {
VAR10 = 1;

for (VAR15 = 0; VAR15 < VAR13; VAR15++) {
if (VAR14 == VAR15)
continue;

VAR12 = FUN5(VAR9, VAR15);
VAR11 = (VAR12 == VAR21);
if (!VAR11)
continue;

VAR17 = VAR4->VAR9.VAR22[VAR15].VAR23.VAR17;

if (!(VAR17->VAR24.VAR25 & VAR26))
return;

if (FUN6(VAR17->VAR24.VAR27, VAR17->VAR24.VAR28,
VAR17->VAR24.VAR29)) {
VAR10 = 0;
break;
}
}

if (VAR10) {
FUN4(VAR7);
return;
}
}

FUN7(50, 100);

FUN8(VAR4->VAR30, &VAR4->VAR5);
}