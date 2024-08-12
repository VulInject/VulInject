static struct VAR1 *FUN1(struct VAR2 *VAR3, unsigned int VAR4)
{
struct VAR1 *VAR5 = NULL;
struct VAR6 *VAR6;

if (VAR3->VAR7)
return *FUN2(VAR3->VAR5, 0);

VAR5 = FUN3(VAR3);
if (!VAR5)
return NULL;

if (VAR3->VAR8) {
VAR6 = FUN4(VAR3, VAR5, VAR4);
if (!VAR6)
goto VAR9;
FUN5(VAR5, VAR6);
} else {

VAR6 = VAR3->VAR10->FUN6(NULL, NULL,
VAR11, VAR5,
&VAR3->VAR7);
if (FUN7(VAR6))
goto VAR9;
}

VAR5->VAR4 = VAR4;
FUN8(VAR5, 1);

if(VAR3->VAR7) {
*FUN2(VAR3->VAR5, 0) = VAR5;
VAR5->VAR4 = 0;
}

return VAR5;

VAR9:
FUN9(VAR5);
return NULL;
}