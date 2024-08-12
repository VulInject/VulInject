static void FUN1(int VAR1, int VAR2, unsigned int VAR3)
{
unsigned long long VAR4, VAR5, VAR6[VAR7];
int VAR8, VAR9;
unsigned int VAR10;
unsigned int VAR11;
int VAR12 = 0;

if (VAR2 & VAR13)

return;

FUN2("", VAR14, VAR1,
VAR2);

assert(FUN3(0, &VAR12) != -1);

VAR10 = VAR3 / 2;
assert(VAR10 * 2 == VAR3);

VAR11 = VAR3 + VAR10;
VAR8 = FUN4(VAR1, VAR2, VAR11);
assert(VAR8 != -1);

VAR9 = FUN4(VAR15, 0, VAR11);
assert(VAR9 != -1);

VAR6[0] = 1234;


VAR5 = 1 + VAR3;
for (VAR4 = 1; VAR4 < VAR5; VAR4++)
assert(!FUN5(VAR8, &VAR4, VAR6,
VAR16));


VAR5 = 1 + VAR10;
for (VAR4 = 1; VAR4 < VAR5; VAR4++) {
assert(!FUN6(VAR8, &VAR4, VAR6));
assert(!FUN5(VAR9, &VAR4, VAR6,
VAR16));
}


VAR4 = 1 + VAR3;
VAR5 = VAR4 + VAR3;
for (; VAR4 < VAR5; VAR4++) {
assert(!FUN5(VAR8, &VAR4, VAR6,
VAR16));
assert(!FUN5(VAR9, &VAR4, VAR6,
VAR16));
}

assert(FUN7(VAR8, VAR9));

close(VAR9);
close(VAR8);

FUN2("");
}