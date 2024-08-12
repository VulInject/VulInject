static int FUN1(struct socket *VAR1, int VAR2, int VAR3,
char VAR4 *VAR5, unsigned int VAR6)
{
struct VAR1 *VAR7 = VAR1->VAR7;
struct VAR8 *VAR9 = FUN2(VAR7);
const struct VAR10 *VAR11;
int VAR12 = -VAR13;

FUN3(VAR7);
if (VAR9->VAR14)
goto VAR15;

VAR11 = VAR9->VAR11;

VAR12 = -VAR16;
if (VAR2 != VAR17 || !VAR11)
goto VAR15;

switch (VAR3) {
case VAR18:
if (VAR1->VAR19 == VAR20)
goto VAR15;
if (!VAR11->VAR21)
goto VAR15;

VAR12 = FUN4(VAR7, VAR5, VAR6);
break;
case VAR22:
if (VAR1->VAR19 == VAR20)
goto VAR15;
if (!VAR11->VAR23)
goto VAR15;
VAR12 = VAR11->FUN5(VAR9->private, VAR6);
}

VAR15:
FUN6(VAR7);

return VAR12;
}