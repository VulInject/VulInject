static struct VAR1 * FUN1(struct VAR2 *this, const char *VAR3,
const struct VAR1 *VAR4);

static VAR5		FUN2(const char *);
static int		FUN3(struct VAR2 *this);






struct VAR2 *
FUN4(struct VAR6 *this) {
struct VAR2 *VAR7;
struct VAR8 *VAR8;

FUN5(this);

if (!(VAR8 = FUN6(sizeof *VAR8))) {
VAR9 = VAR10;
return (NULL);
}
memset(VAR8, 0, sizeof *VAR8);
if (!(VAR7 = FUN6(sizeof *VAR7))) {
FUN7(VAR8, sizeof *VAR8);
VAR9 = VAR10;
return (NULL);
}
memset(VAR7, 0x5e, sizeof *VAR7);
VAR7->private = VAR8;
VAR7->close = VAR11;
VAR7->VAR12 = VAR13;
VAR7->VAR14 = VAR15;
VAR7->VAR16 = VAR17;
VAR7->VAR18 = VAR19;
VAR7->VAR20 = VAR21;
VAR7->VAR22 = VAR23;
VAR7->VAR24 = VAR25;
VAR7->VAR26 = VAR27;
VAR7->VAR1 = VAR28;
return (VAR7);
}