static int
FUN1(VAR1 *VAR2,
const VAR3 *VAR4, u_int VAR5)
{
u_int VAR6;
const char *VAR7 = "";

for (; VAR5 > 0; VAR4 += VAR6, VAR5 -= VAR6) {
u_int VAR8;

FUN2("", VAR7);
VAR7 = "";

VAR8 = FUN3(VAR4);

FUN2("",
FUN4(VAR9,"",VAR8));

if (VAR8 == VAR10 ||
VAR8 == VAR11)
VAR6 = 1;

else {
VAR6 = FUN3(VAR4 + 1);
if (VAR6 < 2) {
FUN2("", VAR6);
return 0;
}
}

if (VAR6 > VAR5) {
FUN2("", VAR6);
return 0;
}

FUN5(VAR4, VAR6);

switch (VAR8) {
case VAR11:
return 0;

case VAR12:
if (FUN6(VAR2, VAR4, VAR6) == -1)
goto VAR13;
break;

case VAR14:       
case VAR15:
case VAR16:
if (FUN7(VAR2, VAR4, VAR6) == -1)
goto VAR13;
break;

case VAR17:
if (VAR6 < 4) {
FUN2("", VAR6);
break;
}
FUN8(VAR4 + 3);
if (FUN9(VAR4 + 2) != 0)
FUN2("", FUN9(VAR4 + 2));
break;

case VAR10:       
case VAR18:
default:
break;
}
}
return 0;

VAR13:
return -1;
}


static const struct tok VAR19[] = {
{ VAR20,        "" },
{ VAR21,        "" },
{ VAR22,       "" }, 
{ 0,            NULL }
};