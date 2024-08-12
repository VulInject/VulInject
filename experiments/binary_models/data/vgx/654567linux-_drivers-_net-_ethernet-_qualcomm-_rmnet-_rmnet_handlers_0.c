VAR1 FUN1(struct VAR2 **VAR3)
{
struct VAR2 *VAR4 = *VAR3;
struct VAR5 *VAR6;
struct VAR7 *VAR8;

if (!VAR4)
goto VAR9;

if (FUN2(VAR4)) {
FUN3(VAR4);
goto VAR9;
}

if (VAR4->VAR10 == VAR11)
return VAR12;

VAR8 = VAR4->VAR8;
VAR6 = FUN4(VAR8);
if (FUN5(!VAR6)) {
FUN6(VAR4->VAR8);
FUN3(VAR4);
goto VAR9;
}

switch (VAR6->VAR13) {
case VAR14:
FUN7(VAR4, VAR6);
break;
case VAR15:
FUN8(VAR4, VAR6->VAR16);
break;
}

VAR9:
return VAR17;
}