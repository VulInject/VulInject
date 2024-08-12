static void
FUN1(struct VAR1 *VAR1, const char *VAR2,
unsigned int VAR3)
{
unsigned long VAR4;
void *VAR5;
int VAR6;

if (VAR3 == 0)
return;
FUN2(&VAR7, VAR4);

do {

if (VAR8 == NULL) {
if (FUN3(&VAR9))
VAR10++;
while (FUN3(&VAR9)) {
if (FUN4())
break;
FUN5(&VAR7, VAR4);
FUN6();
FUN2(&VAR7, VAR4);
}
VAR5 = VAR9.VAR11;
FUN7((struct VAR12 *) VAR5);
VAR8 = FUN8(VAR5, VAR13,
VAR14);
}

VAR6 = FUN9(VAR8, (const unsigned char *)
VAR2, VAR3);
if (VAR6 == VAR3)
break;

FUN5(&VAR7, VAR4);
FUN10();
FUN2(&VAR7, VAR4);
VAR2 += VAR6;
VAR3 -= VAR6;
} while (VAR3 > 0);

if (VAR8 != NULL && FUN11(VAR8) != 0 &&
!FUN12(&VAR15)) {
FUN13(&VAR15, VAR16 + VAR17 / 10);
}
FUN5(&VAR7, VAR4);
}