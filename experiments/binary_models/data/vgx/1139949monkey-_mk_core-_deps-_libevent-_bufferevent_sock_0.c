int
FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4, int VAR5)
{
struct VAR6 *VAR7 =
FUN2(VAR2, struct VAR6, VAR2);

evutil_socket_t VAR8;
int VAR9 = 0;
int VAR10=-1;
int VAR11 = 0;

FUN3(VAR2);

if (!VAR7)
goto VAR12;

VAR8 = FUN4(VAR2);
if (VAR8 < 0) {
if (!VAR4)
goto VAR12;
VAR8 = FUN5(VAR4->VAR13,
VAR14|VAR15, 0);
if (VAR8 < 0)
goto VAR12;
VAR11 = 1;
}
if (VAR4) {
if (FUN6(VAR2)) {
FUN7(VAR2, VAR8);
VAR9 = FUN8(VAR2, VAR8, VAR4, VAR5);
if (VAR9 < 0)
goto VAR16;
VAR7->VAR17 = 1;
VAR10 = 0;
goto VAR12;
} else
VAR9 = FUN9(&VAR8, VAR4, VAR5);
if (VAR9 < 0)
goto VAR16;
}

if (FUN10(VAR2)) {
FUN11(&VAR2->VAR18, VAR2->VAR19, VAR8,
VAR20|VAR21|VAR22, VAR23, VAR2);
}
FUN7(VAR2, VAR8);
if (VAR9 == 0) {
if (! FUN12(VAR2, VAR20)) {
VAR7->VAR17 = 1;
VAR10 = 0;
goto VAR12;
}
} else if (VAR9 == 1) {

VAR10 = 0;
VAR7->VAR17 = 1;
FUN13(&VAR2->VAR18, VAR20, 1);
} else {

VAR7->VAR24 = 1;
VAR7->VAR17 = 1;
VAR10 = 0;
FUN13(&VAR2->VAR18, VAR20, 1);
}

goto VAR12;

VAR16:
FUN14(VAR2, VAR25, 0);
if (VAR11)
FUN15(VAR8);

VAR12:
FUN16(VAR2);
return VAR10;
}