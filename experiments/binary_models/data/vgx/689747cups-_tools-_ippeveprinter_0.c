static VAR1 *			
FUN1(VAR2 *VAR3)		
{
VAR4	*VAR5;		
ippeve_job_t		VAR6,		
*VAR7;		


if ((VAR5 = FUN2(VAR3->VAR8, "", VAR9)) != NULL)
{
const char *VAR10 = FUN3(VAR5, 0, NULL);

const char *VAR11 = strrchr(VAR10, '');


if (VAR11 && FUN4(VAR11[1] & 255))
VAR6.VAR12 = FUN5(VAR11 + 1);
else
return (NULL);
}
else if ((VAR5 = FUN2(VAR3->VAR8, "", VAR13)) != NULL)
VAR6.VAR12 = FUN6(VAR5, 0);

FUN7(&(VAR3->VAR14->VAR15));
VAR7 = (VAR1 *)FUN8(VAR3->VAR14->VAR16, &VAR6);
FUN9(&(VAR3->VAR14->VAR15));

return (VAR7);
}