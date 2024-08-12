static int FUN1(struct VAR1 *VAR2, void *VAR3, int VAR4)
{
struct VAR5 *VAR6 = VAR3;
struct VAR7	*VAR7;
struct VAR8	*VAR9 = VAR6->VAR8;

FUN2();

VAR9->VAR2              = VAR2;
VAR6->VAR8       = NULL;
VAR2->VAR10        = VAR9;
VAR2->VAR11      = VAR12;
VAR2->VAR13 = VAR14;
VAR2->VAR15          = VAR16;
VAR2->VAR17             = &VAR18;
VAR2->VAR19      = 1;


VAR6->VAR20.VAR21 = VAR6->VAR22;
VAR7 = FUN3(VAR2, NULL,
&VAR23,
&VAR24,
&VAR6->VAR20);
VAR2->VAR25 = FUN4(VAR7);
if (FUN5(!VAR2->VAR25))
return -VAR26;


if (FUN5(!FUN6(VAR2, "", VAR9,
&VAR27)))
return -VAR26;

return 0;
}