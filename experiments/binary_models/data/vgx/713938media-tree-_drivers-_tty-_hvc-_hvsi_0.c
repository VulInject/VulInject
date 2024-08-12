static int FUN1(struct VAR1 *VAR2,
const unsigned char *VAR3, int VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
const char *VAR8 = VAR3;
unsigned long VAR9;
int VAR10 = 0;
int VAR11 = VAR4;

FUN2(&VAR6->VAR12, VAR9);

FUN3("", VAR13, VAR6->VAR14);

if (!FUN4(VAR6)) {

FUN3("", VAR13);
goto VAR15;
}


while ((VAR4 > 0) && (FUN5(VAR2) > 0)) {
int VAR16 = FUN6(VAR4, FUN5(VAR2));

FUN7(VAR6->VAR14 < 0);
memcpy(VAR6->VAR17 + VAR6->VAR14, VAR8, VAR16);
VAR6->VAR14 += VAR16;

VAR10 += VAR16;
VAR8 += VAR16;
VAR4 -= VAR16;
FUN8(VAR6);
}

if (VAR6->VAR14 > 0) {

FUN9(&VAR6->VAR18, 10);
}

VAR15:
FUN10(&VAR6->VAR12, VAR9);

if (VAR10 != VAR11)
FUN3("", VAR13, VAR11,
VAR10);

return VAR10;
}