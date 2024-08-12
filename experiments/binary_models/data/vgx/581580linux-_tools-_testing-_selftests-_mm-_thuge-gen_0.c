void FUN1(unsigned long VAR1, unsigned VAR2)
{
int VAR3;
unsigned long VAR4, VAR5;
int VAR6;

VAR4 = FUN2(VAR1);
VAR3 = FUN3(VAR7, VAR1 * VAR8, VAR9|0600|VAR2);
if (VAR3 < 0) FUN4("");

struct shm_info VAR10;
if (FUN5(VAR3, VAR11, (void *)&VAR10) < 0) FUN4("");
FUN6("", VAR10.VAR12, VAR10.VAR13);


FUN6("", VAR3);
char *VAR14 = FUN7(VAR3, NULL, 0600);
if (VAR14 == (char*)-1) FUN4("");

FUN5(VAR3, VAR15, NULL);

memset(VAR14, 0xff, VAR1*VAR8);
VAR5 = FUN2(VAR1);

FUN6("",
VAR4, VAR5, VAR4 - VAR5, VAR1);
assert(VAR1 == FUN8() || (VAR4 - VAR5) == VAR8);
FUN9(VAR1);
VAR6 = FUN10(VAR14);
assert(!VAR6);
}