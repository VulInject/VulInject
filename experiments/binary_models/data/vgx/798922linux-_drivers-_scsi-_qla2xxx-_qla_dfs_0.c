static int
FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2)
{
VAR3 *VAR4 = VAR1->VAR5;
struct VAR6 *VAR7 = VAR4->VAR8;
int VAR9;

if (VAR7->VAR10.VAR11)
goto VAR12;

FUN2(&VAR7->VAR13);


VAR7->VAR10.VAR11 = 1;
memset(VAR7->VAR14, 0, FUN3(VAR7->VAR15));
VAR9 = FUN4(VAR4, VAR7->VAR16, VAR7->VAR15,
VAR7->VAR17, &VAR7->VAR15);
if (VAR9) {
FUN5(VAR18, VAR4, 0x700d,
"", VAR9);
VAR7->VAR10.VAR11 = 0;
}

FUN6(&VAR7->VAR13);
VAR12:
return FUN7(VAR1, VAR2);
}

static const struct file_operations VAR19 = {
.open		= VAR20,
.read		= VAR21,
.VAR22		= VAR23,
.VAR24	= VAR25,
};