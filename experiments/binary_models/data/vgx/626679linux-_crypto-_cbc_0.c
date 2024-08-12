static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
unsigned int VAR5 = FUN2(VAR4);
void (*VAR6)(struct VAR7 *, VAR8 *, const VAR8 *);
unsigned int VAR9 = VAR2->VAR9;
VAR8 *VAR10 = VAR2->VAR10.VAR11.VAR12;
u8 VAR13[VAR14];
struct VAR15 *VAR16;
struct VAR7 *VAR17;

VAR16 = FUN3(VAR4);
VAR17 = FUN4(VAR16);
VAR6 = FUN5(VAR16)->VAR18;


VAR10 += VAR9 - (VAR9 & (VAR5 - 1)) - VAR5;
memcpy(VAR13, VAR10, VAR5);

for (;;) {
FUN6(VAR17, VAR10, VAR10);
if ((VAR9 -= VAR5) < VAR5)
break;
FUN7(VAR10, VAR10 - VAR5, VAR5);
VAR10 -= VAR5;
}

FUN7(VAR10, VAR2->VAR19, VAR5);
memcpy(VAR2->VAR19, VAR13, VAR5);

return VAR9;
}