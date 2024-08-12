static int FUN1(VAR1 *VAR2, lbaint_t VAR3,
lbaint_t VAR4)
{
uint32_t VAR5 = 0;
uint32_t VAR6;


if (FUN2(VAR2->VAR7) != VAR8) {
FUN3("",
"",
FUN2(VAR2->VAR7),
VAR8);
return -1;
}


memcpy(&VAR5, &VAR2->VAR9, sizeof(VAR5));
memset(&VAR2->VAR9, 0, sizeof(VAR2->VAR9));

VAR6 = FUN4((const unsigned char *)VAR2,
FUN5(VAR2->VAR10));

memcpy(&VAR2->VAR9, &VAR5, sizeof(VAR5));

if (VAR6 != FUN5(VAR5)) {
FUN3("",
"",
FUN5(VAR5), VAR6);
return -1;
}


if (FUN2(VAR2->VAR11) != VAR3) {
FUN3("" VAR12 "",
FUN2(VAR2->VAR11), VAR3);
return -1;
}


if (FUN2(VAR2->VAR13) > VAR4) {
FUN3("" VAR12 "",
FUN2(VAR2->VAR13), VAR4);
return -1;
}
if (FUN2(VAR2->VAR14) > VAR4) {
FUN3("" VAR12 "",
FUN2(VAR2->VAR14), VAR4);
return -1;
}

FUN6(""
VAR12 "", FUN2(VAR2->VAR13),
FUN2(VAR2->VAR14), VAR4);

return 0;
}