static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
u8 VAR4 = 0;
u16 VAR5 = 0;

FUN2(1, "");

VAR3 = FUN3(VAR2, VAR2->VAR6, &VAR4);
if (VAR3 < 0) {
do {
VAR4 = 0;
VAR3 = FUN4(VAR2, VAR2->VAR6,
&VAR4, 1);
FUN5(10000, 11000);
VAR5++;
if (VAR3 < 0)
continue;
VAR3 = FUN3(VAR2, VAR2->VAR6,
&VAR4);
} while (VAR3 < 0 &&
(VAR5 < VAR7));
if (VAR3 < 0 && VAR5 >= VAR7)
goto VAR8;
}


VAR3 = FUN6(VAR2, VAR9, VAR10);
if (VAR3 < 0)
goto VAR8;
VAR3 = FUN6(VAR2, VAR11, VAR12);
if (VAR3 < 0)
goto VAR8;

VAR3 = FUN6(VAR2, VAR13, 1);
if (VAR3 < 0)
goto VAR8;

VAR2->VAR14 = VAR15;

VAR8:
if (VAR3 < 0)
FUN7("", VAR3, VAR16);

return VAR3;
}