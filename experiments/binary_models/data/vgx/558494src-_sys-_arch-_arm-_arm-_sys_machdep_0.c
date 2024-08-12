static int FUN1 (struct VAR1 *, char *, VAR2 *);
static int FUN2 (struct VAR1 *, char *, VAR2 *);

static int
FUN1(struct VAR1 *VAR3, char *VAR4, VAR2 *VAR5)
{
struct arm_sync_icache_args VAR6;
struct VAR7 *VAR8 = &VAR3->VAR9->VAR7;
struct VAR10 *VAR11;
vaddr_t VAR12;
vsize_t VAR13, VAR14;
int VAR15;

if ((VAR15 = FUN3(VAR4, &VAR6, sizeof(VAR6))) != 0)
return (VAR15);

VAR12 = VAR6.VAR16;
VAR13 = VAR6.VAR17;

FUN4(VAR8);

if (VAR12 + VAR13 <= FUN5(VAR8) || VAR12 >= FUN6(VAR8) ||
VAR12 + VAR13 < VAR12)
goto VAR18;

if (VAR12 < FUN5(VAR8)) {
VAR13 -= FUN5(VAR8) - VAR12;
VAR12 = FUN5(VAR8);
} else if (VAR12 + VAR13 >= FUN6(VAR8)) {
VAR13 = FUN6(VAR8) - VAR12;
}

VAR14 = VAR19 - (VAR12 & VAR20);
while (VAR13 > 0) {
if (VAR14 > VAR13)
VAR14 = VAR13;

if (FUN7(VAR8, VAR12, &VAR11))
FUN8(VAR12, VAR14);

VAR12 += VAR14;
VAR13 -= VAR14;
VAR14 = VAR19;
}

VAR18:
FUN9(VAR8);

*VAR5 = 0;
return(0);
}