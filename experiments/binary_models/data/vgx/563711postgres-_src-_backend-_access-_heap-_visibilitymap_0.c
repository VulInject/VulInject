VAR1
FUN1(Relation VAR2, BlockNumber VAR3)
{
BlockNumber VAR4;


BlockNumber VAR5 = FUN2(VAR3);
uint32		VAR6 = FUN3(VAR3);
uint8		VAR7 = FUN4(VAR3);

FUN5(VAR8, "", FUN6(VAR2), VAR3);


if (!FUN7(FUN8(VAR2), VAR9))
return VAR10;


if (VAR6 != 0 || VAR7 != 0)
{
Buffer		VAR11;
Page		VAR12;
char	   *VAR13;

VAR4 = VAR5 + 1;

VAR11 = FUN9(VAR2, VAR5, false);
if (!FUN10(VAR11))
{

return VAR10;
}

VAR12 = FUN11(VAR11);
VAR13 = FUN12(VAR12);

FUN13(VAR11, VAR14);


FUN14();


FUN15(&VAR13[VAR6 + 1], 0, VAR15 - (VAR6 + 1));


VAR13[VAR6] &= (1 << VAR7) - 1;


FUN16(VAR11);
if (!VAR16 && FUN17(VAR2) && FUN18())
FUN19(VAR11, false);

FUN20();

FUN21(VAR11);
}
else
VAR4 = VAR5;

if (FUN22(FUN8(VAR2), VAR9) <= VAR4)
{

return VAR10;
}

return VAR4;
}