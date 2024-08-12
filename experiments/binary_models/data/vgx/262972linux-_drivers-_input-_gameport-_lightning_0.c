static int FUN1(struct VAR1 *VAR1, int *VAR2, int *VAR3)
{
struct VAR4 *VAR4 = VAR1->VAR5;
unsigned char VAR6;
int VAR7, VAR8 = -1;

FUN2(VAR9, VAR10);
FUN2(VAR11 + (VAR4->VAR12 >> 2), VAR10);

if (FUN3(VAR10) & VAR13) goto VAR14;
FUN2(VAR4->VAR12 & 3, VAR10);

if (FUN4()) goto VAR14;
VAR6 = FUN3(VAR10);

for (VAR7 = 0; VAR7 < 4; VAR7++)
if (VAR6 & (1 << VAR7)) {
if (FUN4()) goto VAR14;
VAR2[VAR7] = FUN3(VAR10);
if (VAR2[VAR7] > 252) VAR2[VAR7] = -1;
}

if (VAR6 & 0x10) {
if (FUN4()) goto VAR14;
*VAR3 = FUN3(VAR10) & 0x0f;
}

VAR8 = 0;

VAR14:	FUN2(VAR9, VAR10);
return VAR8;
}