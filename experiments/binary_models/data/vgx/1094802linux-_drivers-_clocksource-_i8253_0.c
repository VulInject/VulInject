static VAR1 FUN1(struct VAR2 *VAR3)
{
static int VAR4;
static u32 VAR5;
unsigned long VAR6;
int VAR7;
u32 VAR8;

FUN2(&VAR9, VAR6);

VAR8 = VAR10;
FUN3(0x00, VAR11);	
VAR7 = FUN4(VAR12);	
VAR7 |= FUN4(VAR12) << 8;


if (VAR7 > VAR13) {
FUN3(0x34, VAR11);
FUN3(VAR13 & 0xff, VAR12);
FUN3(VAR13 >> 8, VAR12);
VAR7 = VAR13 - 1;
}


if (VAR7 > VAR4 && VAR8 == VAR5)
VAR7 = VAR4;

VAR4 = VAR7;
VAR5 = VAR8;

FUN5(&VAR9, VAR6);

VAR7 = (VAR13 - 1) - VAR7;

return (VAR1)(VAR8 * VAR13) + VAR7;
}

static struct clocksource VAR14 = {
.VAR15		= "",
.VAR16		= 110,
.read		= VAR17,
.VAR18		= FUN6(32),
};