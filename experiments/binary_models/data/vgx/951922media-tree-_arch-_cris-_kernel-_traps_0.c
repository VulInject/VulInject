extern void FUN1(void);
extern void FUN2(void);
extern void FUN3(void);
extern void FUN4(struct VAR1 *VAR2);

extern void FUN5(struct VAR1 *VAR2);

static int VAR3 = 24;

void (*VAR4)(struct VAR1 *);

void FUN6(unsigned long *VAR5)
{
unsigned long VAR6, VAR7, VAR8;
extern char VAR9, VAR10;
int VAR11;

FUN7("");

VAR11 = 1;
VAR7 = VAR12;
VAR8 = VAR13;

while (((long)VAR5 & (VAR14 - 1)) != 0) {
if (FUN8(VAR6, VAR5)) {

FUN7("", (unsigned long)VAR5);
break;
}
VAR5++;


if (((VAR6 >= (unsigned long)&VAR9) &&
(VAR6 <= (unsigned long)&VAR10)) ||
((VAR6 >= VAR7) && (VAR6 <= VAR8))) {
FUN9(VAR6);
if (VAR11 && ((VAR11 % 8) == 0))
FUN7("");
FUN7("", VAR6);
VAR11++;
}
}
}