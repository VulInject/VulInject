static const char *FUN1(u32 VAR1)
{
unsigned int VAR2 = (VAR1 >> 16) & 0xff;
unsigned int VAR3 = (VAR1 >> 24) & 0xff;

if (VAR3 < 0x5) {

switch (VAR2) {
case 0:
return "";
case 1:
return "";
case 3:
return "";
}
} else {

switch (VAR2) {
case 0:
return "";
case 1:
return "";
case 2:
return "";
case 3:
return "";
}
}

return "";
}