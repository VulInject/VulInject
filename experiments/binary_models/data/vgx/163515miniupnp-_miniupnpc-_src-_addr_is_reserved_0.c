int FUN1(const char * VAR1)
{
uint32_t VAR2, VAR3;
size_t VAR4;

VAR2 = FUN2(VAR1);
if (VAR2 == VAR5)
return 1;

if (FUN3(VAR6, VAR1, &VAR2) <= 0) {

return 1;
}

VAR3 = FUN4(VAR2);

for (VAR4 = 0; VAR4 < sizeof(VAR7)/sizeof(VAR7[0]); ++VAR4) {
if ((VAR3 >> VAR7[VAR4].VAR8) == (VAR7[VAR4].VAR3 >> VAR7[VAR4].VAR8))
return 1;
}

return 0;
}