static int FUN1(struct VAR1 *VAR2, int VAR3)
{
unsigned long VAR4, VAR5;
int VAR6;

VAR6 = 0;


VAR5 = FUN2(FUN3(VAR2));
if (!(VAR5 & (VAR7 | VAR8))) {
VAR6 = FUN4(VAR2);
if (VAR6)
goto VAR9;
}

FUN5(FUN6(VAR3), FUN7(VAR2));
FUN8(); 
FUN5(FUN9(VAR3), FUN7(VAR2));
FUN8(); 


VAR4 = 1000000;
while (!(FUN2(FUN3(VAR2)) & FUN10(VAR3)) && VAR4)
VAR4--;

if (!VAR4) {
FUN5(FUN11(VAR3), FUN7(VAR2));
FUN8(); 
VAR6 = -VAR10;
}
VAR9:
return VAR6;
}