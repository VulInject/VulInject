VAR1
FUN1(VAR2)
{
Name		VAR3 = FUN2(0);
StringInfoData VAR4;

FUN3(&VAR4);
FUN4(&VAR4, FUN5(*VAR3), strlen(FUN5(*VAR3)));
FUN6(FUN7(&VAR4));
}





static int
FUN8(Name VAR5, Name VAR6, Oid VAR7)
{

if (VAR7 == VAR8)
return FUN9(FUN5(*VAR5), FUN5(*VAR6), VAR9);


return FUN10(FUN5(*VAR5), strlen(FUN5(*VAR5)),
FUN5(*VAR6), strlen(FUN5(*VAR6)),
VAR7);
}