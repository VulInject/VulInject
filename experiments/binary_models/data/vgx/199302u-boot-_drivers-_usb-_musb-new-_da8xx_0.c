static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR2);
struct VAR7 *VAR8 = FUN4(VAR2);
struct VAR9 *VAR10;
int VAR11;
void *VAR12 = FUN5(VAR2);


VAR11 = FUN6(VAR2, "", &VAR6->VAR13);
if (VAR11)
return VAR11;


VAR11 = FUN7(&VAR6->VAR13);
if (VAR11)
return VAR11;


FUN8(33);


FUN9(&VAR6->VAR13);

VAR8->VAR14 = true;
VAR10 = &VAR6->VAR10;

VAR4->VAR4 = FUN10(&VAR6->VAR6,
(struct VAR15 *)VAR10,
VAR6->VAR12);
if (!VAR4->VAR4) {
VAR11 = -VAR16;
goto VAR17; 
}

VAR11 = FUN11(VAR4);

if (VAR11 == 0)
return 0;
VAR17:

FUN12(&VAR6->VAR13);
FUN13(33);
return VAR11;
}