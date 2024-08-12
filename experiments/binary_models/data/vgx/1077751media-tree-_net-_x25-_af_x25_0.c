static int FUN1(struct socket *VAR1, struct socket *VAR2, int VAR3,
bool VAR4)
{
struct VAR1 *VAR5 = VAR1->VAR5;
struct VAR1 *VAR6;
struct VAR7 *VAR8;
int VAR9 = -VAR10;

if (!VAR5)
goto VAR11;

VAR9 = -VAR12;
if (VAR5->VAR13 != VAR14)
goto VAR11;

FUN2(VAR5);
VAR9 = -VAR10;
if (VAR5->VAR15 != VAR16)
goto VAR17;

VAR9 = FUN3(VAR5, VAR5->VAR18);
if (VAR9)
goto VAR17;
VAR8 = FUN4(&VAR5->VAR19);
VAR9 = -VAR10;
if (!VAR8->VAR5)
goto VAR17;
VAR6		 = VAR8->VAR5;
FUN5(VAR6, VAR2);


VAR8->VAR5 = NULL;
FUN6(VAR8);
VAR5->VAR20--;
VAR2->VAR21 = VAR22;
VAR9 = 0;
VAR17:
FUN7(VAR5);
VAR11:
return VAR9;
}