static int FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
struct VAR4 *VAR5 = &VAR3->VAR5;
int VAR6;



VAR6 = FUN2(VAR3);
if (VAR6)
goto VAR7;


VAR6 = FUN3(&VAR5->VAR8,
VAR9, 0, 0,
0, VAR10,
0);
if (VAR6 != -VAR11) {
FUN4("",
VAR6);
goto VAR7;
}

FUN5(VAR3);


VAR6 = FUN3(&VAR5->VAR8,
VAR9, 0, 0,
0, VAR10,
0);
if (VAR6) {
FUN4("",
VAR6);
goto VAR7;
}

VAR7:
FUN6(VAR3);
return VAR6;
}