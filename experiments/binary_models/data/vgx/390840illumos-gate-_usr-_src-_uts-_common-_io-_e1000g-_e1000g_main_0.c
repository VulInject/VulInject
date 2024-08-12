static int
FUN1(VAR1 *VAR2)
{
struct VAR3 *VAR4;

VAR4 = (struct VAR3 *)FUN2(VAR2);
if (VAR4 == NULL)
return (VAR5);

FUN3(&VAR4->VAR6, VAR7);

VAR4->VAR8 |= VAR9;


if (!(VAR4->VAR8 & VAR10)) {
FUN4(&VAR4->VAR6);
return (VAR11);
}

FUN5(VAR4, VAR12);

FUN4(&VAR4->VAR6);


FUN6(VAR4);
FUN7(VAR4);
FUN8(VAR4->VAR13);

return (VAR11);
}