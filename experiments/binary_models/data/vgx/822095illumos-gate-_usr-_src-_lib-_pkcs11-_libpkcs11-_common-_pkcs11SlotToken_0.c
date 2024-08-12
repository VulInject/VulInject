VAR1
FUN1(CK_SLOT_ID VAR2, CK_SLOT_INFO_PTR VAR3)
{

CK_RV VAR4;
CK_SLOT_ID VAR5; 

if (!VAR6) {
return (VAR7);
}


if ((VAR8 || VAR9) && !VAR10)
return (VAR11->FUN1(VAR2, VAR3));

if (VAR2 == VAR12) {

return (FUN2(VAR13, VAR3));
}


if (FUN3(VAR2, &VAR5) != VAR14) {
return (VAR15);
}

VAR4 = FUN4(VAR5)->FUN1(FUN5(VAR5), VAR3);


if (VAR4 == VAR16) {
return (VAR17);
}

return (VAR4);
}