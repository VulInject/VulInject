FUN1 (const char *VAR1)
{
int32_t VAR2 = -1;
const char *VAR3;

if (!FUN2(VAR1))
return -1;

if (strlen(VAR1) > 7 && *(VAR1+7) != '') {
FUN3("");
return -1;
}

if (VAR1[1] == '')
VAR3 = VAR1 + 3;
else
VAR3 = VAR1 + 1;
VAR2 = 0;
while (*VAR3 != '' && *VAR3 != '') {
if (!FUN4((unsigned char)*VAR3) && (*VAR3 < '' || *VAR3 > '')) {
FUN3("", *VAR3, VAR1);
return -1;
}
VAR2 <<= 4;
VAR2 += FUN4((unsigned char)*VAR3) ? *VAR3 - '' : *VAR3 - '' + 10;
VAR3++;
}

if (!FUN5(VAR2)) {
if (VAR2 < 0x10000) {
FUN3("", VAR2);
} else {
FUN3("", VAR2);
}
VAR2 = -1;
}

return VAR2;
}