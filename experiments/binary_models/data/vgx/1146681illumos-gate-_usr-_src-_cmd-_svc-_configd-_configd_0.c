int
FUN1(VAR1 *VAR2, VAR3 *VAR4,
size_t VAR5, int *VAR6)
{
int VAR7;
int VAR8 = 0;
uint32_t VAR9 = 0;
psinfo_t VAR10;

if (VAR11 != 0) {

if (FUN2(VAR2) != VAR11 ||
read(VAR12, &VAR10, sizeof (VAR10)) !=
sizeof (VAR10))
return (VAR13);

VAR8 = 1;			
} else if (VAR14 != 0) {

if (FUN3(VAR2) != VAR14)
return (VAR13);

VAR8 = 1;
}


(((VAR5) >= FUN4(VAR3, VAR15)) ?	\
((*(VAR16) = (VAR4)->VAR15), 1) : 0)

if (!FUN5(VAR4, VAR5, VAR17, &VAR7))
return (VAR18);


if (VAR7 & ~VAR19)
return (VAR20);

if (VAR7 & VAR21)
if (!FUN5(VAR4, VAR5, VAR22, &VAR9))
return (VAR18);

return (FUN6(FUN2(VAR2), VAR9, VAR8,
VAR6));
}