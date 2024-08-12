VAR1 FUN1(VAR2 *VAR3, GPMF_LEVELS VAR4)
{
if (VAR3)
{
if (VAR3->VAR5+1 < VAR3->VAR6)
{

uint32_t VAR7, VAR8 = FUN2(VAR3->VAR9[VAR3->VAR5 + 1]);
uint32_t VAR10 = (FUN3(VAR3->VAR9[VAR3->VAR5 + 1]) >> 2);

if (VAR11 != FUN4(VAR3, VAR10))
{
if (VAR4 & VAR12 && VAR4 & VAR13) 
return FUN5(VAR3);
else
return VAR14;
}

if (VAR15 == VAR8 && VAR16 == VAR3->VAR9[VAR3->VAR5] && VAR3->VAR17 == 0)
{
VAR3->VAR18[VAR3->VAR17] = VAR3->VAR5;
VAR3->VAR19[VAR3->VAR17] = VAR10;
if (VAR4 & VAR13)
VAR3->VAR5 += 2;
else
VAR3->VAR5 += 2 + VAR10;
}
else
{
if (VAR10 + 2 > VAR3->VAR19[VAR3->VAR17])
return VAR14;

if (VAR4 & VAR13 && VAR8 == VAR15)
{
VAR3->VAR18[VAR3->VAR17] = VAR3->VAR5;
VAR3->VAR5 += 2;
VAR3->VAR19[VAR3->VAR17] -= VAR10 + 2;

VAR3->VAR17++;
if (VAR3->VAR17 > VAR20)
return VAR14;

VAR3->VAR19[VAR3->VAR17] = VAR10;
}
else
{
if (VAR4 & VAR13)
{
VAR3->VAR5 += VAR10 + 2;
VAR3->VAR19[VAR3->VAR17] -= VAR10 + 2;
}
else
{
if (VAR3->VAR19[VAR3->VAR17] - (VAR10 + 2) > 0)
{
VAR3->VAR5 += VAR10 + 2;
VAR3->VAR19[VAR3->VAR17] -= VAR10 + 2;
}
else
{
return VAR21;   
}
}
}
} 

while (VAR3->VAR5 < VAR3->VAR6 && VAR3->VAR19[VAR3->VAR17] > 0 && VAR3->VAR9[VAR3->VAR5] == VAR22)
{
VAR3->VAR5++;
VAR3->VAR19[VAR3->VAR17]--;
}

while (VAR3->VAR17 > 0 && VAR3->VAR19[VAR3->VAR17] == 0)
{
VAR3->VAR17--;




}

if (VAR3->VAR5 < VAR3->VAR6)
{
while (VAR3->VAR5+1 < VAR3->VAR6 && VAR3->VAR19[VAR3->VAR17] > 0 && VAR3->VAR9[VAR3->VAR5] == VAR22)
{
VAR3->VAR5++;
VAR3->VAR19[VAR3->VAR17]--;
}

if (VAR3->VAR5 + 1 < VAR3->VAR6)
{
VAR7 = VAR3->VAR9[VAR3->VAR5];
if (!FUN6(VAR7))
{
if (VAR4 & VAR12 && VAR4 & VAR13) 
return FUN5(VAR3);
else
return VAR14;
}

if (FUN7(VAR3->VAR9[VAR3->VAR5 + 1]) == 0)
{
if (VAR4 & VAR12 && VAR4 & VAR13) 
return FUN5(VAR3);
else
return VAR14;
}

VAR8 = FUN2(VAR3->VAR9[VAR3->VAR5+1]);
if (VAR8 != VAR15 && VAR8 != VAR23 && VAR8 != VAR24 && FUN8((VAR25)VAR8) == 0)
{
if (VAR4 & VAR12)
return FUN1(VAR3, VAR4);
else
return VAR26;
}
if (VAR7 == VAR27 && VAR3->VAR5 + 2 < VAR3->VAR6)
VAR3->VAR28 = FUN9(VAR3->VAR9[VAR3->VAR5 + 2]);
if (VAR7 == VAR29)
{
if (VAR3->VAR5 + 1 >= VAR3->VAR6)
return VAR14;

VAR10 = FUN3(VAR3->VAR9[VAR3->VAR5 + 1]); 
if (VAR10 > sizeof(VAR3->VAR30) - 1)
VAR10 = sizeof(VAR3->VAR30) - 1;

if ((VAR3->VAR5 + 1 + ((VAR10 + 3) >> 2)) >= VAR3->VAR6)
return VAR14;

memcpy(VAR3->VAR30, &VAR3->VAR9[VAR3->VAR5 + 2], VAR10);
VAR3->VAR30[VAR10] = 0;
}
}
else
{

return VAR31;
}
}
else
{

return VAR31;
}


VAR10 = (FUN3(VAR3->VAR9[VAR3->VAR5 + 1]) >> 2);
if (VAR11 != FUN4(VAR3, VAR10))
{
if (VAR4 & VAR12 && VAR4 & VAR13) 
return FUN5(VAR3);
else
return VAR14;
}
return VAR11;
}
else
{

return VAR31;
}
}
return VAR32;
}