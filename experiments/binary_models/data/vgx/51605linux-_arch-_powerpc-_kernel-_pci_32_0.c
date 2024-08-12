static void
FUN1(struct VAR1* VAR2, u8 VAR3)
{
const int *VAR4;
int VAR5;

if (VAR3 >= VAR6)
return;
VAR4 = FUN2(VAR2, "", &VAR5);
if (VAR4 == NULL || VAR5 < 2 * sizeof(int)) {
FUN3(VAR7 ""
"", VAR2);
VAR8[VAR3] = 0;
} else
VAR8[VAR3] = VAR4[0];

FUN4(VAR2, VAR2) {
struct VAR9* VAR10;
const unsigned int *VAR11, *VAR12;

VAR11 = FUN2(VAR2, "", NULL);
if (!VAR11 || ((*VAR11 >> 8) != VAR13 &&
(*VAR11 >> 8) != VAR14))
continue;
VAR12 = FUN2(VAR2, "", NULL);
if (!VAR12)
continue;
VAR10 = FUN5(0, VAR3,
((VAR12[0] >> 8) & 0xff));
if (!VAR10 || !VAR10->VAR15) {
FUN6(VAR10);
continue;
}
FUN1(VAR2, VAR10->VAR15->VAR16);
FUN6(VAR10);
}
}