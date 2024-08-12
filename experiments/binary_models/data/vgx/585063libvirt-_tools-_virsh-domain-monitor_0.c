FUN1(VAR1);
FUN2(VAR1,
VAR2,
FUN3(""),
FUN3(""),
FUN3(""),
);

static const char *
FUN4(int VAR3)
{
const char *VAR4 = FUN5(VAR3);
return VAR4 ? FUN6(VAR4) : FUN6("");
}