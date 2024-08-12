static int FUN1(struct VAR1 *VAR2, void *VAR3, struct VAR4 *VAR5)
{
VAR6 *VAR7 = VAR2->VAR8;
VAR9 *VAR10 = VAR3;
int VAR11;

FUN2(VAR2, VAR5);

FUN3(VAR7);

FUN4(VAR7);

VAR11 = -VAR12;
switch (VAR10->VAR13) {
case VAR14:
VAR11 = FUN5(VAR2, VAR10);
break;
case VAR15:
VAR11 = FUN6(VAR2, VAR10);
break;
case VAR16:
VAR11 = FUN7(VAR2, VAR10);
break;
case VAR17:
VAR11 = FUN8(VAR2, VAR10);
break;
}

FUN9();
return VAR11;
}