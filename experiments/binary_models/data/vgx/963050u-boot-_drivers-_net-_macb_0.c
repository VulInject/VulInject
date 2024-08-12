static int FUN1(struct VAR1 *VAR2, VAR3 **VAR4)
{
unsigned int VAR5 = VAR2->VAR5;
void *VAR6;
int VAR7;
u32 VAR8;
u8 VAR9 = false;

VAR2->VAR10 = false;
for (;;) {
FUN2(VAR2, VAR11);

if (VAR2->VAR12->VAR13 & VAR14)
VAR5 = VAR5 * 2;

if (!(VAR2->VAR15[VAR5].VAR16 & FUN3(VAR17)))
return -VAR18;

VAR8 = VAR2->VAR15[VAR5].VAR19;
if (VAR8 & FUN3(VAR20)) {
if (VAR2->VAR12->VAR13 & VAR14) {
VAR5 = VAR5 / 2;
VAR9 = true;
}

if (VAR5 != VAR2->VAR21)
FUN4(VAR2, VAR5);
VAR2->VAR10 = false;
}

if (VAR8 & FUN3(VAR22)) {
VAR6 = VAR2->VAR23 +
VAR2->VAR24 * VAR2->VAR21;
VAR7 = VAR8 & VAR25;

FUN5(VAR2);
if (VAR2->VAR10) {
unsigned int VAR26, VAR27;

VAR26 = VAR2->VAR24 *
(VAR28 - VAR2->VAR21);
VAR27 = VAR7 - VAR26;
memcpy((void *)VAR29[0],
VAR6, VAR26);
memcpy((void *)VAR29[0] + VAR26,
VAR2->VAR23, VAR27);
*VAR4 = (void *)VAR29[0];
} else {
*VAR4 = VAR6;
}

if (VAR2->VAR12->VAR13 & VAR14) {
if (!VAR9)
VAR5 = VAR5 / 2;
}

if (++VAR5 >= VAR28)
VAR5 = 0;
VAR2->VAR5 = VAR5;
return VAR7;
} else {
if (VAR2->VAR12->VAR13 & VAR14) {
if (!VAR9)
VAR5 = VAR5 / 2;
VAR9 = false;
}

if (++VAR5 >= VAR28) {
VAR2->VAR10 = true;
VAR5 = 0;
}
}
FUN6();
}
}