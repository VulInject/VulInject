static void FUN1(struct VAR1 *VAR2, int VAR3, VAR4 *VAR5,
unsigned int VAR6)
{
int VAR7 = -1;

while (VAR6) {
struct VAR8 *VAR9 = FUN2(VAR5);
size_t VAR10;

VAR10 = VAR11 - FUN3(VAR5);
if (VAR10 > VAR6)
VAR10 = VAR6;

if (VAR7 == -1 ||
FUN4(&VAR2[VAR7]) + VAR2[VAR7].VAR6 != FUN5(VAR9)) {
if (VAR7 + 1 == VAR3)
break;
FUN6(&VAR2[++VAR7], VAR9, VAR10,
FUN3(VAR5));
} else {
VAR2[VAR7].VAR6 += VAR10;
}

VAR5 += VAR10;
VAR6 -= VAR10;
}

FUN7(&VAR2[VAR7]);
}