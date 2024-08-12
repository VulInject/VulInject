static int FUN1(struct VAR1 *VAR1, int VAR2, int VAR3)
{
struct VAR4 *VAR5 = VAR1->VAR5;
u32 VAR6;
int VAR7;



VAR7 = FUN2(VAR1, VAR2);
if (VAR7)
return VAR7;

VAR6 = VAR3 << VAR8;
FUN3(VAR5, VAR9, VAR6);


VAR6 |= (0x1 << VAR10);
FUN3(VAR5, VAR9, VAR6);

VAR7 = FUN4(VAR1, 1);
if (VAR7)
return VAR7;


VAR6 = VAR3 << VAR8;
FUN3(VAR5, VAR9, VAR6);


VAR7 = FUN4(VAR1, 0);
if (VAR7)
return VAR7;


VAR6 = 0x1 << VAR11;
FUN3(VAR5, VAR9, VAR6);


VAR7 = FUN4(VAR1, 1);
if (VAR7)
return VAR7;


VAR6 = VAR3 << VAR8;
FUN3(VAR5, VAR9, VAR6);


VAR7 = FUN4(VAR1, 0);
if (VAR7)
return VAR7;

FUN3(VAR5, VAR9, 0x0);

return 0;
}