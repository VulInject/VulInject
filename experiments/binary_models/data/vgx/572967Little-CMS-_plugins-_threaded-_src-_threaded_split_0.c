void FUN1(const VAR1* VAR2, cmsInt32Number VAR3,
cmsInt32Number VAR4, _cmsWorkSlice VAR5[])
{
cmsInt32Number VAR6;
cmsInt32Number VAR7 = VAR2->VAR8; 

cmsUInt32Number VAR9 = FUN2(FUN3((VAR10)VAR2->VAR11));
cmsUInt32Number VAR12 = FUN2(FUN4((VAR10)VAR2->VAR11));

for (VAR6 = 0; VAR6 < VAR3; VAR6++) {

const VAR13* VAR14 = VAR2->VAR15;
VAR13* VAR16 = VAR2->VAR17;

cmsInt32Number VAR18 = FUN5(VAR4, VAR7);

memcpy(&VAR5[VAR6], VAR2, sizeof(VAR1));

VAR5[VAR6].VAR15 = VAR14 + VAR6 * VAR4 * VAR9;
VAR5[VAR6].VAR17 = VAR16 + VAR6 * VAR4 * VAR12;
VAR5[VAR6].VAR8 = VAR18;

VAR7 -= VAR18;
}


if (VAR5 > 0) VAR5[VAR3 - 1].VAR8 += VAR7;
}