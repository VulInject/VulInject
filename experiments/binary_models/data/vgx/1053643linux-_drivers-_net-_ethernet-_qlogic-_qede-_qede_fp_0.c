static int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR5;
struct VAR6 *VAR7 = VAR2->VAR7;
int VAR8 = 0, VAR9 = 0;
u16 VAR10, VAR11;

VAR10 = FUN2(*VAR5->VAR12);
VAR11 = FUN3(&VAR5->VAR13);


FUN4();


while ((VAR11 != VAR10) && (VAR8 < VAR3)) {
VAR9 += FUN5(VAR7, VAR2, VAR5);
FUN6(&VAR5->VAR13);
VAR11 = FUN3(&VAR5->VAR13);
VAR8++;
}

VAR5->VAR9 += VAR9;


while (VAR5->VAR14 - VAR5->VAR15)
if (FUN7(VAR5, false))
break;


FUN8(VAR7, VAR5);

return VAR8;
}