static int
FUN1(int VAR1, Boolean VAR2, int VAR3)
{
Position VAR4;
Position VAR5, VAR6, VAR7;
Dimension VAR8, VAR9, VAR10;



if (VAR11 == NULL || (VAR12.VAR13 & VAR14) == 0)
return VAR3;






if (VAR15 != NULL && FUN2(VAR15))
FUN3(VAR15, VAR16, &VAR8, VAR17, &VAR4, NULL);

FUN4(VAR11, &VAR9, &VAR10);
VAR5 = VAR9 * VAR1;

fprintf(VAR18, "",
VAR5, VAR19, VAR8, VAR9, VAR10, VAR3);

VAR7 = VAR19 + VAR8;
if (VAR2 || ((VAR5 >= VAR7 - VAR9))) {
fprintf(VAR18, "", VAR19, VAR19 + VAR9);
VAR5 += VAR9;
FUN5(VAR15, VAR4, VAR5 - VAR8 > 0 ? VAR5 - VAR8 : 0);
return VAR1 + 1;
}
else if (VAR2 || ((VAR5 <= VAR19 + VAR9 + VAR10))) {
fprintf(VAR18, "", VAR5 - VAR9);
VAR6 = VAR5 - 2 * VAR9;
FUN5(VAR15, VAR4, VAR6);
return VAR1 - 1;
}

return -2;
}