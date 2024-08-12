static int FUN1(xmlDocPtr VAR1, xmlNodePtr VAR2, VAR3 *VAR4)
{
xmlNodePtr VAR5;
xmlNodePtr VAR6;
VAR7 *VAR8;
int VAR9=1;

for(VAR5=VAR2->VAR10;VAR5;VAR5=VAR5->VAR11)
if (VAR5->VAR12==VAR13)
switch (VAR5->VAR14[0]){
case '': case '':
if (!VAR4->VAR15.VAR16){
VAR8 = FUN2(VAR1,VAR5->VAR17,1);
FUN3(&(VAR4->VAR15),(char*)VAR8);
FUN4(VAR8);
}					
break;
case '': case '':
VAR8 = FUN2(VAR1,VAR5->VAR17,1);
VAR4->VAR18 = FUN5(VAR8);
FUN4(VAR8);
break;

case '' : case '':






for(VAR6=VAR5->VAR10;VAR6;VAR6=VAR6->VAR11)
{

if (VAR6->VAR12==VAR13)
{
switch (VAR6->VAR14[0]) {
case '' : case '':





break;
case '' : case '':

if(!VAR19) {
FUN6(VAR20,"");
FUN6(VAR20,"");
}

VAR8 = FUN2(VAR1,VAR6->VAR17,1);
FUN3(&(VAR4->VAR21),(char*)VAR8);

FUN4(VAR8);
VAR9=2;
break;
default :
break;
}
}
}

break;				
}

return VAR9;
}