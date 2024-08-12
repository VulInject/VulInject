bool FUN1(VAR1 *VAR2, const void *VAR3, size_t VAR4) {


if(FUN2(VAR2)) {
return true;
}

if(!FUN3(VAR2, "", VAR5, (unsigned long)VAR4)) {
return false;
}

FUN4(VAR2, VAR3, VAR4);
return true;
}