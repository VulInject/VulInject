static int FUN1(struct VAR1 *VAR1, VAR2 *VAR3)
{
VAR2 *VAR4 = NULL;
u32 VAR5 = 0;
VAR2 *VAR6 = NULL;
VAR2 *VAR7;
int VAR8;
u16 VAR9;

FUN2(VAR1);

if (!VAR6) {
VAR4 = FUN3(VAR10, sizeof(VAR2),
VAR11);
if (!VAR4)
return -VAR12;

VAR8 = FUN4(VAR1, 0,
VAR10,
VAR4);
if (VAR8 != 0) {
FUN5(VAR1, "");
FUN6(VAR4);
return VAR8;
}
VAR7 = VAR4;
} else {
if (VAR5 < VAR10)
return -VAR13;
VAR7 = VAR6;
}

for (VAR9 = 0; VAR9 < VAR10; VAR9++)
if (VAR9 != VAR1->VAR14.VAR15 + VAR16)
*VAR3 += VAR7[VAR9];

if (VAR4)
FUN6(VAR4);

if (*VAR3 > VAR17)
return -VAR18;

*VAR3 = VAR17 - *VAR3;

return 0;
}