static int FUN1(struct VAR1 *VAR2, u64 VAR3)
{
unsigned int VAR4;
u64 VAR5;
int VAR6;

while (1) {
struct VAR7 *VAR8;
struct VAR9 *VAR10;

if (!VAR2->VAR11.VAR12)
return 0;

if (VAR2->VAR11.VAR13[0].VAR14 >= VAR3)
return 0;

VAR4 = VAR2->VAR11.VAR13[0].VAR4;
VAR8 = &VAR2->VAR15.VAR16[VAR4];
VAR10 = VAR8->VAR17;

FUN2("" VAR18 "" VAR18 "",
VAR4, VAR2->VAR11.VAR13[0].VAR14,
VAR3);

FUN3(&VAR2->VAR11);

if (VAR2->VAR11.VAR12) {
VAR5 = VAR2->VAR11.VAR13[0].VAR14 + 1;
if (VAR5 > VAR3)
VAR5 = VAR3;
} else {
VAR5 = VAR3;
}

FUN4(VAR2, VAR8);

VAR6 = FUN5(VAR10, &VAR5);

if (VAR6 < 0) {
FUN6(&VAR2->VAR11, VAR4, VAR5);
return VAR6;
}

if (!VAR6) {
VAR6 = FUN6(&VAR2->VAR11, VAR4, VAR5);
if (VAR6 < 0)
return VAR6;
} else {
VAR10->VAR19 = false;
}
}

return 0;
}