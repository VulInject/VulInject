int FUN1(struct VAR1 *VAR2, int VAR3,
unsigned int VAR4, struct VAR5 *VAR6,
VAR7 *VAR8)
{
int VAR9 = 0;
struct VAR10 *VAR11;
int VAR12 = VAR4 & VAR13;
int VAR14 = VAR4 & VAR15;
int VAR16 = VAR4 & VAR17;
int VAR18 = VAR4 & VAR19;
int VAR20 = VAR4 & VAR21;
int VAR22 = VAR4 & VAR23;
int VAR24 = VAR4 & VAR25;
int VAR26 = VAR4 & VAR27;
int VAR28 = VAR4 & VAR29;
char VAR30 = VAR20 ? '' : '';
bool VAR31 = true;

if (VAR2->VAR32) {
struct addr_location VAR33;

FUN2(VAR6);

while (1) {
u64 VAR34 = 0;

VAR11 = FUN3(VAR6);
if (!VAR11)
break;

if (VAR11->VAR35 && VAR11->VAR35->VAR36 && VAR28)
goto VAR37;

VAR9 += fprintf(VAR8, "", VAR3, VAR3, "");

if (VAR26 && !VAR31)
VAR9 += fprintf(VAR8, "");

if (VAR12)
VAR9 += fprintf(VAR8, "" VAR38, VAR30, VAR11->VAR39);

if (VAR11->VAR40)
VAR34 = VAR11->VAR40->FUN4(VAR11->VAR40, VAR11->VAR39);

if (VAR14) {
VAR9 += fprintf(VAR8, "");
VAR33.VAR34 = VAR34;
VAR33.VAR40  = VAR11->VAR40;

if (VAR18) {
VAR9 += FUN5(VAR11->VAR35, &VAR33,
VAR24,
true, VAR8);
} else {
VAR9 += FUN6(VAR11->VAR35, &VAR33,
VAR24, VAR8);
}
}

if (VAR16) {
VAR9 += fprintf(VAR8, "");
VAR9 += FUN7(VAR11->VAR40, VAR8);
VAR9 += fprintf(VAR8, "");
}

if (VAR22)
VAR9 += FUN8(VAR11->VAR40, VAR34, "", VAR8);

if (!VAR20)
VAR9 += fprintf(VAR8, "");

if (VAR41.VAR42 &&
VAR11->VAR35 &&
FUN9(VAR41.VAR42,
VAR11->VAR35->VAR43)) {
break;
}

VAR31 = false;
VAR37:
FUN10(VAR6);
}
}

return VAR9;
}