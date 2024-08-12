static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6;

if (VAR4 == NULL)
return;

VAR6 = FUN3(VAR4);

FUN4(&VAR7);
if ((VAR6->VAR8 > 1) || (VAR6->VAR9 == VAR10)) {

FUN5(&VAR7);
return;
} else if (VAR6->VAR8 == 1)
VAR6->VAR9 = VAR10;
FUN5(&VAR7);



if (VAR6->VAR11 && VAR6->VAR11->VAR12) {
FUN6(VAR13, "");
FUN7(&VAR6->VAR11->VAR12->VAR14);
FUN7(&VAR6->VAR11->VAR12->VAR15);
FUN8(1); 

FUN7(&VAR6->VAR11->VAR12->VAR15);
FUN8(1);
}

return;
}