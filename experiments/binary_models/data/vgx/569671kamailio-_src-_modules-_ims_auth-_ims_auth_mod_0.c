static int FUN1(void** VAR1, int VAR2) {

if (strlen((char*) *VAR1) <= 0) {
FUN2("", VAR2);
return -1;
}

if (VAR2 == 1) {        
if (FUN3(VAR1, VAR2) < 0)
return -1;
return 0;
} else if (VAR2 == 2) {
if (FUN4(VAR1, 1) == -1) {
FUN2("");
return -1;
}
} else if (VAR2 == 3)  {
if (FUN4(VAR1, 1) == -1) {
FUN2("");
return -1;
}
}

return 0;
}