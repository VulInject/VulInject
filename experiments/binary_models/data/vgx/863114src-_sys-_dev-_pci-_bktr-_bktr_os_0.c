VAR1
FUN1(dev_t VAR2, off_t VAR3, int VAR4)
{
int		VAR5;
bktr_ptr_t	VAR6;

VAR5 = FUN2(VAR2);

if (FUN3(VAR2) > 0)	
return(-1);

VAR6 = VAR7.VAR8[VAR5];

if (VAR3 < 0)
return(-1);

if (VAR3 >= VAR6->VAR9 * VAR10)
return(-1);

return (FUN4(VAR6->VAR11, VAR6->VAR12->VAR13, 1,
VAR3, VAR4, VAR14));
}