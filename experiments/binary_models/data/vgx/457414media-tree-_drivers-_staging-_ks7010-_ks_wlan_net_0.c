static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR3);
struct VAR1 *VAR6 = &VAR5->VAR6;

if (!FUN3(&VAR7)) {
if (VAR5->VAR8 < VAR9)
return NULL;	
else
return VAR6;
}


VAR6->VAR10.VAR11 = 0;	
VAR6->VAR10.VAR12 = 0;	
VAR6->VAR10.VAR13 = 0;	
VAR6->VAR10.VAR14 = 0;	
VAR6->VAR10.VAR15 = 0;	
VAR6->VAR16.VAR17 = 0;	

return VAR6;
}