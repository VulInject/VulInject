int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned int VAR4, void *VAR5)
{
u64 VAR6, VAR7;
int VAR8 = VAR9;
int VAR10;

VAR6 = VAR3;
VAR7 = VAR4;

VAR10 = FUN2(VAR2, VAR11, &VAR6, &VAR7, VAR8);

switch (VAR4) {
case 1:
*(VAR12 *)VAR5 = (VAR12)VAR6;
break;
case 2:
*(VAR13 *)VAR5 = (VAR13)VAR6;
break;
case 4:
*(VAR14 *)VAR5 = (VAR14)VAR6;
break;
case 8:
*(VAR15 *)VAR5 = VAR6;
break;
default:
FUN3();
break;
}

return VAR10;
}