static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
int VAR4;
unsigned long VAR5;
struct VAR6 *VAR7 = NULL;
int VAR8 = FUN2(FUN3(VAR1));

VAR4 = VAR8 & 0x0f;
VAR8 >>= 4;

if (VAR4 != VAR9 && VAR4 != VAR10 && VAR4 != VAR11) {
FUN4(VAR12 "");
return -VAR13;
}
FUN5(&VAR14);
if (VAR3->VAR15 & VAR16)	
VAR7 = VAR17[VAR8]->VAR18;
else if (VAR3->VAR15 & VAR19)
VAR7 = VAR17[VAR8]->VAR20;
else {
FUN4(VAR12 "");
FUN6(&VAR14);
return -VAR13;
}

if (VAR7 == NULL) {
FUN4(VAR12 "");
FUN6(&VAR14);
return -VAR21;
}
if (VAR7->VAR22 == NULL) {
FUN4(VAR12 "");
FUN6(&VAR14);
return -VAR21;
}
if (VAR7->VAR23) {
FUN4(VAR12 "");
FUN6(&VAR14);
return -VAR21;
}
if (VAR3->VAR24 != 0) {
FUN4(VAR12 "");
FUN6(&VAR14);
return -VAR13;
}
VAR5 = VAR3->VAR25 - VAR3->VAR26;

if (VAR5 != VAR7->VAR27) {
FUN4(VAR28 "", VAR5, VAR7->VAR27);
}
if (FUN7(VAR3, VAR3->VAR26,
FUN8(VAR7->VAR22) >> VAR29,
VAR3->VAR25 - VAR3->VAR26, VAR3->VAR30)) {
FUN6(&VAR14);
return -VAR31;
}

VAR7->VAR23 |= VAR32;

if( VAR17[VAR8]->VAR33->VAR34)
VAR17[VAR8]->VAR33->FUN9(VAR8);

memset(VAR7->VAR22,
VAR7->VAR35,
VAR7->VAR27);
FUN6(&VAR14);
return 0;
}

const struct file_operations VAR36 = {
.VAR37		= VAR38,
.VAR39		= VAR40,
.read		= VAR41,
.write		= VAR42,
.VAR43		= VAR44,
.VAR45	= VAR46,
.VAR34		= VAR47,
.open		= VAR48,
.VAR49	= VAR50,
};