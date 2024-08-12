static struct VAR1 *	FUN1(struct VAR2 *, const char *);
static struct VAR1 * 	FUN2(struct VAR2 *, int);
static void 			FUN3(struct VAR2 *);
static void			FUN4(struct VAR2 *);
static struct VAR3 *	FUN5(struct VAR2 *);
static void			FUN6(struct VAR2 *,
struct VAR3 *,
void (*)(void *));



struct VAR2 *
FUN7(struct VAR4 *this) {
struct VAR5 *VAR6 = (struct VAR5 *)this->private;
struct VAR2 *VAR7;
struct VAR8 *VAR8;

if (!(VAR7 = FUN8(sizeof *VAR7))) {
VAR9 = VAR10;
return (NULL);
}
memset(VAR7, 0x5e, sizeof *VAR7);
if (!(VAR8 = FUN8(sizeof *VAR8))) {
FUN9(VAR7, sizeof *VAR7);
VAR9 = VAR10;
return (NULL);
}
memset(VAR8, 0, sizeof *VAR8);
VAR8->VAR11 = VAR6->VAR12[VAR2];
VAR8->VAR13 = VAR8->VAR11;
VAR7->private = VAR8;
VAR7->close = VAR14;
VAR7->VAR15 = VAR16;
VAR7->VAR17 = VAR18;
VAR7->VAR19 = VAR20;
VAR7->VAR21 = VAR22;
VAR7->VAR23 = VAR24;
VAR7->VAR25 = VAR26;
VAR7->VAR27 = VAR28;
return (VAR7);
}