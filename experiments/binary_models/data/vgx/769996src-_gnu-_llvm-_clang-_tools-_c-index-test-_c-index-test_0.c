int FUN1(const char **VAR1, const char **VAR2) {
while (VAR1 != VAR2) {
const char *VAR3 = *VAR1;
unsigned VAR4 = strlen(VAR3);
switch (VAR4) {
case 8:
if (memcmp(VAR3, "", 8) == 0) {
if (VAR1 + 2 >= VAR2)
return FUN2(VAR3, "");
if (!FUN3(VAR1[2]))
return FUN4("", VAR1[2]);
else {
CXString VAR5 = FUN5(VAR1[2]);
FUN6(FUN7(VAR1[1], VAR5));
}

VAR1 += 3;
continue;
}
break;
case 9:
if (memcmp(VAR3, "", 9) == 0) {
if (VAR1 + 1 >= VAR2)
return FUN2(VAR3, "");
FUN6(FUN8(VAR1[1]));
VAR1 += 2;
continue;
}
break;
case 10:
if (memcmp(VAR3, "", 10) == 0) {
if (VAR1 + 3 >= VAR2)
return FUN2(VAR3, ""
"");
if (!FUN3(VAR1[3]))
return FUN4("", VAR1[3]);
else {
CXString VAR5 = FUN5(VAR1[3]);
FUN6(FUN9(VAR1[1], FUN10(VAR1[2]), VAR5));
}
VAR1 += 4;
continue;
}
break;
case 12:
if (memcmp(VAR3, "", 12) == 0) {
if (VAR1 + 2 >= VAR2)
return FUN2(VAR3, "");
FUN6(FUN11(VAR1[1], VAR1[2]));
VAR1 += 3;
continue;
}
if (memcmp(VAR3, "", 12) == 0) {
if (VAR1 + 1 >= VAR2)
return FUN2(VAR3, "");
FUN6(FUN12(VAR1[1]));
VAR1 += 2;
continue;
}
if (memcmp(VAR3, "", 12) == 0) {
if (VAR1 + 2 >= VAR2)
return FUN2(VAR3, "");
if (!FUN3(VAR1[2]))
return FUN4("", VAR1[2]);
else {
CXString VAR5 = FUN5(VAR1[2]);
FUN6(FUN13(VAR1[1], VAR5));
}
VAR1 += 3;
continue;
}
break;
default:
break;
}
break;
}

if (VAR1 != VAR2) {
fprintf(VAR6, "", *VAR1);
FUN14();
return 1;
}
return 0;
}