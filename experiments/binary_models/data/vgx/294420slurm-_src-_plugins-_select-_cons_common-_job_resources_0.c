extern int FUN1(VAR1 *VAR2, job_res_job_action_t VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
VAR7 *VAR8;
VAR9 *VAR10;
List VAR11;
int VAR12, VAR13;
VAR14 *VAR15;
bool VAR16 = true;

if (!VAR5 || !VAR5->VAR15) {
FUN2("",
VAR2);
return VAR17;
}

FUN3("", VAR2,
FUN4(VAR3));

if (VAR18.VAR19 & VAR20)
FUN5(VAR2);

if (VAR2->VAR21)
VAR16 = false;
for (VAR12 = 0, VAR13 = -1; (VAR8 = FUN6(VAR5->VAR22, &VAR12));
VAR12++) {
VAR13++;
if (VAR5->VAR23[VAR13] == 0)
continue;  

if (VAR3 != VAR24) {
if (VAR25[VAR12].VAR26)
VAR11 = VAR25[VAR12].VAR26;
else
VAR11 = VAR8->VAR26;
VAR15 = FUN7(VAR5, VAR13);
if (VAR2->VAR27 &&
(VAR2->VAR27->VAR28 == 1))
FUN8(
VAR2->VAR29,
&VAR2->VAR21,
VAR11, VAR5->VAR30,
VAR12, VAR13, VAR2->VAR31,
VAR8->VAR32, VAR15, VAR16);
else
FUN9(
VAR2->VAR29,
&VAR2->VAR21,
VAR11, VAR5->VAR30,
VAR12, VAR13, VAR2->VAR31,
VAR8->VAR32, VAR15, VAR16);

FUN10(VAR11, VAR8->VAR32);
FUN11(VAR15);

if (VAR5->VAR33[VAR13] == 0)
continue;	
VAR25[VAR12].VAR34 +=
VAR5->VAR33[VAR13];
if ((VAR25[VAR12].VAR34 >
VAR8->VAR35)) {
FUN2(""
""VAR36"",
VAR8->VAR32,
VAR25[VAR12].VAR34,
VAR2);
}
}
}

if (VAR3 != VAR24) {
FUN12(VAR2->VAR21,
&VAR2->VAR37,
&VAR2->VAR38,
&VAR2->VAR39);
}


if (VAR3 != VAR40) {
for (VAR10 = VAR41; VAR10; VAR10 = VAR10->VAR42) {
if (VAR10->VAR43 == VAR2->VAR43)
break;
}
if (!VAR10) {
char *VAR44;
if (VAR2->VAR43)
VAR44 = VAR2->VAR43->VAR32;
else
VAR44 = VAR2->VAR45;
FUN2("",
VAR44);
return VAR17;
}
if (!VAR10->VAR46) {
VAR10->VAR46 = xcalloc(VAR10->VAR47,
sizeof(VAR48));
}


for (VAR12 = 0; VAR12 < VAR10->VAR47; VAR12++) {
if (!FUN13(VAR5, &(VAR10->VAR46[VAR12])))
continue;
FUN3("",
VAR2,
VAR10->VAR43->VAR32, VAR12);
FUN14(VAR5, &(VAR10->VAR46[VAR12]));
break;
}
if (VAR12 >= VAR10->VAR47) {

FUN2(""
"",
VAR2);

}

for (VAR12 = 0, VAR13 = -1; FUN6(VAR5->VAR22, &VAR12);
VAR12++) {
VAR13++;
if (VAR5->VAR23[VAR13] == 0)
continue;  
VAR25[VAR12].VAR49 += VAR5->VAR50;
}
if (VAR18.VAR19 & VAR20) {
FUN15("");
FUN16(VAR10);
}
}
return VAR51;
}