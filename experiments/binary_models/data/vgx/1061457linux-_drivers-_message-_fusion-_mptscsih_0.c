int
FUN1(struct VAR1 * VAR2)
{
VAR3	*VAR4;
int		 VAR5;
VAR6	 *VAR7;
VAR8	*VAR9;


if ((VAR4 = FUN2(VAR2->VAR10->VAR11)) == NULL){
FUN3(KERN_ERR VAR12 ""
"", VAR2);
return VAR13;
}

VAR9 = VAR4->VAR9;
FUN3(VAR14 "",
VAR9->VAR15, VAR2);
FUN4(VAR2);

VAR7 = VAR2->VAR10->VAR16;
if (!VAR7 || !VAR7->VAR17) {
VAR5 = 0;
goto VAR18;
}


if (VAR7->VAR17->VAR19 & VAR20) {
VAR5 = VAR13;
goto VAR18;
}

VAR5 = FUN5(VAR4,
VAR21,
VAR7->VAR17->VAR22,
VAR7->VAR17->VAR23, 0, 0,
FUN6(VAR9));

VAR18:
FUN3 (VAR14 "",
VAR9->VAR15, ((VAR5 == 0) ? "" : "" ), VAR2);

if (VAR5 == 0)
return VAR24;
else
return VAR13;
}