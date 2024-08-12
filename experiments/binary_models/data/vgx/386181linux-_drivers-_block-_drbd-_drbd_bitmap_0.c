static void FUN1(struct VAR1 *VAR2, size_t VAR3, int VAR4, size_t VAR5)
{
unsigned long *VAR6, *VAR7;
unsigned int VAR8;
size_t VAR9, VAR10;

VAR10 = VAR3 + VAR5;

if (VAR10 > VAR2->VAR11) {
FUN2("");
return;
}

while (VAR3 < VAR10) {
VAR9 = FUN3(VAR12, FUN4(VAR3 + 1, VAR13), VAR10) - VAR3;
VAR8 = FUN5(VAR2, VAR3);
VAR6 = FUN6(VAR2, VAR8);
VAR7 = VAR6 + FUN7(VAR3);
if (VAR7+VAR9 > VAR6 + VAR13) {
FUN2("",
VAR6, VAR7, (int)VAR9);
} else
memset(VAR7, VAR4, VAR9 * sizeof(long));
FUN8(VAR6);
FUN9(VAR2->VAR14[VAR8]);
VAR3 += VAR9;
}
}