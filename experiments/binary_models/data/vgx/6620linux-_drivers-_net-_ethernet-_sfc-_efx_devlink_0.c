static struct VAR1 *FUN1(struct VAR2 *VAR3, u32 VAR4)
{
struct VAR5 *VAR6;
u32 VAR7;
int VAR8;

if (FUN2(VAR3, VAR4, &VAR7)) {

if (VAR4 == VAR9)
FUN3(VAR3->VAR10, "");
else
FUN3(VAR3->VAR10, "",
VAR4);
return NULL;
}

VAR6 = FUN4(VAR3, VAR7);
if (!VAR6) {

if (VAR4 == VAR9)
FUN3(VAR3->VAR10, "");
else
FUN3(VAR3->VAR10, "",
VAR4);
return NULL;
}

VAR8 = FUN5(VAR3, VAR6);
if (VAR8) {
if (VAR4 == VAR9)
FUN6(VAR3->VAR10,
"");
else
FUN6(VAR3->VAR10,
"",
VAR4);
return NULL;
}

return &VAR6->VAR11;
}