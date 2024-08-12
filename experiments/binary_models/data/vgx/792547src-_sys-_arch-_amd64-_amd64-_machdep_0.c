int
FUN1(int *VAR1, u_int VAR2, void *VAR3, VAR4 *VAR5, void *VAR6,
size_t VAR7, struct VAR8 *VAR9)
{
VAR10 *VAR11;
int VAR12;


if (VAR2 != 1 && VAR1[0] != VAR13)
return (VAR14);	       

if (!(VAR15 & VAR16))
return VAR17;

switch (VAR1[0]) {
case VAR18:
if ((VAR11 = FUN2(VAR19)) == NULL)
return VAR20;
VAR12 = VAR11->VAR21;
return FUN3(VAR3, VAR5, VAR6, VAR12);
case VAR13:
if (VAR2 != 2)
return VAR14;
if ((VAR11 = FUN2(VAR1[1])) == NULL)
return VAR20;
return FUN4(VAR3, VAR5, VAR6, VAR11, sizeof(*VAR11));
case VAR22:
return FUN3(VAR3, VAR5, VAR6, VAR23);
default:
return VAR17;
}

}