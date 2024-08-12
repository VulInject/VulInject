int
FUN1(int VAR1, unsigned long long *VAR2)
{

if (FUN2(VAR1, VAR3, VAR2) >= 0) {
*VAR2 <<= 9;
return 0;
}

{
int VAR4 = FUN3();


if (VAR4 >= FUN4 (2,6,0) ||
(VAR4 >= FUN4 (2,4,18) && VAR4 < FUN4 (2,5,0)))
if (FUN2(VAR1, VAR5, VAR2) >= 0)
return 0;
}

{
unsigned long VAR6;

if (FUN2(VAR1, VAR7, &VAR6) >= 0) {
*VAR2 = ((unsigned long long)VAR6 << 9);
return 0;
}
}



if (FUN2(VAR1, VAR8, VAR2) >= 0)
return 0;

{
struct floppy_struct VAR9;

if (FUN2(VAR1, VAR10, &VAR9) >= 0) {
*VAR2 = ((unsigned long long) VAR9.VAR6) << 9;
return 0;
}
}

{

int VAR11 = -1;
struct disklabel VAR12;
struct VAR13 *VAR14;
struct stat VAR15;

if ((FUN5(VAR1, &VAR15) >= 0) &&
(FUN6(VAR15.VAR16) || FUN7(VAR15.VAR16)))
VAR11 = VAR15.VAR17 & 7;

if (VAR11 >= 0 && (FUN2(VAR1, VAR18, (char *)&VAR12) >= 0)) {
VAR14 = &VAR12.VAR19[VAR11];
if (VAR14->VAR20) {
*VAR2 = VAR14->VAR20 << 9;
return 0;
}
}
}

{
struct stat VAR15;

if (FUN5(VAR1, &VAR15) == 0 && FUN8(VAR15.VAR16)) {
*VAR2 = VAR15.VAR21;
return 0;
}
if (!FUN6(VAR15.VAR16))
return -1;
}

*VAR2 = FUN9(VAR1);
return 0;
}