static VAR1* FUN1(VAR2 *VAR3)
{
VAR4 *VAR5;
VAR1 *VAR6;
VAR5 = FUN2(VAR3);

VAR6 = (VAR1*)FUN3(VAR5, VAR7);

if (VAR6 == NULL)
{
VAR6 = FUN4(FUN5(), VAR1);
VAR6->VAR8=0; 
VAR6->VAR9=0;
VAR6->VAR10=VAR3->VAR11;
VAR6->VAR12=0;
VAR6->VAR13=0;
VAR6->VAR14=0;
VAR6->VAR15=0;

FUN6(VAR5, VAR7, (void *)VAR6);
}
return VAR6;
}