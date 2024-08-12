VAR1 FUN1(enum usnic_transport_type VAR2, u16 VAR3)
{
if (VAR2 == VAR4) {
FUN2(&VAR5);
if (!VAR3) {
VAR3 = FUN3(VAR6,
VAR7,
VAR8 ,
1 ,
0 );
VAR8 = (VAR3 & 4095) + 1;
} else if (FUN4(VAR3, VAR6)) {
FUN5("",
FUN6(VAR2));
FUN7(&VAR5);
goto VAR9;
}
FUN8(VAR6, VAR3, 1);
FUN7(&VAR5);
} else {
FUN5("",
FUN6(VAR2));
goto VAR9;
}

FUN9("", VAR3,
FUN6(VAR2));
return VAR3;

VAR9:
return 0;
}