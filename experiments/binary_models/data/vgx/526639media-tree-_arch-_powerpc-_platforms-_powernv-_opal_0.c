static void FUN1(void)
{
s64 VAR1;

static struct opal_msg VAR2;
u32 VAR3;

VAR1 = FUN2(FUN3(&VAR2), sizeof(VAR2));

if (VAR1 == VAR4)
return;


if (VAR1) {
FUN4("",
VAR5, VAR1);
return;
}

VAR3 = FUN5(VAR2.VAR6);


if (VAR3 >= VAR7) {
FUN6("", VAR5, VAR3);
return;
}
FUN7(VAR3, (void *)&VAR2);
}