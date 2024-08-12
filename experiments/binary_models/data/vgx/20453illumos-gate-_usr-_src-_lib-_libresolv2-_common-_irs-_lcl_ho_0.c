struct VAR1 *
FUN1(struct VAR2 *this) {
struct VAR1 *VAR3;
struct VAR4 *VAR4;

FUN2(this);

if (!(VAR4 = FUN3(sizeof *VAR4))) {
VAR5 = VAR6;
return (NULL);
}
memset(VAR4, 0, sizeof *VAR4);
if (!(VAR3 = FUN3(sizeof *VAR3))) {
FUN4(VAR4, sizeof *VAR4);
VAR5 = VAR6;
return (NULL);
}
memset(VAR3, 0x5e, sizeof *VAR3);
VAR3->private = VAR4;
VAR3->close = VAR7;
VAR3->VAR8 = VAR9;
VAR3->VAR10 = VAR11;
VAR3->VAR12 = VAR13;
VAR3->VAR14 = VAR15;
VAR3->VAR16 = VAR17;
VAR3->VAR18 = VAR19;
VAR3->VAR20 = VAR21;
VAR3->VAR22 = VAR23;
VAR3->VAR24 = VAR25;
return (VAR3);
}