static int
FUN1(const unsigned char *VAR1, int VAR2, int VAR3,
int VAR4, int VAR5)
{
unsigned long VAR6;
void *VAR7;
int VAR8;
int VAR9;

if (VAR2 <= 0)
return 0;
VAR9 = 0;
FUN2(&VAR10, VAR6);
do {

if (VAR11 == NULL) {
if (FUN3(&VAR12))
VAR13++;
while (FUN3(&VAR12)) {
if (VAR5)
goto VAR14;
if (FUN4())
break;
FUN5(&VAR10, VAR6);

FUN6();
FUN2(&VAR10, VAR6);
}
VAR7 = (void *) VAR12.VAR15;
FUN7((struct VAR16 *) VAR7);
VAR11 =
FUN8(VAR7);
}

VAR8 = FUN9(VAR11,
VAR1, VAR2, VAR4);
VAR9 += VAR8;
if (VAR8 == VAR2)
break;

FUN5(&VAR10, VAR6);
FUN10();
FUN2(&VAR10, VAR6);
VAR1 += VAR8;
VAR2 -= VAR8;
} while (VAR2 > 0);

if (VAR11 != NULL &&
!FUN11(&VAR17) && VAR3) {
VAR17.VAR18 = VAR19 + VAR20;
FUN12(&VAR17);
}
VAR14:
FUN5(&VAR10, VAR6);
return VAR9;
}