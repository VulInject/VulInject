static int FUN1(u32 VAR1)
{
switch (VAR1 & FUN2(0, ~0, ~0)) {
FUN3(18, 0,   0, VAR2);	
FUN3(18, 1,   0, VAR2);	
FUN3(18, 2, VAR2,   0);	
FUN3(18, 3, VAR2,   0);	
FUN3(20, 2, VAR2,   0);	
FUN3(21, 0,   0, VAR2);	
FUN3(21, 1,   0, VAR2);	
FUN3(21, 2,   0, VAR2);	
FUN3(22, 0,   0, VAR2);	
FUN3(22, 1,   0, VAR2);	
FUN3(22, 2,   0, VAR2);	
default:
return FUN4(VAR1);
}
}