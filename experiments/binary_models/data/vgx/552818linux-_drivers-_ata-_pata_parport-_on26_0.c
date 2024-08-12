static int FUN1( VAR1 *VAR2, int VAR3, int VAR4 )

{       int     VAR5, VAR6, VAR7;

VAR7 = (VAR4<<2) + 1 + VAR3;

switch (VAR2->VAR8)  {

case 0: FUN2(1); VAR9; FUN2(VAR7); VAR10; FUN2(0); VAR9; 
FUN3(6); VAR5 = FUN4(); FUN3(4);
FUN3(6); VAR6 = FUN4(); FUN3(4);
FUN3(6); FUN3(4); FUN3(6); FUN3(4);
return FUN5(VAR5,VAR6);

case 1: FUN2(1); VAR9; FUN2(VAR7); VAR10; FUN2(0); VAR9;
FUN3(0x26); VAR5 = FUN6(); FUN3(4); FUN3(0x26); FUN3(4);
return VAR5;

case 2:
case 3:
case 4: FUN7(1); FUN7(1); FUN3(5); FUN8(VAR7); FUN3(4);
FUN7(0); FUN7(0); FUN3(0x24); VAR5 = FUN9(); FUN3(4);
FUN3(0x24); (void)FUN9(); FUN3(4);
return VAR5;

}
return -1;
}