static int FUN1(const void *VAR1, const void *VAR2)
{
int VAR3, VAR4, VAR5, VAR6, VAR7;
const struct VAR8 *VAR9 = VAR1, *VAR10 = VAR2;
UChar VAR11, VAR12;
VAR13 *VAR14, *VAR15;
UCollationResult VAR16;

VAR17++;

for (VAR4=0;VAR4<3;VAR4++) {


if (((*VAR9).VAR18==VAR4)&&((*VAR10).VAR18!=VAR4)) return -1;
else if (((*VAR9).VAR18!=VAR4)&&((*VAR10).VAR18==VAR4)) return 1;

for(VAR3=0;;VAR3+=VAR5) {

VAR14=&((*VAR9).VAR19[VAR4][VAR3]);
VAR15=&((*VAR10).VAR19[VAR4][VAR3]);
VAR11=(*VAR9).VAR19[VAR4][VAR3];
VAR12=(*VAR10).VAR19[VAR4][VAR3];


if ((VAR11==VAR20'')&&(VAR12==VAR20'')) break;


if (VAR11==VAR20'') return -1;


if (VAR12==VAR20'') return 1;


if ((VAR21!=0)&&(VAR3>0)) {
if ((FUN2(VAR14))&&(!FUN2(VAR15)))
return -1;

if ((FUN2(VAR15))&&(!FUN2(VAR14)))
return 1;
}


if (FUN3(VAR14)<FUN3(VAR15))
return -1;

if (FUN3(VAR14)>FUN3(VAR15))
return 1;


if (VAR21==0) VAR5=VAR6=-1;
else {
VAR5=FUN4(VAR14);
VAR6=FUN4(VAR15);
}
VAR16 = FUN5(VAR22, VAR14, VAR5, VAR15, VAR6);
if (VAR16 == VAR23) return -1;
else if (VAR16 == VAR24) return 1;

if (VAR21==0) break;
}


VAR14=&((*VAR9).VAR25[VAR4][0]);
VAR15=&((*VAR10).VAR25[VAR4][0]);
VAR16 = FUN5(VAR22, VAR14, -1, VAR15, -1);
if (VAR16 == VAR23) return -1;
else if (VAR16 == VAR24) return 1;
VAR7=FUN6(VAR14,VAR15);
if (VAR7<0) return -1;
else if (VAR7>0) return 1;
}
return 0;
}