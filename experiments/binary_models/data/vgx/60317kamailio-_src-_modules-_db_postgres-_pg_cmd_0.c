static int FUN1(VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
int VAR7, VAR8;
VAR9 *VAR10;

VAR4 = FUN2(VAR2);

VAR6 = FUN2(VAR2->VAR11->VAR12[VAR13]);

VAR10 = VAR6->VAR14;
VAR4->VAR10 = FUN3(VAR6->VAR12, VAR4->VAR15);

if(PQresultStatus(VAR4->VAR10) != VAR16) {
FUN4(""
"");
return -1;
}

VAR8 = FUN5(VAR4->VAR10);
if(VAR2->VAR17 == NULL) {

VAR2->VAR17 = FUN6(VAR8 + 1);
VAR2->VAR18 = VAR8;
for(VAR7 = 0; VAR7 < VAR2->VAR18; VAR7++) {
struct VAR19 *VAR20;
if(FUN7(VAR2->VAR17 + VAR7, VAR2->VAR21.VAR22) < 0)
goto VAR23;
VAR20 = FUN2(VAR2->VAR17 + VAR7);
VAR20->VAR15 = FUN8(strlen(FUN9(VAR4->VAR10, VAR7)) + 1);
if(VAR20->VAR15 == NULL) {
VAR24;
goto VAR23;
}
strcpy(VAR20->VAR15, FUN9(VAR4->VAR10, VAR7));
VAR2->VAR17[VAR7].VAR15 = VAR20->VAR15;
}
} else {
if(VAR2->VAR18 != VAR8) {
FUN10(""
"");
goto VAR23;
}
}


for(VAR7 = 0; VAR7 < VAR2->VAR18; VAR7++) {
Oid VAR25 = FUN11(VAR4->VAR10, VAR7);
if(VAR2->VAR17[VAR7].VAR25 != VAR26)
continue;

if((VAR25 == VAR10[VAR27].VAR14) || (VAR25 == VAR10[VAR28].VAR14)
|| (VAR25 == VAR10[VAR29].VAR14))
VAR2->VAR17[VAR7].VAR25 = VAR30;

else if(VAR25 == VAR10[VAR31].VAR14)
VAR2->VAR17[VAR7].VAR25 = VAR32;

else if(VAR25 == VAR10[VAR33].VAR14)
VAR2->VAR17[VAR7].VAR25 = VAR34;

else if((VAR25 == VAR10[VAR35].VAR14)
|| (VAR25 == VAR10[VAR36].VAR14))
VAR2->VAR17[VAR7].VAR25 = VAR37;

else if((VAR25 == VAR10[VAR38].VAR14) || (VAR25 == VAR10[VAR39].VAR14)
|| (VAR25 == VAR10[VAR40].VAR14))
VAR2->VAR17[VAR7].VAR25 = VAR41;

else if((VAR25 == VAR10[VAR42].VAR14) || (VAR25 == VAR10[VAR43].VAR14))
VAR2->VAR17[VAR7].VAR25 = VAR44;

else if(VAR25 == VAR10[VAR45].VAR14)
VAR2->VAR17[VAR7].VAR25 = VAR46;

else {
FUN4(""
"",
VAR25, VAR2->VAR21.VAR22, FUN9(VAR4->VAR10, VAR7));
goto VAR23;
}
}
return 0;
VAR23:
return -1;
}