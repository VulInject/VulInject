static int FUN1(struct VAR1 *VAR2, bool VAR3)
{
struct VAR4		*VAR4 = FUN2(VAR2);
struct VAR5		*VAR6 = FUN3(VAR4);
int			VAR7;


VAR7 = FUN4(VAR2);
if (VAR7)
return VAR7;

if (VAR6->VAR8->VAR9 && !FUN5(VAR6)) {

if (VAR3 && FUN6(VAR6))
return -VAR10;
if (VAR3 && VAR6->VAR11 &&
FUN6(VAR6->VAR11))
return -VAR10;
VAR7 = VAR6->VAR8->FUN7(VAR6, VAR3);
FUN8(VAR2, VAR6->VAR8->VAR9, VAR7);


if ((VAR7 == 0 && VAR3 && FUN6(VAR6)) ||
(VAR7 == 0 && VAR3 && VAR6->VAR11 &&
FUN6(VAR6->VAR11))) {
if (VAR6->VAR8->VAR12)
VAR6->VAR8->FUN9(VAR6, false);
VAR7 = -VAR10;
}
if (VAR7)
return VAR7;
}


if (!VAR6->VAR13)
FUN10(FUN11(VAR4, 0));


FUN12(VAR4);
return VAR7;
}